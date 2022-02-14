
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct obs_scene_item {struct obs_scene_item* next; int update_transform; TYPE_6__* source; scalar_t__ is_group; int update_group_resize; } ;
struct darray {int dummy; } ;
typedef struct obs_scene_item obs_sceneitem_t ;
struct TYPE_8__ {struct obs_scene_item* first_item; } ;
typedef TYPE_2__ obs_scene_t ;
struct TYPE_7__ {TYPE_2__* data; } ;
struct TYPE_9__ {TYPE_1__ context; } ;


 int FUNC_0 (int,struct darray*,struct obs_scene_item**) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct obs_scene_item*) ;
 int FUNC_4 (struct obs_scene_item*) ;
 scalar_t__ FUNC_5 (struct obs_scene_item*) ;
 int FUNC_6 (struct obs_scene_item*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(obs_scene_t *VAR_0,
        struct darray *VAR_1,
        obs_sceneitem_t *VAR_2)
{
 struct obs_scene_item *VAR_3 = VAR_0->first_item;
 bool VAR_4 =
  VAR_2 &&
  FUNC_2(&VAR_2->update_group_resize);

 while (VAR_3) {
  if (FUNC_1(VAR_3->source)) {
   struct obs_scene_item *VAR_5 = VAR_3;
   VAR_3 = VAR_3->next;

   FUNC_3(VAR_5);
   FUNC_0(sizeof(struct obs_scene_item *),
      VAR_1, &VAR_5);
   VAR_4 = 1;
   continue;
  }

  if (VAR_3->is_group) {
   obs_scene_t *VAR_6 = VAR_3->source->context.data;

   FUNC_7(VAR_6);
   FUNC_9(VAR_6,
           VAR_1, VAR_3);
   FUNC_8(VAR_6);
  }

  if (FUNC_2(&VAR_3->update_transform) ||
      FUNC_5(VAR_3)) {

   FUNC_6(VAR_3, 1);
   VAR_4 = 1;
  }

  VAR_3 = VAR_3->next;
 }

 if (VAR_4 && VAR_2)
  FUNC_4(VAR_2);
}
