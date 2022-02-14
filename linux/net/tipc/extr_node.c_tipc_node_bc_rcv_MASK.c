
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff_head {int dummy; } ;
struct tipc_bclink_entry {struct sk_buff_head namedq; struct sk_buff_head inputq1; int link; } ;
struct tipc_node {struct tipc_bclink_entry bc_entry; struct tipc_link_entry* links; } ;
struct tipc_msg {int dummy; } ;
struct tipc_link_entry {int maddr; int link; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff_head*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct sk_buff_head*) ;
 int FUNC_7 (struct net*,int ,struct sk_buff*) ;
 int FUNC_8 (struct net*,int,struct sk_buff_head*,int *) ;
 int FUNC_9 (int ,struct sk_buff_head*) ;
 int FUNC_10 (struct net*,struct sk_buff_head*) ;
 struct tipc_node* FUNC_11 (struct net*,scalar_t__) ;
 int FUNC_12 (struct tipc_node*) ;
 int FUNC_13 (struct tipc_node*) ;
 int FUNC_14 (struct tipc_node*) ;
 int FUNC_15 (struct tipc_node*) ;
 int FUNC_16 (struct tipc_node*) ;
 scalar_t__ FUNC_17 (struct net*) ;

__attribute__((used)) static void FUNC_18(struct net *VAR_3, struct sk_buff *VAR_4, int VAR_5)
{
 int VAR_6;
 struct sk_buff_head VAR_7;
 struct tipc_bclink_entry *VAR_8;
 struct tipc_link_entry *VAR_9;
 struct tipc_msg *VAR_10 = FUNC_1(VAR_4);
 int VAR_11 = FUNC_5(VAR_10);
 u32 VAR_12 = FUNC_3(VAR_10);
 struct tipc_node *VAR_13;

 FUNC_0(&VAR_7);


 if ((VAR_11 == VAR_0) && (VAR_12 != FUNC_17(VAR_3)))
  VAR_13 = FUNC_11(VAR_3, VAR_12);
 else
  VAR_13 = FUNC_11(VAR_3, FUNC_4(VAR_10));
 if (!VAR_13) {
  FUNC_2(VAR_4);
  return;
 }
 VAR_8 = &VAR_13->bc_entry;
 VAR_9 = &VAR_13->links[VAR_5];

 VAR_6 = FUNC_7(VAR_3, VAR_8->link, VAR_4);


 if (VAR_6 & VAR_2) {
  FUNC_14(VAR_13);
  FUNC_9(VAR_9->link, &VAR_7);
  FUNC_15(VAR_13);
 }

 if (!FUNC_6(&VAR_7))
  FUNC_8(VAR_3, VAR_5, &VAR_7, &VAR_9->maddr);

 if (!FUNC_6(&VAR_8->inputq1))
  FUNC_12(VAR_13);


 if (!FUNC_6(&VAR_13->bc_entry.namedq))
  FUNC_10(VAR_3, &VAR_13->bc_entry.namedq);


 if (VAR_6 & VAR_1)
  FUNC_16(VAR_13);

 FUNC_13(VAR_13);
}
