
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ff_timer {int needs_wake; scalar_t__ next_wake; int mutex; int cond; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ff_timer *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2 = FUNC_0();
 uint64_t VAR_3 = VAR_2 + VAR_1;

 FUNC_2(&VAR_0->mutex);

 VAR_0->needs_wake = 1;
 if (VAR_3 < VAR_0->next_wake || VAR_2 > VAR_0->next_wake)
  VAR_0->next_wake = VAR_3;

 FUNC_1(&VAR_0->cond);

 FUNC_3(&VAR_0->mutex);
}
