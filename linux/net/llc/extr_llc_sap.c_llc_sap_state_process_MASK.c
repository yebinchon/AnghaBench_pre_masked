
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_1__* sk; } ;
struct llc_sap_state_ev {scalar_t__ ind_cfm_flag; int prim; } ;
struct llc_sap {int dummy; } ;
struct TYPE_3__ {scalar_t__ sk_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct llc_sap_state_ev* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct llc_sap*,struct sk_buff*) ;
 int FUNC_3 (TYPE_1__*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct llc_sap *VAR_2, struct sk_buff *VAR_3)
{
 struct llc_sap_state_ev *VAR_4 = FUNC_1(VAR_3);

 VAR_4->ind_cfm_flag = 0;
 FUNC_2(VAR_2, VAR_3);

 if (VAR_4->ind_cfm_flag == VAR_0 && VAR_3->sk->sk_state != VAR_1) {
  FUNC_3(VAR_3->sk, VAR_3, VAR_4->prim);


  if (FUNC_4(VAR_3->sk, VAR_3) == 0)
   return;
 }
 FUNC_0(VAR_3);
}
