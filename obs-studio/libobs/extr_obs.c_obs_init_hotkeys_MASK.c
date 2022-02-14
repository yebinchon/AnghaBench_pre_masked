
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_hotkeys {int hotkey_thread_initialized; int hotkey_thread; int stop_event; int mutex; void* sceneitem_hide; void* sceneitem_show; void* push_to_talk; void* push_to_mute; void* unmute; void* mute; int name_map_init_token; int signals; int hotkeys; } ;
typedef int pthread_mutexattr_t ;
struct TYPE_2__ {int signals; struct obs_core_hotkeys hotkeys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct obs_core_hotkeys*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;

__attribute__((used)) static inline bool FUNC_10(void)
{
 struct obs_core_hotkeys *VAR_5 = &VAR_2->hotkeys;
 pthread_mutexattr_t VAR_6;
 bool VAR_7 = 0;

 FUNC_0(VAR_5 != ((void*)0));

 FUNC_2(VAR_5->hotkeys);
 VAR_5->signals = VAR_2->signals;
 VAR_5->name_map_init_token = VAR_4;
 VAR_5->mute = FUNC_1("Mute");
 VAR_5->unmute = FUNC_1("Unmute");
 VAR_5->push_to_mute = FUNC_1("Push-to-mute");
 VAR_5->push_to_talk = FUNC_1("Push-to-talk");
 VAR_5->sceneitem_show = FUNC_1("Show '%1'");
 VAR_5->sceneitem_hide = FUNC_1("Hide '%1'");

 if (!FUNC_3(VAR_5))
  return 0;

 if (FUNC_8(&VAR_6) != 0)
  return 0;
 if (FUNC_9(&VAR_6, VAR_1) != 0)
  goto fail;
 if (FUNC_6(&VAR_5->mutex, &VAR_6) != 0)
  goto fail;

 if (FUNC_4(&VAR_5->stop_event, VAR_0) != 0)
  goto fail;
 if (FUNC_5(&VAR_5->hotkey_thread, ((void*)0), VAR_3,
      ((void*)0)))
  goto fail;

 VAR_5->hotkey_thread_initialized = 1;

 VAR_7 = 1;

fail:
 FUNC_7(&VAR_6);
 return VAR_7;
}
