
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vec2 {int dummy; } ;
struct TYPE_7__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
struct obs_scene_item {float rot; int user_visible; int locked; int id; scalar_t__ scale_filter; int private_settings; struct obs_scene_item* next; TYPE_4__* source; scalar_t__ is_group; TYPE_1__ crop; struct vec2 bounds; scalar_t__ bounds_align; scalar_t__ bounds_type; scalar_t__ align; struct vec2 scale; struct vec2 pos; } ;
typedef struct obs_scene_item obs_sceneitem_t ;
struct TYPE_9__ {struct obs_scene_item* first_item; } ;
typedef TYPE_3__ obs_scene_t ;
typedef int obs_data_t ;
typedef int obs_data_array_t ;
struct TYPE_8__ {TYPE_3__* data; } ;
struct TYPE_10__ {TYPE_2__ context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct obs_scene_item*,struct vec2*,struct vec2*,float*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*,float) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *,char*,char const*) ;
 int FUNC_11 (int *,char*,struct vec2*) ;
 char* FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_13(obs_data_array_t *VAR_5,
       struct obs_scene_item *VAR_6,
       struct obs_scene_item *VAR_7)
{
 obs_data_t *VAR_8 = FUNC_4();
 const char *VAR_9 = FUNC_12(VAR_6->source);
 const char *VAR_10;
 struct vec2 VAR_11 = VAR_6->pos;
 struct vec2 VAR_12 = VAR_6->scale;
 float VAR_13 = VAR_6->rot;

 if (VAR_7) {
  FUNC_2(VAR_7, &VAR_11, &VAR_12, &VAR_13);
 }

 FUNC_10(VAR_8, "name", VAR_9);
 FUNC_6(VAR_8, "visible", VAR_6->user_visible);
 FUNC_6(VAR_8, "locked", VAR_6->locked);
 FUNC_7(VAR_8, "rot", VAR_13);
 FUNC_11(VAR_8, "pos", &VAR_11);
 FUNC_11(VAR_8, "scale", &VAR_12);
 FUNC_8(VAR_8, "align", (int)VAR_6->align);
 FUNC_8(VAR_8, "bounds_type", (int)VAR_6->bounds_type);
 FUNC_8(VAR_8, "bounds_align", (int)VAR_6->bounds_align);
 FUNC_11(VAR_8, "bounds", &VAR_6->bounds);
 FUNC_8(VAR_8, "crop_left", (int)VAR_6->crop.left);
 FUNC_8(VAR_8, "crop_top", (int)VAR_6->crop.top);
 FUNC_8(VAR_8, "crop_right", (int)VAR_6->crop.right);
 FUNC_8(VAR_8, "crop_bottom", (int)VAR_6->crop.bottom);
 FUNC_8(VAR_8, "id", VAR_6->id);
 FUNC_6(VAR_8, "group_item_backup", !!VAR_7);

 if (VAR_6->is_group) {
  obs_scene_t *VAR_14 = VAR_6->source->context.data;
  obs_sceneitem_t *VAR_15;




  FUNC_0(VAR_14);

  VAR_15 = VAR_14->first_item;
  while (VAR_15) {
   FUNC_13(VAR_5, VAR_15, VAR_6);
   VAR_15 = VAR_15->next;
  }

  FUNC_1(VAR_14);
 }

 if (VAR_6->scale_filter == VAR_4)
  VAR_10 = "point";
 else if (VAR_6->scale_filter == VAR_2)
  VAR_10 = "bilinear";
 else if (VAR_6->scale_filter == VAR_1)
  VAR_10 = "bicubic";
 else if (VAR_6->scale_filter == VAR_3)
  VAR_10 = "lanczos";
 else if (VAR_6->scale_filter == VAR_0)
  VAR_10 = "area";
 else
  VAR_10 = "disable";

 FUNC_10(VAR_8, "scale_filter", VAR_10);

 FUNC_9(VAR_8, "private_settings", VAR_6->private_settings);

 FUNC_3(VAR_5, VAR_8);
 FUNC_5(VAR_8);
}
