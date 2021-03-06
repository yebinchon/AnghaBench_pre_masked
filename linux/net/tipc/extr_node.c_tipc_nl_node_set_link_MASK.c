
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_node {TYPE_1__* links; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int extack; int * attrs; } ;
struct TYPE_2__ {int maddr; struct tipc_link* link; } ;


 int EINVAL ;
 size_t TIPC_NLA_LINK ;
 int TIPC_NLA_LINK_MAX ;
 size_t TIPC_NLA_LINK_NAME ;
 size_t TIPC_NLA_LINK_PROP ;
 int TIPC_NLA_PROP_MAX ;
 size_t TIPC_NLA_PROP_PRIO ;
 size_t TIPC_NLA_PROP_TOL ;
 size_t TIPC_NLA_PROP_WIN ;
 int __skb_queue_head_init (struct sk_buff_head*) ;
 char* nla_data (struct nlattr*) ;
 int nla_get_u32 (struct nlattr*) ;
 int nla_parse_nested_deprecated (struct nlattr**,int ,int ,int ,int ) ;
 struct net* sock_net (int ) ;
 scalar_t__ strcmp (char*,int ) ;
 int tipc_bclink_name ;
 int tipc_bearer_xmit (struct net*,int,struct sk_buff_head*,int *) ;
 int tipc_link_set_prio (struct tipc_link*,int ,struct sk_buff_head*) ;
 int tipc_link_set_queue_limits (struct tipc_link*,int ) ;
 int tipc_link_set_tolerance (struct tipc_link*,int ,struct sk_buff_head*) ;
 int tipc_nl_bc_link_set (struct net*,struct nlattr**) ;
 int tipc_nl_link_policy ;
 int tipc_nl_parse_link_prop (struct nlattr*,struct nlattr**) ;
 struct tipc_node* tipc_node_find_by_name (struct net*,char*,int*) ;
 int tipc_node_read_lock (struct tipc_node*) ;
 int tipc_node_read_unlock (struct tipc_node*) ;

int tipc_nl_node_set_link(struct sk_buff *skb, struct genl_info *info)
{
 int err;
 int res = 0;
 int bearer_id;
 char *name;
 struct tipc_link *link;
 struct tipc_node *node;
 struct sk_buff_head xmitq;
 struct nlattr *attrs[TIPC_NLA_LINK_MAX + 1];
 struct net *net = sock_net(skb->sk);

 __skb_queue_head_init(&xmitq);

 if (!info->attrs[TIPC_NLA_LINK])
  return -EINVAL;

 err = nla_parse_nested_deprecated(attrs, TIPC_NLA_LINK_MAX,
       info->attrs[TIPC_NLA_LINK],
       tipc_nl_link_policy, info->extack);
 if (err)
  return err;

 if (!attrs[TIPC_NLA_LINK_NAME])
  return -EINVAL;

 name = nla_data(attrs[TIPC_NLA_LINK_NAME]);

 if (strcmp(name, tipc_bclink_name) == 0)
  return tipc_nl_bc_link_set(net, attrs);

 node = tipc_node_find_by_name(net, name, &bearer_id);
 if (!node)
  return -EINVAL;

 tipc_node_read_lock(node);

 link = node->links[bearer_id].link;
 if (!link) {
  res = -EINVAL;
  goto out;
 }

 if (attrs[TIPC_NLA_LINK_PROP]) {
  struct nlattr *props[TIPC_NLA_PROP_MAX + 1];

  err = tipc_nl_parse_link_prop(attrs[TIPC_NLA_LINK_PROP],
           props);
  if (err) {
   res = err;
   goto out;
  }

  if (props[TIPC_NLA_PROP_TOL]) {
   u32 tol;

   tol = nla_get_u32(props[TIPC_NLA_PROP_TOL]);
   tipc_link_set_tolerance(link, tol, &xmitq);
  }
  if (props[TIPC_NLA_PROP_PRIO]) {
   u32 prio;

   prio = nla_get_u32(props[TIPC_NLA_PROP_PRIO]);
   tipc_link_set_prio(link, prio, &xmitq);
  }
  if (props[TIPC_NLA_PROP_WIN]) {
   u32 win;

   win = nla_get_u32(props[TIPC_NLA_PROP_WIN]);
   tipc_link_set_queue_limits(link, win);
  }
 }

out:
 tipc_node_read_unlock(node);
 tipc_bearer_xmit(net, bearer_id, &xmitq, &node->links[bearer_id].maddr);
 return res;
}
