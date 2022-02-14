
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_9__ {void* bottom; void* right; void* top; void* left; } ;
struct obs_scene_item {int is_group; float rot; int bounds_type; int * item_render; int scale_filter; TYPE_2__ crop; int bounds; void* bounds_align; scalar_t__ private_settings; int scale; int pos; void* align; scalar_t__ id; } ;
struct obs_scene {int source; } ;
struct TYPE_8__ {scalar_t__ id; } ;
struct TYPE_10__ {TYPE_1__ info; } ;
typedef TYPE_3__ obs_source_t ;
typedef int obs_data_t ;
typedef enum obs_bounds_type { ____Placeholder_obs_bounds_type } obs_bounds_type ;
struct TYPE_11__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 TYPE_7__ VAR_11 ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct obs_scene_item*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 char* FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,int *) ;
 scalar_t__ FUNC_12 (int *,char*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *,char*,int) ;
 int FUNC_15 () ;
 TYPE_3__* FUNC_16 (char const*) ;
 int FUNC_17 () ;
 struct obs_scene_item* FUNC_18 (struct obs_scene*,TYPE_3__*) ;
 int FUNC_19 (struct obs_scene_item*,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (struct obs_scene_item*,int) ;
 int FUNC_23 (struct obs_scene_item*,int) ;

__attribute__((used)) static void FUNC_24(struct obs_scene *VAR_12, obs_data_t *VAR_13)
{
 const char *VAR_14 = FUNC_10(VAR_13, "name");
 obs_source_t *VAR_15;
 const char *VAR_16;
 struct obs_scene_item *VAR_17;
 bool VAR_18;
 bool VAR_19;

 if (FUNC_6(VAR_13, "group_item_backup"))
  return;

 VAR_15 = FUNC_16(VAR_14);
 if (!VAR_15) {
  FUNC_1(VAR_2,
       "[scene_load_item] Source %s not "
       "found!",
       VAR_14);
  return;
 }

 VAR_17 = FUNC_18(VAR_12, VAR_15);
 if (!VAR_17) {
  FUNC_1(VAR_2,
       "[scene_load_item] Could not add source '%s' "
       "to scene '%s'!",
       VAR_14, FUNC_20(VAR_12->source));

  FUNC_21(VAR_15);
  return;
 }

 VAR_17->is_group = VAR_15->info.id == VAR_11.id;

 FUNC_14(VAR_13, "align",
     VAR_4 | VAR_3);

 if (FUNC_12(VAR_13, "id"))
  VAR_17->id = FUNC_8(VAR_13, "id");

 VAR_17->rot = (float)FUNC_7(VAR_13, "rot");
 VAR_17->align = (uint32_t)FUNC_8(VAR_13, "align");
 VAR_18 = FUNC_6(VAR_13, "visible");
 VAR_19 = FUNC_6(VAR_13, "locked");
 FUNC_11(VAR_13, "pos", &VAR_17->pos);
 FUNC_11(VAR_13, "scale", &VAR_17->scale);

 FUNC_13(VAR_17->private_settings);
 VAR_17->private_settings =
  FUNC_9(VAR_13, "private_settings");
 if (!VAR_17->private_settings)
  VAR_17->private_settings = FUNC_5();

 FUNC_22(VAR_17, VAR_18);
 FUNC_19(VAR_17, VAR_19);

 VAR_17->bounds_type = (enum obs_bounds_type)FUNC_8(
  VAR_13, "bounds_type");
 VAR_17->bounds_align =
  (uint32_t)FUNC_8(VAR_13, "bounds_align");
 FUNC_11(VAR_13, "bounds", &VAR_17->bounds);

 VAR_17->crop.left = (uint32_t)FUNC_8(VAR_13, "crop_left");
 VAR_17->crop.top = (uint32_t)FUNC_8(VAR_13, "crop_top");
 VAR_17->crop.right = (uint32_t)FUNC_8(VAR_13, "crop_right");
 VAR_17->crop.bottom =
  (uint32_t)FUNC_8(VAR_13, "crop_bottom");

 VAR_16 = FUNC_10(VAR_13, "scale_filter");
 VAR_17->scale_filter = VAR_8;

 if (VAR_16) {
  if (FUNC_0(VAR_16, "point") == 0)
   VAR_17->scale_filter = VAR_10;
  else if (FUNC_0(VAR_16, "bilinear") == 0)
   VAR_17->scale_filter = VAR_7;
  else if (FUNC_0(VAR_16, "bicubic") == 0)
   VAR_17->scale_filter = VAR_6;
  else if (FUNC_0(VAR_16, "lanczos") == 0)
   VAR_17->scale_filter = VAR_9;
  else if (FUNC_0(VAR_16, "area") == 0)
   VAR_17->scale_filter = VAR_5;
 }

 if (VAR_17->item_render && !FUNC_4(VAR_17)) {
  FUNC_15();
  FUNC_3(VAR_17->item_render);
  VAR_17->item_render = ((void*)0);
  FUNC_17();

 } else if (!VAR_17->item_render && FUNC_4(VAR_17)) {
  FUNC_15();
  VAR_17->item_render = FUNC_2(VAR_0, VAR_1);
  FUNC_17();
 }

 FUNC_21(VAR_15);

 FUNC_23(VAR_17, 0);
}
