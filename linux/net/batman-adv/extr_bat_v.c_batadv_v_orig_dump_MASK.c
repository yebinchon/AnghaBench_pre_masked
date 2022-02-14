
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct hlist_head {int dummy; } ;
struct batadv_priv {struct batadv_hashtable* orig_hash; } ;
struct batadv_hashtable {int size; struct hlist_head* table; } ;
struct batadv_hard_iface {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 TYPE_2__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int,int ,struct batadv_priv*,struct batadv_hard_iface*,struct hlist_head*,int*,int*) ;

__attribute__((used)) static void
FUNC_2(struct sk_buff *VAR_0, struct netlink_callback *VAR_1,
     struct batadv_priv *VAR_2,
     struct batadv_hard_iface *VAR_3)
{
 struct batadv_hashtable *VAR_4 = VAR_2->orig_hash;
 struct hlist_head *VAR_5;
 int VAR_6 = VAR_1->args[0];
 int VAR_7 = VAR_1->args[1];
 int VAR_8 = VAR_1->args[2];
 int VAR_9 = FUNC_0(VAR_1->skb).portid;

 while (VAR_6 < VAR_4->size) {
  VAR_5 = &VAR_4->table[VAR_6];

  if (FUNC_1(VAR_0, VAR_9,
           VAR_1->nlh->nlmsg_seq,
           VAR_2, VAR_3, VAR_5, &VAR_7,
           &VAR_8))
   break;

  VAR_6++;
 }

 VAR_1->args[0] = VAR_6;
 VAR_1->args[1] = VAR_7;
 VAR_1->args[2] = VAR_8;
}
