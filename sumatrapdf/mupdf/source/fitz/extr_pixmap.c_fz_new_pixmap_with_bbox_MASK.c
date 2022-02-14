
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fz_separations ;
struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_7__ {scalar_t__ y0; scalar_t__ x0; scalar_t__ y1; scalar_t__ x1; } ;
typedef TYPE_2__ fz_irect ;
typedef int fz_context ;
typedef int fz_colorspace ;


 TYPE_1__* FUNC_0 (int *,int *,scalar_t__,scalar_t__,int *,int) ;

fz_pixmap *
FUNC_1(fz_context *VAR_0, fz_colorspace *VAR_1, fz_irect VAR_2, fz_separations *VAR_3, int VAR_4)
{
 fz_pixmap *VAR_5;
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2.x1 - VAR_2.x0, VAR_2.y1 - VAR_2.y0, VAR_3, VAR_4);
 VAR_5->x = VAR_2.x0;
 VAR_5->y = VAR_2.y0;
 return VAR_5;
}
