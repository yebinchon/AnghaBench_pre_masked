
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stride; int w; int x; int y; unsigned char* samples; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int,int,int *,int) ;

fz_pixmap *
FUNC_1(fz_context *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, unsigned char *VAR_5, int VAR_6)
{
 fz_pixmap *VAR_7 = FUNC_0(VAR_0, ((void*)0), VAR_3, VAR_4, ((void*)0), 1);
 int VAR_8 = VAR_7->stride - VAR_7->w;
 VAR_7->x = VAR_1;
 VAR_7->y = VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
 {
  unsigned char *VAR_9 = VAR_7->samples + VAR_2 * VAR_3;
  unsigned char *VAR_10 = VAR_5 + VAR_2 * VAR_6;
  unsigned char VAR_11 = 0x80;
  int VAR_12 = VAR_3;
  while (VAR_12--)
  {
   *VAR_9++ = (*VAR_10 & VAR_11) ? 255 : 0;
   VAR_11 >>= 1;
   if (VAR_11 == 0)
    VAR_11 = 0x80, VAR_10++;
  }
  VAR_9 += VAR_8;
 }

 return VAR_7;
}
