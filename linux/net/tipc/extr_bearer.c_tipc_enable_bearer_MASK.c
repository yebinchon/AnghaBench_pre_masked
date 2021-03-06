
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u32 ;
struct tipc_net {int * bearer_list; } ;
struct tipc_media {char* priority; int (* enable_media ) (struct net*,struct tipc_bearer*,struct nlattr**) ;int window; int tolerance; } ;
struct tipc_bearer_names {int media_name; } ;
struct tipc_bearer {char* priority; int identity; char* domain; int net_plane; int bcast_addr; int up; int window; int tolerance; struct tipc_media* media; int name; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int EINVAL ;
 int ENOMEM ;
 int GFP_ATOMIC ;
 int MAX_BEARERS ;
 char* TIPC_MAX_LINK_PRI ;
 char* TIPC_MEDIA_LINK_PRI ;
 char* TIPC_MIN_LINK_PRI ;
 int bearer_disable (struct net*,struct tipc_bearer*) ;
 int bearer_name_validate (char const*,struct tipc_bearer_names*) ;
 int kfree (struct tipc_bearer*) ;
 struct tipc_bearer* kzalloc (int,int ) ;
 int pr_info (char*,char const*,char*) ;
 int pr_warn (char*,char const*,...) ;
 int rcu_assign_pointer (int ,struct tipc_bearer*) ;
 struct tipc_bearer* rtnl_dereference (int ) ;
 int strcmp (char const*,int ) ;
 int strcpy (int ,char const*) ;
 int stub1 (struct net*,struct tipc_bearer*,struct nlattr**) ;
 int test_and_set_bit_lock (int ,int *) ;
 int tipc_bearer_xmit_skb (struct net*,int,struct sk_buff*,int *) ;
 int tipc_disc_create (struct net*,struct tipc_bearer*,int *,struct sk_buff**) ;
 struct tipc_media* tipc_media_find (int ) ;
 scalar_t__ tipc_mon_create (struct net*,int) ;
 struct tipc_net* tipc_net (struct net*) ;

__attribute__((used)) static int tipc_enable_bearer(struct net *net, const char *name,
         u32 disc_domain, u32 prio,
         struct nlattr *attr[])
{
 struct tipc_net *tn = tipc_net(net);
 struct tipc_bearer_names b_names;
 int with_this_prio = 1;
 struct tipc_bearer *b;
 struct tipc_media *m;
 struct sk_buff *skb;
 int bearer_id = 0;
 int res = -EINVAL;
 char *errstr = "";

 if (!bearer_name_validate(name, &b_names)) {
  errstr = "illegal name";
  goto rejected;
 }

 if (prio > TIPC_MAX_LINK_PRI && prio != TIPC_MEDIA_LINK_PRI) {
  errstr = "illegal priority";
  goto rejected;
 }

 m = tipc_media_find(b_names.media_name);
 if (!m) {
  errstr = "media not registered";
  goto rejected;
 }

 if (prio == TIPC_MEDIA_LINK_PRI)
  prio = m->priority;


 while (bearer_id < MAX_BEARERS) {
  b = rtnl_dereference(tn->bearer_list[bearer_id]);
  if (!b)
   break;
  if (!strcmp(name, b->name)) {
   errstr = "already enabled";
   goto rejected;
  }
  bearer_id++;
  if (b->priority != prio)
   continue;
  if (++with_this_prio <= 2)
   continue;
  pr_warn("Bearer <%s>: already 2 bearers with priority %u\n",
   name, prio);
  if (prio == TIPC_MIN_LINK_PRI) {
   errstr = "cannot adjust to lower";
   goto rejected;
  }
  pr_warn("Bearer <%s>: trying with adjusted priority\n", name);
  prio--;
  bearer_id = 0;
  with_this_prio = 1;
 }

 if (bearer_id >= MAX_BEARERS) {
  errstr = "max 3 bearers permitted";
  goto rejected;
 }

 b = kzalloc(sizeof(*b), GFP_ATOMIC);
 if (!b)
  return -ENOMEM;

 strcpy(b->name, name);
 b->media = m;
 res = m->enable_media(net, b, attr);
 if (res) {
  kfree(b);
  errstr = "failed to enable media";
  goto rejected;
 }

 b->identity = bearer_id;
 b->tolerance = m->tolerance;
 b->window = m->window;
 b->domain = disc_domain;
 b->net_plane = bearer_id + 'A';
 b->priority = prio;
 test_and_set_bit_lock(0, &b->up);

 res = tipc_disc_create(net, b, &b->bcast_addr, &skb);
 if (res) {
  bearer_disable(net, b);
  errstr = "failed to create discoverer";
  goto rejected;
 }

 rcu_assign_pointer(tn->bearer_list[bearer_id], b);
 if (skb)
  tipc_bearer_xmit_skb(net, bearer_id, skb, &b->bcast_addr);

 if (tipc_mon_create(net, bearer_id)) {
  bearer_disable(net, b);
  return -ENOMEM;
 }

 pr_info("Enabled bearer <%s>, priority %u\n", name, prio);

 return res;
rejected:
 pr_warn("Enabling of bearer <%s> rejected, %s\n", name, errstr);
 return res;
}
