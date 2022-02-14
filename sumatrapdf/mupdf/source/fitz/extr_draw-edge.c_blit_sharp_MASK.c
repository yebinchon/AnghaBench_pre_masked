
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* fz_solid_color_painter_t ) (unsigned char*,int,int,unsigned char*,int,int *) ;
struct TYPE_3__ {int alpha; int x; unsigned char* samples; int y; int stride; int n; scalar_t__ w; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_overprint ;
typedef int fz_irect ;


 int FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (unsigned char*,int,int,unsigned char*,int,int *) ;

__attribute__((used)) static inline void
FUNC_3(int VAR_0, int VAR_1, int VAR_2, const fz_irect *VAR_3, fz_pixmap *VAR_4, unsigned char *VAR_5, fz_solid_color_painter_t *VAR_6, fz_overprint *VAR_7)
{
 unsigned char *VAR_8;
 int VAR_9 = VAR_4->alpha;
 VAR_0 = FUNC_0(VAR_0, VAR_4->x, VAR_4->x + VAR_4->w);
 VAR_1 = FUNC_0(VAR_1, VAR_4->x, VAR_4->x + VAR_4->w);
 if (VAR_0 < VAR_1)
 {
  VAR_8 = VAR_4->samples + (unsigned int)((VAR_2 - VAR_4->y) * VAR_4->stride + (VAR_0 - VAR_4->x) * VAR_4->n);
  if (VAR_5)
   (*VAR_6)(VAR_8, VAR_4->n, VAR_1 - VAR_0, VAR_5, VAR_9, VAR_7);
  else
   FUNC_1(VAR_8, 255, VAR_1-VAR_0);
 }
}
