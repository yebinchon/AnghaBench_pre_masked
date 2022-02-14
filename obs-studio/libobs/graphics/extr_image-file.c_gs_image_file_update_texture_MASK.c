
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; } ;
struct TYPE_6__ {size_t cur_frame; TYPE_1__ gif; int * animation_frame_cache; int texture; int loaded; int is_animated_gif; } ;
typedef TYPE_2__ gs_image_file_t ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (int ,int ,int,int) ;

void FUNC_2(gs_image_file_t *VAR_0)
{
 if (!VAR_0->is_animated_gif || !VAR_0->loaded)
  return;

 if (!VAR_0->animation_frame_cache[VAR_0->cur_frame])
  FUNC_0(VAR_0, VAR_0->cur_frame);

 FUNC_1(VAR_0->texture,
        VAR_0->animation_frame_cache[VAR_0->cur_frame],
        VAR_0->gif.width * 4, 0);
}
