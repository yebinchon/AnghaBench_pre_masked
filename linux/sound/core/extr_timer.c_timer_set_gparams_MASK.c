
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer_gparams {int period_den; int period_num; int tid; } ;
struct TYPE_2__ {int (* set_period ) (struct snd_timer*,int ,int ) ;} ;
struct snd_timer {TYPE_1__ hw; int open_list_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 struct snd_timer* FUNC_3 (int *) ;
 int FUNC_4 (struct snd_timer*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_timer_gparams *VAR_4)
{
 struct snd_timer *VAR_5;
 int VAR_6;

 FUNC_1(&VAR_3);
 VAR_5 = FUNC_3(&VAR_4->tid);
 if (!VAR_5) {
  VAR_6 = -VAR_1;
  goto _error;
 }
 if (!FUNC_0(&VAR_5->open_list_head)) {
  VAR_6 = -VAR_0;
  goto _error;
 }
 if (!VAR_5->hw.set_period) {
  VAR_6 = -VAR_2;
  goto _error;
 }
 VAR_6 = VAR_5->hw.set_period(VAR_5, VAR_4->period_num, VAR_4->period_den);
_error:
 FUNC_2(&VAR_3);
 return VAR_6;
}
