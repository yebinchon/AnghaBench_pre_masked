
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_pdu_un {int dummy; } ;





 scalar_t__ FUNC_0 (struct llc_pdu_un const*) ;
 scalar_t__ FUNC_1 (struct llc_pdu_un const*) ;
 scalar_t__ FUNC_2 (struct llc_pdu_un const*) ;
 scalar_t__ FUNC_3 (struct llc_pdu_un const*) ;
 int FUNC_4 (struct llc_pdu_un const*) ;
 struct llc_pdu_un* FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 u16 VAR_2 = 1;
 const struct llc_pdu_un *VAR_3 = FUNC_5(VAR_1);

 if (FUNC_0(VAR_3)) {
  if (FUNC_1(VAR_3) || FUNC_2(VAR_3))
   VAR_2 = 0;
  else if (FUNC_3(VAR_3))
   switch (FUNC_4(VAR_3)) {
   case 128:
   case 130:
   case 129:
    VAR_2 = 0;
    break;
   }
 }

 return VAR_2;
}
