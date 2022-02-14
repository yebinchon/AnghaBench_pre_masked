
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct tipc_link {int peer_bearer_id; int addr; int net; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct tipc_link*,struct sk_buff_head*,struct sk_buff_head*) ;
 struct sk_buff* FUNC_9 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,struct tipc_msg*,int ,int ,int ,int ) ;
 int FUNC_11 (int ) ;

void FUNC_12(struct tipc_link *VAR_8,
        struct sk_buff_head *VAR_9)
{
 u32 VAR_10 = FUNC_11(VAR_8->net);
 struct tipc_msg *VAR_11, *VAR_12;
 struct sk_buff_head VAR_13;
 struct sk_buff *VAR_14;
 u32 VAR_15 = VAR_8->addr;

 FUNC_0(&VAR_13);
 VAR_14 = FUNC_9(VAR_6, VAR_1,
         VAR_2, VAR_0,
         VAR_15, VAR_10, 0, 0, 0);
 if (!VAR_14) {
  FUNC_7("%sunable to create tunnel packet\n", VAR_7);
  return;
 }

 VAR_11 = FUNC_2(VAR_14);
 FUNC_6(VAR_11, 1);
 FUNC_4(VAR_11, VAR_8->peer_bearer_id);

 VAR_12 = (struct tipc_msg *)FUNC_3(VAR_11);
 FUNC_10(VAR_10, VAR_12, VAR_5, VAR_3,
        VAR_0, VAR_15);
 FUNC_5(VAR_12, VAR_4);
 FUNC_1(&VAR_13, VAR_14);
 FUNC_8(VAR_8, &VAR_13, VAR_9);
}
