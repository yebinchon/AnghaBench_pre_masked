
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; int frame_image; } ;
struct TYPE_4__ {int last_decoded_frame; int cur_frame; TYPE_2__ gif; scalar_t__* animation_frame_cache; scalar_t__ animation_frame_data; } ;
typedef TYPE_1__ gs_image_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_2(gs_image_file_t *VAR_1, int VAR_2)
{
 if (!VAR_1->animation_frame_cache[VAR_2]) {
  int VAR_3;


  VAR_3 = (VAR_2 < VAR_1->last_decoded_frame)
         ? 0
         : VAR_1->last_decoded_frame + 1;


  for (int VAR_4 = VAR_3; VAR_4 < VAR_2; VAR_4++) {
   if (FUNC_0(&VAR_1->gif, VAR_4) != VAR_0)
    return;
  }


  if (FUNC_0(&VAR_1->gif, VAR_2) == VAR_0) {
   size_t VAR_5 = VAR_2 * VAR_1->gif.width *
         VAR_1->gif.height * 4;
   VAR_1->animation_frame_cache[VAR_2] =
    VAR_1->animation_frame_data + VAR_5;

   FUNC_1(VAR_1->animation_frame_cache[VAR_2],
          VAR_1->gif.frame_image,
          VAR_1->gif.width * VAR_1->gif.height * 4);

   VAR_1->last_decoded_frame = VAR_2;
  }
 }

 VAR_1->cur_frame = VAR_2;
}
