
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int fz_separations ;
struct TYPE_6__ {int x; scalar_t__ y; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_7__ {int x1; int x0; scalar_t__ y0; scalar_t__ y1; } ;
typedef TYPE_2__ fz_irect ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *,int *,int,scalar_t__,int *,int,int,unsigned char*) ;

fz_pixmap *
FUNC_3(fz_context *VAR_0, fz_colorspace *VAR_1, fz_irect VAR_2, fz_separations *VAR_3, int VAR_4, unsigned char *VAR_5)
{
 int VAR_6 = VAR_2.x1 - VAR_2.x0;
 int VAR_7;
 int VAR_8 = FUNC_1(VAR_0, VAR_3);
 fz_pixmap *VAR_9;
 if (!VAR_1 && VAR_8 == 0) VAR_4 = 1;
 VAR_7 = (FUNC_0(VAR_0, VAR_1) + VAR_8 + VAR_4) * VAR_6;
 VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_6, VAR_2.y1 - VAR_2.y0, VAR_3, VAR_4, VAR_7, VAR_5);
 VAR_9->x = VAR_2.x0;
 VAR_9->y = VAR_2.y0;
 return VAR_9;
}
