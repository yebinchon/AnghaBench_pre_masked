
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_msg {int dummy; } ;
struct sk_buff {int truesize; int len; } ;
struct TYPE_2__ {int validated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_5 ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_8 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

bool FUNC_10(struct sk_buff **VAR_6)
{
 struct sk_buff *VAR_7 = *VAR_6;
 struct tipc_msg *VAR_8;
 int VAR_9, VAR_10;


 if (FUNC_9(VAR_7->truesize / FUNC_2(VAR_7) >= 4)) {
  VAR_7 = FUNC_8(VAR_7, VAR_0, 0, VAR_1);
  if (!VAR_7)
   return 0;
  FUNC_3(*VAR_6);
  *VAR_6 = VAR_7;
 }

 if (FUNC_9(FUNC_0(VAR_7)->validated))
  return 1;
 if (FUNC_9(!FUNC_7(VAR_7, VAR_3)))
  return 0;

 VAR_10 = FUNC_4(FUNC_1(VAR_7));
 if (FUNC_9(VAR_10 < VAR_3) || (VAR_10 > VAR_2))
  return 0;
 if (FUNC_9(!FUNC_7(VAR_7, VAR_10)))
  return 0;

 VAR_8 = FUNC_1(VAR_7);
 if (FUNC_9(FUNC_6(VAR_8) != VAR_5))
  return 0;

 VAR_9 = FUNC_5(VAR_8);
 if (FUNC_9(VAR_9 < VAR_10))
  return 0;
 if (FUNC_9((VAR_9 - VAR_10) > VAR_4))
  return 0;
 if (FUNC_9(VAR_7->len < VAR_9))
  return 0;

 FUNC_0(VAR_7)->validated = 1;
 return 1;
}
