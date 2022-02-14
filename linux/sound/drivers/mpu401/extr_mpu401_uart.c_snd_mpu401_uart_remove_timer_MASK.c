
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mpu401 {int timer_invoked; int timer_lock; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3 (struct snd_mpu401 *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1 (&VAR_2->timer_lock, VAR_4);
 if (VAR_2->timer_invoked) {
  VAR_2->timer_invoked &= VAR_3 ? ~VAR_0 :
   ~VAR_1;
  if (! VAR_2->timer_invoked)
   FUNC_0(&VAR_2->timer);
 }
 FUNC_2 (&VAR_2->timer_lock, VAR_4);
}
