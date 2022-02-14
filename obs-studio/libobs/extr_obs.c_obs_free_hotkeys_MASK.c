
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_core_hotkeys {int mutex; int sceneitem_hide; int sceneitem_show; int push_to_talk; int push_to_mute; int unmute; int mute; } ;
struct TYPE_2__ {struct obs_core_hotkeys hotkeys; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct obs_core_hotkeys*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(void)
{
 struct obs_core_hotkeys *VAR_1 = &VAR_0->hotkeys;

 FUNC_0(VAR_1->mute);
 FUNC_0(VAR_1->unmute);
 FUNC_0(VAR_1->push_to_mute);
 FUNC_0(VAR_1->push_to_talk);
 FUNC_0(VAR_1->sceneitem_show);
 FUNC_0(VAR_1->sceneitem_hide);

 FUNC_1();

 FUNC_2(VAR_1);
 FUNC_3(&VAR_1->mutex);
}
