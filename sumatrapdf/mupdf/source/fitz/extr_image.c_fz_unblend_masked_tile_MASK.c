
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {unsigned char* samples; int n; int stride; int w; scalar_t__ h; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_12__ {int x0; int y0; int x1; scalar_t__ y1; } ;
typedef TYPE_2__ fz_irect ;
struct TYPE_13__ {int n; unsigned char* colorkey; TYPE_8__* mask; } ;
typedef TYPE_3__ fz_image ;
typedef int fz_context ;
struct TYPE_14__ {scalar_t__ w; scalar_t__ h; } ;


 unsigned char FUNC_0 (unsigned char,int ,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,TYPE_8__*,TYPE_2__*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_pixmap *VAR_1, fz_image *VAR_2, const fz_irect *VAR_3)
{
 fz_pixmap *VAR_4;
 unsigned char *VAR_5, *VAR_6 = VAR_1->samples;
 int VAR_7 = VAR_1->n;
 int VAR_8;
 int VAR_9, VAR_10 = VAR_1->stride - VAR_1->w * VAR_1->n;
 int VAR_11;
 fz_irect VAR_12;


 if (VAR_3)
  VAR_12 = *VAR_3;
 else
 {
  VAR_12.x0 = 0;
  VAR_12.y0 = 0;
  VAR_12.x1 = VAR_1->w;
  VAR_12.y1 = VAR_1->h;
 }

 VAR_4 = FUNC_2(VAR_0, VAR_2->mask, &VAR_12, ((void*)0), ((void*)0), ((void*)0));
 VAR_5 = VAR_4->samples;




 if (VAR_2->mask->w == VAR_4->w && VAR_2->mask->h == VAR_4->h) {
  VAR_12.x0 = 0;
  VAR_12.y0 = 0;
 }
 if (VAR_3)
  VAR_5 += (VAR_3->x0 - VAR_12.x0) * VAR_4->n + (VAR_3->y0 - VAR_12.y0) * VAR_4->stride;
 VAR_9 = VAR_4->stride - VAR_1->w * VAR_4->n;
 VAR_11 = VAR_1->h;

 if (VAR_1->w != 0)
 {
  while (VAR_11--)
  {
   int VAR_13 = VAR_1->w;
   do
   {
    if (*VAR_5 == 0)
     for (VAR_8 = 0; VAR_8 < VAR_2->n; VAR_8++)
      VAR_6[VAR_8] = VAR_2->colorkey[VAR_8];
    else
     for (VAR_8 = 0; VAR_8 < VAR_2->n; VAR_8++)
      VAR_6[VAR_8] = FUNC_0(VAR_2->colorkey[VAR_8] + (VAR_6[VAR_8] - VAR_2->colorkey[VAR_8]) * 255 / *VAR_5, 0, 255);
    VAR_5++;
    VAR_6 += VAR_7;
   }
   while (--VAR_13);
   VAR_5 += VAR_9;
   VAR_6 += VAR_10;
  }
 }

 FUNC_1(VAR_0, VAR_4);
}
