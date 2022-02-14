
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct sk_buff*,struct tipc_msg*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int,int ) ;
 int FUNC_9 (struct sk_buff**) ;
 scalar_t__ FUNC_10 (int) ;

bool FUNC_11(struct sk_buff *VAR_2, struct sk_buff **VAR_3, int *VAR_4)
{
 struct tipc_msg *VAR_5, *VAR_6;
 int VAR_7;

 *VAR_3 = ((void*)0);
 if (FUNC_10(FUNC_7(VAR_2)))
  goto none;

 VAR_5 = FUNC_1(VAR_2);
 if (FUNC_10(*VAR_4 > (FUNC_4(VAR_5) - VAR_1)))
  goto none;

 VAR_6 = (struct tipc_msg *)(FUNC_3(VAR_5) + *VAR_4);
 VAR_7 = FUNC_5(VAR_6);

 if ((*VAR_4 + VAR_7) > FUNC_4(VAR_5))
  goto none;

 *VAR_3 = FUNC_8(VAR_7, VAR_0);
 if (!*VAR_3)
  goto none;

 FUNC_6(*VAR_3, VAR_6, VAR_7);
 if (FUNC_10(!FUNC_9(VAR_3)))
  goto none;

 *VAR_4 += FUNC_0(VAR_7);
 return 1;
none:
 FUNC_2(VAR_2);
 FUNC_2(*VAR_3);
 *VAR_3 = ((void*)0);
 return 0;
}
