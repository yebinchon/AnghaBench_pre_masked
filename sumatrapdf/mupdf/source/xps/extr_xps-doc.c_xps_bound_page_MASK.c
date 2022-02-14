
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* fix; } ;
typedef TYPE_2__ xps_page ;
struct TYPE_7__ {float x1; float y1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_3__ fz_rect ;
typedef int fz_page ;
typedef int fz_context ;
struct TYPE_5__ {float width; float height; } ;



__attribute__((used)) static fz_rect
FUNC_0(fz_context *VAR_0, fz_page *VAR_1)
{
 xps_page *VAR_2 = (xps_page*)VAR_1;
 fz_rect VAR_3;
 VAR_3.x0 = VAR_3.y0 = 0;
 VAR_3.x1 = VAR_2->fix->width * 72.0f / 96.0f;
 VAR_3.y1 = VAR_2->fix->height * 72.0f / 96.0f;
 return VAR_3;
}
