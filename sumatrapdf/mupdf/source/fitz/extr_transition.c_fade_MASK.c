
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ w; scalar_t__ h; scalar_t__ n; int stride; unsigned char* samples; } ;
typedef TYPE_1__ fz_pixmap ;



__attribute__((used)) static int
FUNC_0(fz_pixmap *VAR_0, const fz_pixmap *VAR_1, const fz_pixmap *VAR_2, int VAR_3)
{
 unsigned char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9, VAR_10, VAR_11;

 if (!VAR_0 || !VAR_1 || !VAR_2 || VAR_0->w != VAR_1->w || VAR_1->w != VAR_2->w || VAR_0->h != VAR_1->h || VAR_1->h != VAR_2->h || VAR_0->n != VAR_1->n || VAR_1->n != VAR_2->n)
  return 0;
 VAR_8 = VAR_0->h;
 VAR_7 = VAR_0->w * VAR_0->n;
 VAR_10 = VAR_1->stride - VAR_7;
 VAR_11 = VAR_2->stride - VAR_7;
 VAR_9 = VAR_0->stride - VAR_7;
 VAR_4 = VAR_0->samples;
 VAR_5 = VAR_1->samples;
 VAR_6 = VAR_2->samples;
 while (VAR_8--)
 {
  int VAR_12 = VAR_7;
  while (VAR_12-- > 0)
  {
   int VAR_13 = *VAR_5++;
   int VAR_14 = *VAR_6++;
   *VAR_4++ = ((VAR_13<<8) + ((VAR_14-VAR_13) * VAR_3) + 0x80)>>8;
  }
  VAR_5 += VAR_10;
  VAR_6 += VAR_11;
  VAR_4 += VAR_9;
 }
 return 1;
}
