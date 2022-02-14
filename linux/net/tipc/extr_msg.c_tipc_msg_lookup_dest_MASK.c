
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*,scalar_t__) ;
 int FUNC_10 (struct tipc_msg*,scalar_t__) ;
 int FUNC_11 (struct tipc_msg*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct net*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_15 (struct net*) ;
 scalar_t__ FUNC_16 (struct net*,int ) ;

bool FUNC_17(struct net *VAR_2, struct sk_buff *VAR_3, int *VAR_4)
{
 struct tipc_msg *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6, VAR_7;
 u32 VAR_8 = FUNC_15(VAR_2);

 if (!FUNC_3(VAR_5))
  return 0;
 if (!FUNC_5(VAR_5))
  return 0;
 if (FUNC_1(VAR_5))
  return 0;
 *VAR_4 = VAR_0;
 if (FUNC_13(VAR_3))
  return 0;
 VAR_5 = FUNC_0(VAR_3);
 if (FUNC_8(VAR_5))
  return 0;
 VAR_7 = FUNC_16(VAR_2, FUNC_4(VAR_5));
 VAR_6 = FUNC_14(VAR_2, FUNC_7(VAR_5),
           FUNC_6(VAR_5), &VAR_7);
 if (!VAR_6)
  return 0;
 FUNC_2(VAR_5);
 if (VAR_7 != VAR_8)
  FUNC_11(VAR_5, VAR_8);
 FUNC_9(VAR_5, VAR_7);
 FUNC_10(VAR_5, VAR_6);
 *VAR_4 = VAR_1;

 if (!FUNC_12(VAR_3))
  return 1;

 return 1;
}
