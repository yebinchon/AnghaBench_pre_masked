
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {scalar_t__ state; } ;
struct tipc_net {int node_list_lock; } ;
struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int extack; int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 struct tipc_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,int ,int ,int ) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct tipc_node*) ;
 int FUNC_8 (struct tipc_node*) ;
 struct tipc_node* FUNC_9 (struct net*,int ) ;
 int FUNC_10 (struct tipc_node*) ;
 int FUNC_11 (struct tipc_node*) ;
 int FUNC_12 (struct tipc_node*) ;

int FUNC_13(struct sk_buff *VAR_11, struct genl_info *VAR_12)
{
 struct net *VAR_13 = FUNC_4(VAR_11->sk);
 struct tipc_net *VAR_14 = FUNC_1(VAR_13, VAR_9);
 struct nlattr *VAR_15[VAR_8 + 1];
 struct tipc_node *VAR_16;
 u32 VAR_17;
 int VAR_18;


 if (!VAR_12->attrs[VAR_6])
  return -VAR_1;

 VAR_18 = FUNC_3(VAR_15, VAR_8,
       VAR_12->attrs[VAR_6],
       VAR_10, VAR_12->extack);
 if (VAR_18)
  return VAR_18;

 if (!VAR_15[VAR_7])
  return -VAR_1;

 VAR_17 = FUNC_2(VAR_15[VAR_7]);

 if (FUNC_0(VAR_13, VAR_17))
  return -VAR_2;

 FUNC_5(&VAR_14->node_list_lock);
 VAR_16 = FUNC_9(VAR_13, VAR_17);
 if (!VAR_16) {
  FUNC_6(&VAR_14->node_list_lock);
  return -VAR_3;
 }

 FUNC_11(VAR_16);
 if (VAR_16->state != VAR_4 &&
     VAR_16->state != VAR_5) {
  FUNC_12(VAR_16);
  VAR_18 = -VAR_0;
  goto err_out;
 }

 FUNC_7(VAR_16);
 FUNC_12(VAR_16);
 FUNC_8(VAR_16);

 VAR_18 = 0;
err_out:
 FUNC_10(VAR_16);
 FUNC_6(&VAR_14->node_list_lock);

 return VAR_18;
}
