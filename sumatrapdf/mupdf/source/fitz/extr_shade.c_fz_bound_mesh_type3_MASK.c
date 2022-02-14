
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {float** coords; scalar_t__* extend; } ;
struct TYPE_10__ {TYPE_1__ l_or_r; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef TYPE_3__ fz_shade ;
struct TYPE_12__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_4__ fz_rect ;
struct TYPE_13__ {float x; float y; } ;
typedef TYPE_5__ fz_point ;
typedef int fz_context ;


 TYPE_4__ VAR_0 ;

__attribute__((used)) static fz_rect
FUNC_0(fz_context *VAR_1, fz_shade *VAR_2)
{
 fz_rect VAR_3;
 fz_point VAR_4, VAR_5;
 float VAR_6, VAR_7;

 VAR_6 = VAR_2->u.l_or_r.coords[0][2];
 VAR_7 = VAR_2->u.l_or_r.coords[1][2];

 if (VAR_2->u.l_or_r.extend[0])
 {
  if (VAR_6 >= VAR_7)
   return VAR_0;
 }

 if (VAR_2->u.l_or_r.extend[1])
 {
  if (VAR_6 <= VAR_7)
   return VAR_0;
 }

 VAR_4 = VAR_2->u.l_or_r.coords[0][0];
 VAR_4 = VAR_2->u.l_or_r.coords[0][1];
 VAR_5 = VAR_2->u.l_or_r.coords[1][0];
 VAR_5 = VAR_2->u.l_or_r.coords[1][1];

 VAR_3.x0 = VAR_4 - VAR_6; VAR_3.y0 = VAR_4 - VAR_6;
 VAR_3.x1 = VAR_4 + VAR_6; VAR_3.y1 = VAR_4 + VAR_6;
 if (VAR_3.x0 > VAR_5 - VAR_7)
  VAR_3.x0 = VAR_5 - VAR_7;
 if (VAR_3.x1 < VAR_5 + VAR_7)
  VAR_3.x1 = VAR_5 + VAR_7;
 if (VAR_3.y0 > VAR_5 - VAR_7)
  VAR_3.y0 = VAR_5 - VAR_7;
 if (VAR_3.y1 < VAR_5 + VAR_7)
  VAR_3.y1 = VAR_5 + VAR_7;
 return VAR_3;
}
