
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_conn_state_ev {int cfm_prim; scalar_t__ reason; } ;


 int VAR_0 ;
 struct llc_conn_state_ev* FUNC_0 (struct sk_buff*) ;

int FUNC_1(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct llc_conn_state_ev *VAR_3 = FUNC_0(VAR_2);

 VAR_3->reason = 0;
 VAR_3->cfm_prim = VAR_0;
 return 0;
}
