
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct tipc_msg*,int ) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,scalar_t__) ;
 struct sk_buff* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,struct tipc_msg*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int) ;

struct sk_buff *FUNC_10(uint VAR_2, uint VAR_3,
    uint VAR_4, uint VAR_5, u32 VAR_6,
    u32 VAR_7, u32 VAR_8, u32 VAR_9, int VAR_10)
{
 struct tipc_msg *VAR_11;
 struct sk_buff *VAR_12;

 VAR_12 = FUNC_7(VAR_4 + VAR_5, VAR_0);
 if (FUNC_9(!VAR_12))
  return ((void*)0);

 VAR_11 = FUNC_0(VAR_12);
 FUNC_8(VAR_7, VAR_11, VAR_2, VAR_3, VAR_4, VAR_6);
 FUNC_6(VAR_11, VAR_4 + VAR_5);
 FUNC_5(VAR_11, VAR_9);
 FUNC_2(VAR_11, VAR_8);
 FUNC_3(VAR_11, VAR_10);
 if (VAR_4 > VAR_1) {
  FUNC_4(VAR_11, VAR_7);
  FUNC_1(VAR_11, VAR_6);
 }
 return VAR_12;
}
