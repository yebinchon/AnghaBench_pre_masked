
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_counter {int * counters; int lock; scalar_t__ count; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

void FUNC_7(struct percpu_counter *VAR_0, s64 VAR_1, s32 VAR_2)
{
 s64 VAR_3;

 FUNC_2();
 VAR_3 = FUNC_0(*VAR_0->counters) + VAR_1;
 if (VAR_3 >= VAR_2 || VAR_3 <= -VAR_2) {
  unsigned long VAR_4;
  FUNC_4(&VAR_0->lock, VAR_4);
  VAR_0->count += VAR_3;
  FUNC_1(*VAR_0->counters, VAR_3 - VAR_1);
  FUNC_5(&VAR_0->lock, VAR_4);
 } else {
  FUNC_6(*VAR_0->counters, VAR_1);
 }
 FUNC_3();
}
