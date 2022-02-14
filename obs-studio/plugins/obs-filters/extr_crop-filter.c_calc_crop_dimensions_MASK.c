
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vec2 {float x; float y; } ;
struct crop_filter_data {int width; int abs_cx; int height; int abs_cy; int left; int right; int top; int bottom; scalar_t__ absolute; int context; } ;
typedef int obs_source_t ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct crop_filter_data *VAR_0,
     struct vec2 *VAR_1, struct vec2 *VAR_2)
{
 obs_source_t *VAR_3 = FUNC_0(VAR_0->context);
 uint32_t VAR_4;
 uint32_t VAR_5;

 if (!VAR_3) {
  VAR_4 = 0;
  VAR_5 = 0;
  return;
 } else {
  VAR_4 = FUNC_2(VAR_3);
  VAR_5 = FUNC_1(VAR_3);
 }

 if (VAR_0->absolute) {
  VAR_0->width = VAR_0->abs_cx;
  VAR_0->height = VAR_0->abs_cy;
 } else {
  VAR_0->width = (int)VAR_4 - VAR_0->left - VAR_0->right;
  VAR_0->height = (int)VAR_5 - VAR_0->top - VAR_0->bottom;
 }

 if (VAR_0->width < 1)
  VAR_0->width = 1;
 if (VAR_0->height < 1)
  VAR_0->height = 1;

 if (VAR_4 && VAR_0->width) {
  VAR_1->x = (float)VAR_0->width / (float)VAR_4;
  VAR_2->x = (float)VAR_0->left / (float)VAR_4;
 }

 if (VAR_5 && VAR_0->height) {
  VAR_1->y = (float)VAR_0->height / (float)VAR_5;
  VAR_2->y = (float)VAR_0->top / (float)VAR_5;
 }
}
