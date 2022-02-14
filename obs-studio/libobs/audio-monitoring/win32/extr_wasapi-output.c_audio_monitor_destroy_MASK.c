
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct audio_monitor {int dummy; } ;
struct TYPE_3__ {int monitoring_mutex; int monitors; } ;
struct TYPE_4__ {TYPE_1__ audio; } ;


 int FUNC_0 (struct audio_monitor*) ;
 int FUNC_1 (struct audio_monitor*) ;
 int FUNC_2 (int ,struct audio_monitor**) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct audio_monitor *VAR_1)
{
 if (VAR_1) {
  FUNC_0(VAR_1);

  FUNC_3(&VAR_0->audio.monitoring_mutex);
  FUNC_2(VAR_0->audio.monitors, &VAR_1);
  FUNC_4(&VAR_0->audio.monitoring_mutex);

  FUNC_1(VAR_1);
 }
}
