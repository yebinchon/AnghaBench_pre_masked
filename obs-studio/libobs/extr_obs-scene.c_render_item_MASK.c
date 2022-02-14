
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vec4 {int dummy; } ;
struct TYPE_2__ {scalar_t__ top; scalar_t__ left; } ;
struct obs_scene_item {int source; scalar_t__ item_render; int draw_transform; TYPE_1__ crop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct obs_scene_item*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct obs_scene_item*,scalar_t__) ;
 int FUNC_4 (int ,struct vec4*,float,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (float,float,float) ;
 int FUNC_9 (float,float,float) ;
 int FUNC_10 (float,float,float,float,float,float) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct obs_scene_item*) ;
 int FUNC_18 (struct vec4*) ;

__attribute__((used)) static inline void FUNC_19(struct obs_scene_item *VAR_2)
{
 FUNC_0(VAR_1, "Item: %s",
         FUNC_14(VAR_2->source));

 if (VAR_2->item_render) {
  uint32_t VAR_3 = FUNC_15(VAR_2->source);
  uint32_t VAR_4 = FUNC_13(VAR_2->source);

  if (!VAR_3 || !VAR_4) {
   goto cleanup;
  }

  uint32_t VAR_5 = FUNC_2(VAR_2, VAR_3);
  uint32_t VAR_6 = FUNC_3(VAR_2, VAR_4);

  if (VAR_5 && VAR_6 && FUNC_11(VAR_2->item_render, VAR_5, VAR_6)) {
   float VAR_7 = (float)VAR_3 / (float)VAR_5;
   float VAR_8 = (float)VAR_4 / (float)VAR_6;
   struct vec4 VAR_9;

   FUNC_18(&VAR_9);
   FUNC_4(VAR_0, &VAR_9, 0.0f, 0);
   FUNC_10(0.0f, (float)VAR_3, 0.0f, (float)VAR_4,
     -100.0f, 100.0f);

   FUNC_8(VAR_7, VAR_8, 1.0f);
   FUNC_9(-(float)VAR_2->crop.left,
           -(float)VAR_2->crop.top, 0.0f);

   FUNC_16(VAR_2->source);

   FUNC_12(VAR_2->item_render);
  }
 }

 FUNC_7();
 FUNC_5(&VAR_2->draw_transform);
 if (VAR_2->item_render) {
  FUNC_17(VAR_2);
 } else {
  FUNC_16(VAR_2->source);
 }
 FUNC_6();

cleanup:
 FUNC_1();
}
