
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {struct tipc_link_entry* links; } ;
struct tipc_link_entry {int lock; struct tipc_link* link; } ;
struct tipc_link {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int extack; int * attrs; } ;


 int EINVAL ;
 size_t TIPC_NLA_LINK ;
 int TIPC_NLA_LINK_MAX ;
 size_t TIPC_NLA_LINK_NAME ;
 char* nla_data (struct nlattr*) ;
 int nla_parse_nested_deprecated (struct nlattr**,int ,int ,int ,int ) ;
 struct net* sock_net (int ) ;
 int spin_lock_bh (int *) ;
 int spin_unlock_bh (int *) ;
 scalar_t__ strcmp (char*,int ) ;
 int tipc_bclink_name ;
 int tipc_bclink_reset_stats (struct net*) ;
 int tipc_link_reset_stats (struct tipc_link*) ;
 int tipc_nl_link_policy ;
 struct tipc_node* tipc_node_find_by_name (struct net*,char*,unsigned int*) ;
 int tipc_node_read_lock (struct tipc_node*) ;
 int tipc_node_read_unlock (struct tipc_node*) ;

int tipc_nl_node_reset_link_stats(struct sk_buff *skb, struct genl_info *info)
{
 int err;
 char *link_name;
 unsigned int bearer_id;
 struct tipc_link *link;
 struct tipc_node *node;
 struct nlattr *attrs[TIPC_NLA_LINK_MAX + 1];
 struct net *net = sock_net(skb->sk);
 struct tipc_link_entry *le;

 if (!info->attrs[TIPC_NLA_LINK])
  return -EINVAL;

 err = nla_parse_nested_deprecated(attrs, TIPC_NLA_LINK_MAX,
       info->attrs[TIPC_NLA_LINK],
       tipc_nl_link_policy, info->extack);
 if (err)
  return err;

 if (!attrs[TIPC_NLA_LINK_NAME])
  return -EINVAL;

 link_name = nla_data(attrs[TIPC_NLA_LINK_NAME]);

 if (strcmp(link_name, tipc_bclink_name) == 0) {
  err = tipc_bclink_reset_stats(net);
  if (err)
   return err;
  return 0;
 }

 node = tipc_node_find_by_name(net, link_name, &bearer_id);
 if (!node)
  return -EINVAL;

 le = &node->links[bearer_id];
 tipc_node_read_lock(node);
 spin_lock_bh(&le->lock);
 link = node->links[bearer_id].link;
 if (!link) {
  spin_unlock_bh(&le->lock);
  tipc_node_read_unlock(node);
  return -EINVAL;
 }
 tipc_link_reset_stats(link);
 spin_unlock_bh(&le->lock);
 tipc_node_read_unlock(node);
 return 0;
}
