
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_pdu_un {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct llc_pdu_un*) ;
 scalar_t__ FUNC_1 (struct llc_pdu_un*) ;
 scalar_t__ FUNC_2 (struct llc_pdu_un*) ;
 struct llc_pdu_un* FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct llc_pdu_un *VAR_3 = FUNC_3(VAR_2);

 return FUNC_0(VAR_3) && FUNC_1(VAR_3) &&
        FUNC_2(VAR_3) == VAR_0 ? 0 : 1;
}
