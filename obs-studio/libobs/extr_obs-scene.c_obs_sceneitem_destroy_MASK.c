
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int audio_actions; scalar_t__ source; int actions_mutex; int toggle_visibility; int private_settings; scalar_t__ item_render; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int FUNC_10 (int ,char*,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_11(obs_sceneitem_t *VAR_1)
{
 if (VAR_1) {
  if (VAR_1->item_render) {
   FUNC_4();
   FUNC_2(VAR_1->item_render);
   FUNC_6();
  }
  FUNC_3(VAR_1->private_settings);
  FUNC_5(VAR_1->toggle_visibility);
  FUNC_9(&VAR_1->actions_mutex);
  FUNC_10(
   FUNC_7(VAR_1->source), "rename",
   VAR_0, VAR_1);
  if (VAR_1->source)
   FUNC_8(VAR_1->source);
  FUNC_1(VAR_1->audio_actions);
  FUNC_0(VAR_1);
 }
}
