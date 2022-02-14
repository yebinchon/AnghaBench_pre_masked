
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ w; scalar_t__ h; scalar_t__ x; scalar_t__ y; int was_packed; } ;
typedef TYPE_1__ stbrp_rect ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ width; scalar_t__ y; scalar_t__ bottom_y; scalar_t__ height; } ;
typedef TYPE_2__ stbrp_context ;



__attribute__((used)) static void FUNC_0(stbrp_context *VAR_0, stbrp_rect *VAR_1, int VAR_2)
{
   int VAR_3;
   for (VAR_3=0; VAR_3 < VAR_2; ++VAR_3) {
      if (VAR_0->x + VAR_1[VAR_3].w > VAR_0->width) {
         VAR_0->x = 0;
         VAR_0->y = VAR_0->bottom_y;
      }
      if (VAR_0->y + VAR_1[VAR_3].h > VAR_0->height)
         break;
      VAR_1[VAR_3].x = VAR_0->x;
      VAR_1[VAR_3].y = VAR_0->y;
      VAR_1[VAR_3].was_packed = 1;
      VAR_0->x += VAR_1[VAR_3].w;
      if (VAR_0->y + VAR_1[VAR_3].h > VAR_0->bottom_y)
         VAR_0->bottom_y = VAR_0->y + VAR_1[VAR_3].h;
   }
   for ( ; VAR_3 < VAR_2; ++VAR_3)
      VAR_1[VAR_3].was_packed = 0;
}
