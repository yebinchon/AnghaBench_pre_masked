
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {struct snd_hwdep* hwdep; int sys_timer_lock; scalar_t__ sys_timer_status; int tlist; } ;
struct snd_hwdep {int open_wait; int open_mutex; int used; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_opl3*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct snd_opl3 * VAR_0)
{
 unsigned long VAR_1;
 struct snd_hwdep *VAR_2;


 FUNC_4(&VAR_0->sys_timer_lock, VAR_1);
 if (VAR_0->sys_timer_status) {
  FUNC_0(&VAR_0->tlist);
  VAR_0->sys_timer_status = 0;
 }
 FUNC_5(&VAR_0->sys_timer_lock, VAR_1);

 FUNC_3(VAR_0);
 VAR_2 = VAR_0->hwdep;
 FUNC_1(&VAR_2->open_mutex);
 VAR_2->used--;
 FUNC_2(&VAR_2->open_mutex);
 FUNC_6(&VAR_2->open_wait);
}
