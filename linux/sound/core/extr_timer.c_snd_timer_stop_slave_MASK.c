
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer_instance {int flags; TYPE_1__* timer; int active_list; int ack_list; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct snd_timer_instance*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_timer_instance *VAR_5, bool VAR_6)
{
 unsigned long VAR_7;

 FUNC_3(&VAR_4, VAR_7);
 if (!(VAR_5->flags & VAR_3)) {
  FUNC_5(&VAR_4, VAR_7);
  return -VAR_0;
 }
 VAR_5->flags &= ~VAR_3;
 if (VAR_5->timer) {
  FUNC_2(&VAR_5->timer->lock);
  FUNC_0(&VAR_5->ack_list);
  FUNC_0(&VAR_5->active_list);
  FUNC_1(VAR_5, VAR_6 ? VAR_2 :
      VAR_1);
  FUNC_4(&VAR_5->timer->lock);
 }
 FUNC_5(&VAR_4, VAR_7);
 return 0;
}
