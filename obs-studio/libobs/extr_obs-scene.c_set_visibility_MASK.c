
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_scene_item {int visible; int user_visible; int actions_mutex; int active_refs; int source; TYPE_1__* parent; int audio_actions; } ;
struct TYPE_2__ {int source; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct obs_scene_item *VAR_0, bool VAR_1)
{
 FUNC_5(&VAR_0->actions_mutex);

 FUNC_0(VAR_0->audio_actions, 0);

 if (FUNC_3(&VAR_0->active_refs) > 0) {
  if (!VAR_1)
   FUNC_2(VAR_0->parent->source,
             VAR_0->source);
 } else if (VAR_1) {
  FUNC_1(VAR_0->parent->source, VAR_0->source);
 }

 FUNC_4(&VAR_0->active_refs, VAR_1 ? 1 : 0);
 VAR_0->visible = VAR_1;
 VAR_0->user_visible = VAR_1;

 FUNC_6(&VAR_0->actions_mutex);
}
