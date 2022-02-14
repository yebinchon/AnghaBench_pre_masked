
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_timer_instance {int flags; TYPE_2__* timer; TYPE_1__* master; int active_list; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int slave_active_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int VAR_6 ;
 int FUNC_1 (struct snd_timer_instance*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_timer_instance *VAR_7,
     bool VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 FUNC_3(&VAR_6, VAR_9);
 if (VAR_7->flags & VAR_4) {
  VAR_10 = -VAR_1;
  goto unlock;
 }
 if (VAR_7->flags & VAR_5) {
  VAR_10 = -VAR_0;
  goto unlock;
 }
 VAR_7->flags |= VAR_5;
 if (VAR_7->master && VAR_7->timer) {
  FUNC_2(&VAR_7->timer->lock);
  FUNC_0(&VAR_7->active_list,
         &VAR_7->master->slave_active_head);
  FUNC_1(VAR_7, VAR_8 ? VAR_3 :
      VAR_2);
  FUNC_4(&VAR_7->timer->lock);
 }
 VAR_10 = 1;
 unlock:
 FUNC_5(&VAR_6, VAR_9);
 return VAR_10;
}
