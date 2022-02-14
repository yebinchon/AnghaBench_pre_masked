
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {struct snd_timer* timer; } ;
struct snd_timer {int lock; } ;


 unsigned long FUNC_0 (struct snd_timer*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

unsigned long FUNC_3(struct snd_timer_instance *VAR_0)
{
 struct snd_timer * VAR_1;
 unsigned long VAR_2 = 0;
 unsigned long VAR_3;

 if (VAR_0 == ((void*)0))
  return 0;
 VAR_1 = VAR_0->timer;
 if (VAR_1) {
  FUNC_1(&VAR_1->lock, VAR_3);
  VAR_2 = FUNC_0(VAR_1);
  FUNC_2(&VAR_1->lock, VAR_3);
 }
 return VAR_2;
}
