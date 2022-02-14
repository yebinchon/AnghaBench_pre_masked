
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fprop_local_single {unsigned int period; unsigned int events; int lock; } ;
struct fprop_global {unsigned int period; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct fprop_global *VAR_1,
     struct fprop_local_single *VAR_2)
{
 unsigned int VAR_3 = VAR_1->period;
 unsigned long VAR_4;


 if (VAR_2->period == VAR_3)
  return;
 FUNC_0(&VAR_2->lock, VAR_4);

 if (VAR_2->period >= VAR_3) {
  FUNC_1(&VAR_2->lock, VAR_4);
  return;
 }

 if (VAR_3 - VAR_2->period < VAR_0)
  VAR_2->events >>= VAR_3 - VAR_2->period;
 else
  VAR_2->events = 0;
 VAR_2->period = VAR_3;
 FUNC_1(&VAR_2->lock, VAR_4);
}
