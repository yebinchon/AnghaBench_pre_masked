
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct tipc_msg*,int ) ;
 int FUNC_10 (struct tipc_msg*) ;
 scalar_t__ FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_13 (int,int ) ;
 int FUNC_14 (struct sk_buff*,struct tipc_msg*,int) ;
 int FUNC_15 (int ,struct tipc_msg*,int ,int ,int,int) ;

bool FUNC_16(struct sk_buff **VAR_6, struct tipc_msg *VAR_7,
     u32 VAR_8, u32 VAR_9)
{
 struct sk_buff *VAR_10;
 struct tipc_msg *VAR_11;
 u32 VAR_12 = FUNC_10(VAR_7);
 u32 VAR_13 = VAR_8 - VAR_2;

 if (FUNC_11(VAR_7) == VAR_4)
  return 0;
 if (FUNC_11(VAR_7) == VAR_5)
  return 0;
 if (FUNC_11(VAR_7) == VAR_0)
  return 0;
 if (VAR_12 > (VAR_13 / 2))
  return 0;

 VAR_10 = FUNC_13(VAR_13, VAR_1);
 if (!VAR_10)
  return 0;

 FUNC_12(VAR_10, VAR_2);
 VAR_11 = FUNC_0(VAR_10);
 FUNC_15(FUNC_4(VAR_7), VAR_11, VAR_3, 0,
        VAR_2, VAR_9);
 FUNC_8(VAR_11, FUNC_3(VAR_7));
 FUNC_9(VAR_11, FUNC_5(VAR_7));
 FUNC_6(VAR_11, FUNC_1(VAR_7));
 FUNC_7(VAR_11, FUNC_2(VAR_7));
 FUNC_14(VAR_10, VAR_7, VAR_8);
 *VAR_6 = VAR_10;
 return 1;
}
