
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct obs_scene_item {int private_settings; scalar_t__ item_render; int update_transform; int crop; int toggle_visibility; int bounds; int bounds_align; int bounds_type; int draw_transform; int box_scale; int box_transform; int scale_filter; int output_scale; int last_height; int last_width; int align; int scale; int rot; int pos; int selected; int user_visible; struct obs_scene* parent; } ;
struct obs_scene {TYPE_2__* source; } ;
typedef int obs_data_array_t ;
struct TYPE_3__ {int private; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct obs_scene_item*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int **,int **) ;
 int FUNC_7 () ;
 int FUNC_8 (struct obs_scene_item*,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct obs_scene_item*,int) ;

__attribute__((used)) static inline void FUNC_11(struct obs_scene_item *VAR_2,
           struct obs_scene_item *VAR_3,
           bool VAR_4,
           bool VAR_5,
           bool VAR_6)
{
 struct obs_scene *VAR_7 = VAR_2->parent;

 if (!VAR_3->user_visible)
  FUNC_10(VAR_2, 0);

 VAR_2->selected = VAR_3->selected;
 VAR_2->pos = VAR_3->pos;
 VAR_2->rot = VAR_3->rot;
 VAR_2->scale = VAR_3->scale;
 VAR_2->align = VAR_3->align;
 VAR_2->last_width = VAR_3->last_width;
 VAR_2->last_height = VAR_3->last_height;
 VAR_2->output_scale = VAR_3->output_scale;
 VAR_2->scale_filter = VAR_3->scale_filter;
 VAR_2->box_transform = VAR_3->box_transform;
 VAR_2->box_scale = VAR_3->box_scale;
 VAR_2->draw_transform = VAR_3->draw_transform;
 VAR_2->bounds_type = VAR_3->bounds_type;
 VAR_2->bounds_align = VAR_3->bounds_align;
 VAR_2->bounds = VAR_3->bounds;

 if (VAR_5 && !VAR_7->source->context.private) {
  obs_data_array_t *VAR_8 = ((void*)0);
  obs_data_array_t *VAR_9 = ((void*)0);

  FUNC_6(VAR_3->toggle_visibility, &VAR_8, &VAR_9);
  FUNC_5(VAR_2->toggle_visibility, VAR_8, VAR_9);

  FUNC_3(VAR_8);
  FUNC_3(VAR_9);
 }

 FUNC_8(VAR_2, &VAR_3->crop);

 if (VAR_4) {
  FUNC_9(&VAR_2->update_transform, 1);
 } else {
  if (!VAR_2->item_render && FUNC_1(VAR_2)) {
   FUNC_4();
   VAR_2->item_render =
    FUNC_0(VAR_0, VAR_1);
   FUNC_7();
  }
 }

 if (VAR_6) {
  FUNC_2(VAR_2->private_settings, VAR_3->private_settings);
 }
}
