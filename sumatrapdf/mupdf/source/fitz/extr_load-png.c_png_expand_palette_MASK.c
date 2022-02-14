
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct info {unsigned int height; unsigned int width; int * palette; scalar_t__ transparency; int cs; } ;
struct TYPE_6__ {int w; unsigned char* samples; int stride; int n; int yres; int xres; int h; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int,int ,int *,scalar_t__) ;

__attribute__((used)) static fz_pixmap *
FUNC_2(fz_context *VAR_0, struct info *VAR_1, fz_pixmap *VAR_2)
{
 fz_pixmap *VAR_3 = FUNC_1(VAR_0, VAR_1->cs, VAR_2->w, VAR_2->h, ((void*)0), VAR_1->transparency);
 unsigned char *VAR_4 = VAR_2->samples;
 unsigned char *VAR_5 = VAR_3->samples;
 unsigned int VAR_6, VAR_7;
 int VAR_8 = VAR_3->stride - VAR_3->w * VAR_3->n;
 int VAR_9 = VAR_2->stride - VAR_2->w * VAR_2->n;

 VAR_3->xres = VAR_2->xres;
 VAR_3->yres = VAR_2->yres;

 for (VAR_7 = VAR_1->height; VAR_7 > 0; VAR_7--)
 {
  for (VAR_6 = VAR_1->width; VAR_6 > 0; VAR_6--)
  {
   int VAR_10 = *VAR_4 << 2;
   *VAR_5++ = VAR_1->palette[VAR_10];
   *VAR_5++ = VAR_1->palette[VAR_10 + 1];
   *VAR_5++ = VAR_1->palette[VAR_10 + 2];
   if (VAR_1->transparency)
    *VAR_5++ = VAR_1->palette[VAR_10 + 3];
   ++VAR_4;
  }
  VAR_4 += VAR_9;
  VAR_5 += VAR_8;
 }

 FUNC_0(VAR_0, VAR_2);
 return VAR_3;
}
