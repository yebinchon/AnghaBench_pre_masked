
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* samples; int stride; int n; int h; int y; int w; int x; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_6__ {int y1; int y0; int x1; int x0; } ;
typedef TYPE_2__ fz_irect ;
typedef int fz_context ;


 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(fz_context *VAR_0, fz_pixmap *VAR_1, fz_irect VAR_2)
{
 unsigned char *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 int VAR_7 = FUNC_0(VAR_2.x0 - VAR_1->x, 0, VAR_1->w);
 int VAR_8 = FUNC_0(VAR_2.x1 - VAR_1->x, 0, VAR_1->w);
 int VAR_9 = FUNC_0(VAR_2.y0 - VAR_1->y, 0, VAR_1->h);
 int VAR_10 = FUNC_0(VAR_2.y1 - VAR_1->y, 0, VAR_1->h);

 for (VAR_5 = VAR_9; VAR_5 < VAR_10; VAR_5++)
 {
  VAR_3 = VAR_1->samples + (unsigned int)((VAR_5 * VAR_1->stride) + (VAR_7 * VAR_1->n));
  for (VAR_4 = VAR_7; VAR_4 < VAR_8; VAR_4++)
  {
   for (VAR_6 = VAR_1->n; VAR_6 > 1; VAR_6--, VAR_3++)
    *VAR_3 = 255 - *VAR_3;
   VAR_3++;
  }
 }
}
