
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_output ;
typedef int fz_context ;
struct TYPE_3__ {int w; int h; int n; int * out; } ;
typedef TYPE_1__ fz_band_writer ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int *,unsigned char const*,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_1, fz_band_writer *VAR_2, int VAR_3, int VAR_4, int VAR_5, const unsigned char *VAR_6)
{
 fz_output *VAR_7 = VAR_2->out;
 int VAR_8 = VAR_2->w;
 int VAR_9 = VAR_2->h;
 int VAR_10 = VAR_2->n;
 int VAR_11;
 int VAR_12 = VAR_4 + VAR_5;

 if (VAR_10 != 1 && VAR_10 != 3)
  FUNC_0(VAR_1, VAR_0, "pixmap must be grayscale or rgb to write as pnm");

 if (!VAR_7)
  return;

 if (VAR_12 > VAR_9)
  VAR_12 = VAR_9;
 VAR_12 -= VAR_4;





 while (VAR_12--)
 {
  VAR_11 = VAR_8;
  while (VAR_11)
  {
   int VAR_13 = VAR_11;

   switch (VAR_10)
   {
   case 1:

    FUNC_1(VAR_1, VAR_7, VAR_6, VAR_13);
    VAR_6 += VAR_13;
    break;
   case 3:
    FUNC_1(VAR_1, VAR_7, VAR_6, VAR_13*3);
    VAR_6 += VAR_13*3;
    break;
   }
   VAR_11 -= VAR_13;
  }
  VAR_6 += VAR_3 - VAR_8*VAR_10;
 }
}
