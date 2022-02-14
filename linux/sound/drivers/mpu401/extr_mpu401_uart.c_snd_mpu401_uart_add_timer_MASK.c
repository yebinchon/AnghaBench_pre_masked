
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mpu401 {int timer_lock; int timer_invoked; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_4 (struct snd_mpu401 *VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 FUNC_1 (&VAR_4->timer_lock, VAR_6);
 if (VAR_4->timer_invoked == 0) {
  FUNC_3(&VAR_4->timer, VAR_3, 0);
  FUNC_0(&VAR_4->timer, 1 + VAR_2);
 }
 VAR_4->timer_invoked |= VAR_5 ? VAR_0 :
  VAR_1;
 FUNC_2 (&VAR_4->timer_lock, VAR_6);
}
