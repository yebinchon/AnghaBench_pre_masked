
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int* active_links; struct tipc_link_entry* links; } ;
struct tipc_link_entry {int maddr; int lock; int link; } ;
struct sk_buff_head {int lock; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 scalar_t__ FUNC_2 (struct net*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net*,int,struct sk_buff_head*,int *) ;
 int FUNC_7 (int ,struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_8 (struct net*,struct sk_buff_head*) ;
 struct tipc_node* FUNC_9 (struct net*,int ) ;
 int FUNC_10 (struct tipc_node*,int,int) ;
 int FUNC_11 (struct tipc_node*) ;
 int FUNC_12 (struct tipc_node*) ;
 int FUNC_13 (struct tipc_node*) ;
 int FUNC_14 (struct net*,struct sk_buff_head*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct net *VAR_3, struct sk_buff_head *VAR_4,
     u32 VAR_5, int VAR_6)
{
 struct tipc_link_entry *VAR_7 = ((void*)0);
 struct tipc_node *VAR_8;
 struct sk_buff_head VAR_9;
 int VAR_10;
 int VAR_11;

 if (FUNC_2(VAR_3, VAR_5)) {
  FUNC_8(VAR_3, VAR_4);
  FUNC_4(&VAR_4->lock);
  FUNC_14(VAR_3, VAR_4);
  return 0;
 }

 VAR_8 = FUNC_9(VAR_3, VAR_5);
 if (FUNC_15(!VAR_8)) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }

 FUNC_12(VAR_8);
 VAR_10 = VAR_8->active_links[VAR_6 & 1];
 if (FUNC_15(VAR_10 == VAR_2)) {
  FUNC_13(VAR_8);
  FUNC_11(VAR_8);
  FUNC_1(VAR_4);
  return -VAR_0;
 }

 FUNC_0(&VAR_9);
 VAR_7 = &VAR_8->links[VAR_10];
 FUNC_3(&VAR_7->lock);
 VAR_11 = FUNC_7(VAR_7->link, VAR_4, &VAR_9);
 FUNC_5(&VAR_7->lock);
 FUNC_13(VAR_8);

 if (FUNC_15(VAR_11 == -VAR_1))
  FUNC_10(VAR_8, VAR_10, 0);
 else
  FUNC_6(VAR_3, VAR_10, &VAR_9, &VAR_7->maddr);

 FUNC_11(VAR_8);

 return VAR_11;
}
