
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ w; scalar_t__ h; scalar_t__ n; int stride; unsigned char* samples; } ;
typedef TYPE_1__ fz_pixmap ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_1(fz_pixmap *VAR_0, fz_pixmap *VAR_1, fz_pixmap *VAR_2, int VAR_3)
{
 unsigned char *VAR_4, *VAR_5, *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (!VAR_0 || !VAR_1 || !VAR_2 || VAR_0->w != VAR_1->w || VAR_1->w != VAR_2->w || VAR_0->h != VAR_1->h || VAR_1->h != VAR_2->h || VAR_0->n != VAR_1->n || VAR_1->n != VAR_2->n)
  return 0;
 VAR_7 = VAR_0->w * VAR_0->n;
 VAR_8 = VAR_0->w * VAR_3 / 256;
 VAR_8 *= VAR_0->n;
 VAR_11 = VAR_1->stride;
 VAR_12 = VAR_2->stride;
 VAR_10 = VAR_0->stride;
 VAR_4 = VAR_0->samples;
 VAR_5 = VAR_1->samples + VAR_8;
 VAR_6 = VAR_2->samples;
 for (VAR_9 = 0; VAR_9 < VAR_0->h; VAR_9++)
 {
  FUNC_0(VAR_4, VAR_6, VAR_8);
  FUNC_0(VAR_4+VAR_8, VAR_5, VAR_7-VAR_8);
  VAR_4 += VAR_10;
  VAR_5 += VAR_11;
  VAR_6 += VAR_12;
 }
 return 1;
}
