
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float linewidth; scalar_t__ linejoin; int miterlimit; } ;
typedef TYPE_1__ fz_stroke_state ;
struct TYPE_7__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_2__ fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_0 (int ) ;

fz_rect
FUNC_1(fz_context *VAR_2, fz_rect VAR_3, const fz_stroke_state *VAR_4, fz_matrix VAR_5)
{
 float VAR_6;

 if (!VAR_4)
  return VAR_3;

 VAR_6 = VAR_4->linewidth;
 if (VAR_6 == 0)
  VAR_6 = 1.0f;
 VAR_6 *= FUNC_0(VAR_5);
 if ((VAR_4->linejoin == VAR_0 || VAR_4->linejoin == VAR_1) && VAR_4->miterlimit > 1)
  VAR_6 *= VAR_4->miterlimit;

 VAR_3.x0 -= VAR_6;
 VAR_3.y0 -= VAR_6;
 VAR_3.x1 += VAR_6;
 VAR_3.y1 += VAR_6;
 return VAR_3;
}
