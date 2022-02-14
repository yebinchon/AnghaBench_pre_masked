
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int frame_image; } ;
struct TYPE_5__ {int * texture_data; int format; int cy; int cx; void* texture; TYPE_1__ gif; scalar_t__ is_animated_gif; int loaded; } ;
typedef TYPE_2__ gs_image_file_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ,int ,int ,int,int const**,int ) ;

void FUNC_2(gs_image_file_t *VAR_1)
{
 if (!VAR_1->loaded)
  return;

 if (VAR_1->is_animated_gif) {
  VAR_1->texture = FUNC_1(
   VAR_1->cx, VAR_1->cy, VAR_1->format, 1,
   (const uint8_t **)&VAR_1->gif.frame_image, VAR_0);

 } else {
  VAR_1->texture = FUNC_1(
   VAR_1->cx, VAR_1->cy, VAR_1->format, 1,
   (const uint8_t **)&VAR_1->texture_data, 0);
  FUNC_0(VAR_1->texture_data);
  VAR_1->texture_data = ((void*)0);
 }
}
