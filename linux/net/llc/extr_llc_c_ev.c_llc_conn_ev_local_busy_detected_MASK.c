
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_conn_state_ev {scalar_t__ type; scalar_t__ prim_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct llc_conn_state_ev* FUNC_0 (struct sk_buff*) ;

int FUNC_1(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 const struct llc_conn_state_ev *VAR_4 = FUNC_0(VAR_3);

 return VAR_4->type == VAR_1 &&
        VAR_4->prim_type == VAR_0 ? 0 : 1;
}
