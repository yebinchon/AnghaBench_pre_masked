
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_sap_state_ev {int ind_cfm_flag; int prim; } ;
struct llc_sap {int dummy; } ;
struct llc_pdu_un {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct llc_pdu_un*) ;
 int VAR_3 ;
 struct llc_pdu_un* FUNC_1 (struct sk_buff*) ;
 struct llc_sap_state_ev* FUNC_2 (struct sk_buff*) ;

void FUNC_3(struct llc_sap *VAR_4, struct sk_buff *VAR_5)
{
 struct llc_sap_state_ev *VAR_6 = FUNC_2(VAR_5);
 struct llc_pdu_un *VAR_7 = FUNC_1(VAR_5);

 switch (FUNC_0(VAR_7)) {
 case 130:
  VAR_6->prim = VAR_2; break;
 case 128:
  VAR_6->prim = VAR_3; break;
 case 129:
  VAR_6->prim = VAR_0; break;
 }
 VAR_6->ind_cfm_flag = VAR_1;
}
