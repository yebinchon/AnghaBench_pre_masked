
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 scalar_t__ FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct tipc_msg*,int ) ;
 int FUNC_14 (struct tipc_msg*,int ) ;
 int FUNC_15 (struct tipc_msg*,int) ;
 int FUNC_16 (struct tipc_msg*,int) ;
 int FUNC_17 (struct tipc_msg*,int ) ;
 int FUNC_18 (struct tipc_msg*,int ) ;
 int FUNC_19 (struct tipc_msg*,int ) ;
 int FUNC_20 (struct tipc_msg*,int ) ;
 int FUNC_21 (struct tipc_msg*,int) ;
 scalar_t__ FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*) ;
 struct sk_buff* FUNC_24 (int,int ) ;
 int VAR_5 ;

bool FUNC_25(u32 VAR_6, struct sk_buff **VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9 = *VAR_7;
 struct tipc_msg *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 if (FUNC_22(VAR_9))
  goto exit;
 VAR_10 = FUNC_0(VAR_9);
 VAR_13 = FUNC_3(VAR_5, FUNC_5(VAR_10), VAR_2);
 VAR_12 = FUNC_9(VAR_10);

 if (FUNC_6(VAR_10))
  goto exit;
 if (FUNC_8(VAR_10))
  goto exit;


 if (VAR_12 == VAR_3)
  VAR_12 = VAR_0;


 if (FUNC_10(VAR_10) && VAR_8 == VAR_4)
  VAR_13 = 0;


 *VAR_7 = FUNC_24(VAR_12 + VAR_13, VAR_1);
 if (!*VAR_7)
  goto exit;
 FUNC_2((*VAR_7)->data, VAR_9->data, FUNC_9(VAR_10));
 FUNC_2((*VAR_7)->data + VAR_12, FUNC_4(VAR_10), VAR_13);


 VAR_11 = FUNC_0(*VAR_7);
 FUNC_16(VAR_11, VAR_12);
 FUNC_15(VAR_11, VAR_8);
 FUNC_17(VAR_11, 0);
 FUNC_19(VAR_11, FUNC_7(VAR_10));
 FUNC_14(VAR_11, FUNC_11(VAR_10));
 FUNC_13(VAR_11, FUNC_12(VAR_10));
 FUNC_20(VAR_11, VAR_6);
 FUNC_18(VAR_11, VAR_6);
 FUNC_21(VAR_11, VAR_12 + VAR_13);
 FUNC_23(VAR_9);
 FUNC_1(VAR_9);
 return 1;
exit:
 FUNC_1(VAR_9);
 *VAR_7 = ((void*)0);
 return 0;
}
