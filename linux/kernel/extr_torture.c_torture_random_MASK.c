
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torture_random_state {scalar_t__ trs_count; unsigned long trs_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 unsigned long FUNC_1 (int) ;

unsigned long
FUNC_2(struct torture_random_state *VAR_3)
{
 if (--VAR_3->trs_count < 0) {
  VAR_3->trs_state += (unsigned long)FUNC_0();
  VAR_3->trs_count = VAR_2;
 }
 VAR_3->trs_state = VAR_3->trs_state * VAR_1 +
  VAR_0;
 return FUNC_1(VAR_3->trs_state);
}
