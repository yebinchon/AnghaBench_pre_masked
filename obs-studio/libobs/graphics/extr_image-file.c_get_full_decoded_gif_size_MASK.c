
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; int frame_count; } ;
struct TYPE_5__ {TYPE_1__ gif; } ;
typedef TYPE_2__ gs_image_file_t ;



__attribute__((used)) static inline int FUNC_0(gs_image_file_t *VAR_0)
{
 return VAR_0->gif.width * VAR_0->gif.height * 4 *
        VAR_0->gif.frame_count;
}
