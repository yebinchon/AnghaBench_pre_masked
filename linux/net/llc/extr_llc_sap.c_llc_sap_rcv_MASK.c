
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int destructor; struct sock* sk; } ;
struct llc_sap_state_ev {scalar_t__ reason; int type; } ;
struct llc_sap {int dummy; } ;


 int VAR_0 ;
 struct llc_sap_state_ev* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct llc_sap*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct llc_sap *VAR_2, struct sk_buff *VAR_3,
   struct sock *VAR_4)
{
 struct llc_sap_state_ev *VAR_5 = FUNC_0(VAR_3);

 VAR_5->type = VAR_0;
 VAR_5->reason = 0;
 FUNC_2(VAR_3);
 FUNC_3(VAR_4);
 VAR_3->sk = VAR_4;
 VAR_3->destructor = VAR_1;
 FUNC_1(VAR_2, VAR_3);
}
