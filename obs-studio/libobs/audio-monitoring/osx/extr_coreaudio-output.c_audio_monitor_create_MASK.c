
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct audio_monitor {int dummy; } ;
typedef int obs_source_t ;
struct TYPE_3__ {int monitoring_mutex; int monitors; } ;
struct TYPE_4__ {TYPE_1__ audio; } ;


 int FUNC_0 (struct audio_monitor*) ;
 int FUNC_1 (struct audio_monitor*,int *) ;
 int FUNC_2 (struct audio_monitor*) ;
 int FUNC_3 (struct audio_monitor*) ;
 struct audio_monitor* FUNC_4 (int) ;
 int FUNC_5 (int ,struct audio_monitor**) ;
 TYPE_2__* VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct audio_monitor *FUNC_8(obs_source_t *VAR_1)
{
 struct audio_monitor *VAR_2 = FUNC_4(sizeof(*VAR_2));

 if (!FUNC_1(VAR_2, VAR_1)) {
  goto fail;
 }

 FUNC_6(&VAR_0->audio.monitoring_mutex);
 FUNC_5(VAR_0->audio.monitors, &VAR_2);
 FUNC_7(&VAR_0->audio.monitoring_mutex);

 FUNC_2(VAR_2);
 return VAR_2;

fail:
 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 return ((void*)0);
}
