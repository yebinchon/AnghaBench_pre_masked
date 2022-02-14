
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
struct tipc_net {int nametbl_lock; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct distr_item {int dummy; } ;


 int VAR_0 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 struct tipc_net* FUNC_6 (struct net*,int ) ;
 struct sk_buff* FUNC_7 (struct sk_buff_head*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int FUNC_11 (struct net*,struct distr_item*,int ,int) ;

void FUNC_12(struct net *VAR_2, struct sk_buff_head *VAR_3)
{
 struct tipc_net *VAR_4 = FUNC_6(VAR_2, VAR_1);
 struct tipc_msg *VAR_5;
 struct distr_item *VAR_6;
 uint VAR_7;
 u32 VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;

 FUNC_9(&VAR_4->nametbl_lock);
 for (VAR_9 = FUNC_7(VAR_3); VAR_9; VAR_9 = FUNC_7(VAR_3)) {
  FUNC_8(VAR_9);
  VAR_5 = FUNC_0(VAR_9);
  VAR_10 = FUNC_5(VAR_5);
  VAR_6 = (struct distr_item *)FUNC_2(VAR_5);
  VAR_7 = FUNC_3(VAR_5) / VAR_0;
  VAR_8 = FUNC_4(VAR_5);
  while (VAR_7--) {
   FUNC_11(VAR_2, VAR_6, VAR_8, VAR_10);
   VAR_6++;
  }
  FUNC_1(VAR_9);
 }
 FUNC_10(&VAR_4->nametbl_lock);
}
