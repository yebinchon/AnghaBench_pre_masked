
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int stride; unsigned char* samples; int y; int n; int x; int w; int h; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_12__ {int x1; int x0; int y1; int y0; } ;
typedef TYPE_2__ fz_irect ;
typedef int fz_default_colorspaces ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*,int *,int const*,int ,int ) ;
 int VAR_0 ;
 TYPE_2__ FUNC_1 (TYPE_2__,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

void
FUNC_4(fz_context *VAR_1, fz_pixmap *VAR_2, fz_pixmap *VAR_3, fz_irect VAR_4, const fz_default_colorspaces *VAR_5)
{
 unsigned char *VAR_6;
 unsigned char *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_4 = FUNC_1(VAR_4, FUNC_2(VAR_1, VAR_2));
 VAR_4 = FUNC_1(VAR_4, FUNC_2(VAR_1, VAR_3));
 VAR_9 = VAR_4.x1 - VAR_4.x0;
 VAR_8 = VAR_4.y1 - VAR_4.y0;
 if (VAR_9 <= 0 || VAR_8 <= 0)
  return;

 VAR_11 = VAR_3->stride;
 VAR_6 = VAR_3->samples + (unsigned int)(VAR_11 * (VAR_4.y0 - VAR_3->y) + VAR_3->n * (VAR_4.x0 - VAR_3->x));
 VAR_10 = VAR_2->stride;
 VAR_7 = VAR_2->samples + (unsigned int)(VAR_10 * (VAR_4.y0 - VAR_2->y) + VAR_2->n * (VAR_4.x0 - VAR_2->x));

 if (VAR_3->n == VAR_2->n)
 {
  VAR_9 *= VAR_3->n;
  do
  {
   FUNC_3(VAR_7, VAR_6, VAR_9);
   VAR_6 += VAR_11;
   VAR_7 += VAR_10;
  }
  while (--VAR_8);
 }
 else
 {
  fz_pixmap VAR_12 = *VAR_3;
  VAR_12.x = VAR_4.x0;
  VAR_12.y = VAR_4.y0;
  VAR_12.w = VAR_9;
  VAR_12.h = VAR_8;
  VAR_12.samples = VAR_6;
  FUNC_0(VAR_1, VAR_2, &VAR_12, ((void*)0), VAR_5, VAR_0, 0);
 }
}
