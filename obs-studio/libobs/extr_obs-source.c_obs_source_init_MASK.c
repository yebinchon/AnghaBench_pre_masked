
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ audio_mix; } ;
struct obs_source {float user_volume; float volume; float balance; int audio_active; int deinterlace_top_first; int audio_mixers; int private_settings; TYPE_2__* control; TYPE_1__ info; int async_mutex; int audio_mutex; int audio_cb_mutex; int audio_actions_mutex; int audio_buf_mutex; int filter_mutex; scalar_t__ sync_offset; } ;
typedef int pthread_mutexattr_t ;
typedef int obs_weak_source_t ;
struct TYPE_4__ {struct obs_source* source; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct obs_source*) ;
 int FUNC_1 (struct obs_source*) ;
 TYPE_2__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct obs_source*) ;
 scalar_t__ FUNC_4 (struct obs_source*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct obs_source*) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;

__attribute__((used)) static bool FUNC_11(struct obs_source *VAR_2)
{
 pthread_mutexattr_t VAR_3;

 VAR_2->user_volume = 1.0f;
 VAR_2->volume = 1.0f;
 VAR_2->sync_offset = 0;
 VAR_2->balance = 0.5f;
 VAR_2->audio_active = 1;
 FUNC_8(&VAR_2->filter_mutex);
 FUNC_8(&VAR_2->async_mutex);
 FUNC_8(&VAR_2->audio_mutex);
 FUNC_8(&VAR_2->audio_buf_mutex);
 FUNC_8(&VAR_2->audio_cb_mutex);

 if (FUNC_9(&VAR_3) != 0)
  return 0;
 if (FUNC_10(&VAR_3, VAR_1) != 0)
  return 0;
 if (FUNC_7(&VAR_2->filter_mutex, &VAR_3) != 0)
  return 0;
 if (FUNC_7(&VAR_2->audio_buf_mutex, ((void*)0)) != 0)
  return 0;
 if (FUNC_7(&VAR_2->audio_actions_mutex, ((void*)0)) != 0)
  return 0;
 if (FUNC_7(&VAR_2->audio_cb_mutex, ((void*)0)) != 0)
  return 0;
 if (FUNC_7(&VAR_2->audio_mutex, ((void*)0)) != 0)
  return 0;
 if (FUNC_7(&VAR_2->async_mutex, ((void*)0)) != 0)
  return 0;

 if (FUNC_3(VAR_2) || FUNC_4(VAR_2))
  FUNC_1(VAR_2);
 if (VAR_2->info.audio_mix)
  FUNC_0(VAR_2);

 if (VAR_2->info.type == VAR_0) {
  if (!FUNC_6(VAR_2))
   return 0;
 }

 VAR_2->control = FUNC_2(sizeof(obs_weak_source_t));
 VAR_2->deinterlace_top_first = 1;
 VAR_2->control->source = VAR_2;
 VAR_2->audio_mixers = 0xFF;

 VAR_2->private_settings = FUNC_5();
 return 1;
}
