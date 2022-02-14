
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct lp {int owd_min; scalar_t__ inference; scalar_t__ last_drop; scalar_t__ local_ref_time; scalar_t__ remote_ref_time; scalar_t__ remote_hz; scalar_t__ owd_max_rsv; scalar_t__ owd_max; scalar_t__ sowd; scalar_t__ flag; } ;


 struct lp* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0)
{
 struct lp *VAR_1 = FUNC_0(VAR_0);

 VAR_1->flag = 0;
 VAR_1->sowd = 0;
 VAR_1->owd_min = 0xffffffff;
 VAR_1->owd_max = 0;
 VAR_1->owd_max_rsv = 0;
 VAR_1->remote_hz = 0;
 VAR_1->remote_ref_time = 0;
 VAR_1->local_ref_time = 0;
 VAR_1->last_drop = 0;
 VAR_1->inference = 0;
}
