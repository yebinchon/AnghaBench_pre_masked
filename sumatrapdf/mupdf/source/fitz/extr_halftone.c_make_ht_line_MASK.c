
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int w; int h; int n; unsigned char* samples; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_5__ {int n; TYPE_1__** comp; } ;
typedef TYPE_2__ fz_halftone ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, fz_halftone *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 VAR_6 = VAR_1->n;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
 {
  fz_pixmap *VAR_7 = VAR_1->comp[VAR_5];
  unsigned char *VAR_8 = VAR_0++;
  unsigned char *VAR_9;
  unsigned char *VAR_10;
  int VAR_11 = VAR_2 + VAR_7->x;
  int VAR_12 = VAR_3 + VAR_7->y;
  int VAR_13 = VAR_7->w;
  int VAR_14 = VAR_7->h;
  int VAR_15 = VAR_4;
  int VAR_16;
  VAR_11 = VAR_11 % VAR_13;
  if (VAR_11 < 0)
   VAR_11 += VAR_13;
  VAR_12 = VAR_12 % VAR_14;
  if (VAR_12 < 0)
   VAR_12 += VAR_14;

  FUNC_0(VAR_7->n == 1);


  VAR_10 = VAR_7->samples + (unsigned int)(VAR_12 * VAR_13);
  VAR_9 = VAR_10 + VAR_11;
  VAR_16 = VAR_13 - VAR_11;
  if (VAR_16 > VAR_15)
   VAR_16 = VAR_15;
  VAR_15 -= VAR_16;
  while (VAR_16--)
  {
   *VAR_8 = *VAR_9++;
   VAR_8 += VAR_6;
  }


  VAR_15 -= VAR_13;
  while (VAR_15 >= 0)
  {
   VAR_16 = VAR_13;
   VAR_9 = VAR_10;
   while (VAR_16--)
   {
    *VAR_8 = *VAR_9++;
    VAR_8 += VAR_6;
   }
   VAR_15 -= VAR_13;
  }
  VAR_15 += VAR_13;


  VAR_9 = VAR_10;
  while (VAR_15--)
  {
   *VAR_8 = *VAR_9++;
   VAR_8 += VAR_6;
  }
 }
}
