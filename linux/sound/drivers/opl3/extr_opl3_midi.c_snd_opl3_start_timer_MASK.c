
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {int sys_timer_status; int sys_timer_lock; int tlist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct snd_opl3 *VAR_1)
{
 unsigned long VAR_2;
 FUNC_1(&VAR_1->sys_timer_lock, VAR_2);
 if (! VAR_1->sys_timer_status) {
  FUNC_0(&VAR_1->tlist, VAR_0 + 1);
  VAR_1->sys_timer_status = 1;
 }
 FUNC_2(&VAR_1->sys_timer_lock, VAR_2);
}
