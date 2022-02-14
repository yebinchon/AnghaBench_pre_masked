
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fprop_local_percpu {unsigned int period; int lock; int events; } ;
struct fprop_global {unsigned int period; } ;
typedef unsigned int s64 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct fprop_global *VAR_3,
     struct fprop_local_percpu *VAR_4)
{
 unsigned int VAR_5 = VAR_3->period;
 unsigned long VAR_6;


 if (VAR_4->period == VAR_5)
  return;
 FUNC_4(&VAR_4->lock, VAR_6);

 if (VAR_4->period >= VAR_5) {
  FUNC_5(&VAR_4->lock, VAR_6);
  return;
 }

 if (VAR_5 - VAR_4->period < VAR_0) {
  s64 VAR_7 = FUNC_1(&VAR_4->events);

  if (VAR_7 < (VAR_2 * VAR_1))
   VAR_7 = FUNC_3(&VAR_4->events);

  FUNC_0(&VAR_4->events,
   -VAR_7 + (VAR_7 >> (VAR_5-VAR_4->period)), VAR_1);
 } else
  FUNC_2(&VAR_4->events, 0);
 VAR_4->period = VAR_5;
 FUNC_5(&VAR_4->lock, VAR_6);
}
