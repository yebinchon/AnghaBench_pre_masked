
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {size_t num; struct item_action* array; } ;
struct obs_scene_item {int visible; int source; TYPE_1__* parent; int active_refs; int actions_mutex; TYPE_2__ audio_actions; } ;
struct item_action {scalar_t__ timestamp; int visible; } ;
struct TYPE_3__ {int source; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__,int ) ;
 float* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct obs_scene_item *VAR_1,
        float **VAR_2, uint64_t VAR_3,
        size_t VAR_4)
{
 bool VAR_5 = VAR_1->visible;
 uint64_t VAR_6 = 0;
 size_t VAR_7 = 0;
 float *VAR_8 = ((void*)0);

 if (VAR_2) {
  if (!*VAR_2)
   *VAR_2 = FUNC_1(VAR_0 * sizeof(float));
  VAR_8 = *VAR_2;
 }

 FUNC_4(&VAR_1->actions_mutex);

 for (size_t VAR_9 = 0; VAR_9 < VAR_1->audio_actions.num; VAR_9++) {
  struct item_action VAR_10 = VAR_1->audio_actions.array[VAR_9];
  uint64_t VAR_11 = VAR_10.timestamp;
  uint64_t VAR_12;

  if (VAR_11 < VAR_3)
   VAR_11 = VAR_3;

  VAR_12 = (VAR_11 - VAR_3) * (uint64_t)VAR_4 /
    1000000000ULL;

  if (VAR_3 && VAR_12 >= VAR_0)
   break;

  FUNC_0(VAR_1->audio_actions, VAR_9--);

  VAR_1->visible = VAR_10.visible;
  if (!VAR_1->visible)
   VAR_7++;

  if (VAR_8 && VAR_12 > VAR_6) {
   for (; VAR_6 < VAR_12; VAR_6++)
    VAR_8[VAR_6] = VAR_5 ? 1.0f : 0.0f;
  }

  VAR_5 = VAR_1->visible;
 }

 if (VAR_8) {
  for (; VAR_6 < VAR_0; VAR_6++)
   VAR_8[VAR_6] = VAR_5 ? 1.0f : 0.0f;
 }

 FUNC_5(&VAR_1->actions_mutex);

 while (VAR_7--) {
  if (FUNC_3(&VAR_1->active_refs) == 0) {
   FUNC_2(VAR_1->parent->source,
             VAR_1->source);
  }
 }
}
