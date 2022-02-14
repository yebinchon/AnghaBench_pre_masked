
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dl_rq {int bw_ratio; int extra_bw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3(struct dl_rq *VAR_3)
{
 if (FUNC_1() == VAR_2) {
  VAR_3->bw_ratio = 1 << VAR_1;
  VAR_3->extra_bw = 1 << VAR_0;
 } else {
  VAR_3->bw_ratio = FUNC_2(FUNC_1(),
     FUNC_0()) >> (VAR_0 - VAR_1);
  VAR_3->extra_bw = FUNC_2(FUNC_0(),
          FUNC_1());
 }
}
