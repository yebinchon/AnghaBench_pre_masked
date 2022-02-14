
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
typedef TYPE_1__ fz_irect ;
struct TYPE_6__ {scalar_t__ h; scalar_t__ y; scalar_t__ w; scalar_t__ x; } ;
typedef TYPE_2__ fz_glyph ;
typedef int fz_context ;



fz_irect
FUNC_0(fz_context *VAR_0, fz_glyph *VAR_1)
{
 fz_irect VAR_2;
 VAR_2.x0 = VAR_1->x;
 VAR_2.y0 = VAR_1->y;
 VAR_2.x1 = VAR_1->x + VAR_1->w;
 VAR_2.y1 = VAR_1->y + VAR_1->h;
 return VAR_2;
}
