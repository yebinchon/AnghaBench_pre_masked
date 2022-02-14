
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gif_data; int texture_data; int texture; int animation_frame_data; int animation_frame_cache; int gif; scalar_t__ is_animated_gif; scalar_t__ loaded; } ;
typedef TYPE_1__ gs_image_file_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(gs_image_file_t *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->loaded) {
  if (VAR_0->is_animated_gif) {
   FUNC_1(&VAR_0->gif);
   FUNC_0(VAR_0->animation_frame_cache);
   FUNC_0(VAR_0->animation_frame_data);
  }

  FUNC_2(VAR_0->texture);
 }

 FUNC_0(VAR_0->texture_data);
 FUNC_0(VAR_0->gif_data);
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));
}
