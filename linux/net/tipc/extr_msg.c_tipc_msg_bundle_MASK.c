
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*,scalar_t__) ;
 int FUNC_6 (struct tipc_msg*,scalar_t__) ;
 unsigned int FUNC_7 (struct tipc_msg*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__,struct tipc_msg*,unsigned int) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int) ;

bool FUNC_13(struct sk_buff *VAR_6, struct tipc_msg *VAR_7, u32 VAR_8)
{
 struct tipc_msg *VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11 = FUNC_7(VAR_7);
 u32 VAR_12, VAR_13;
 u32 VAR_14 = VAR_8 - VAR_1;

 if (FUNC_2(FUNC_8(VAR_7) == VAR_3))
  return 0;
 if (!VAR_6)
  return 0;
 VAR_9 = FUNC_1(VAR_6);
 VAR_10 = FUNC_7(VAR_9);
 VAR_12 = FUNC_0(VAR_10);
 VAR_13 = VAR_12 - VAR_10;

 if (FUNC_12(FUNC_8(VAR_7) == VAR_5))
  return 0;
 if (FUNC_12(FUNC_8(VAR_7) == VAR_0))
  return 0;
 if (FUNC_12(FUNC_8(VAR_9) != VAR_2))
  return 0;
 if (FUNC_12(FUNC_11(VAR_6) < (VAR_13 + VAR_11)))
  return 0;
 if (FUNC_12(VAR_14 < (VAR_12 + VAR_11)))
  return 0;
 if ((FUNC_3(VAR_7) < VAR_4) &&
     (FUNC_3(VAR_9) == VAR_4))
  return 0;

 FUNC_10(VAR_6, VAR_13 + VAR_11);
 FUNC_9(VAR_6, VAR_12, VAR_7, VAR_11);
 FUNC_6(VAR_9, VAR_12 + VAR_11);
 FUNC_5(VAR_9, FUNC_4(VAR_9) + 1);
 return 1;
}
