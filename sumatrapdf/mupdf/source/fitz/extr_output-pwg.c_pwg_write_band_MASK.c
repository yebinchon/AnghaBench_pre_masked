
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int n; int * out; } ;
struct TYPE_4__ {TYPE_1__ super; } ;
typedef TYPE_2__ pwg_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,unsigned char const*,int) ;
 scalar_t__ FUNC_3 (unsigned char const*,unsigned char const*,int) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_band_writer *VAR_1, int VAR_2, int VAR_3, int VAR_4, const unsigned char *VAR_5)
{
 pwg_band_writer *VAR_6 = (pwg_band_writer *)VAR_1;
 fz_output *VAR_7 = VAR_6->super.out;
 int VAR_8 = VAR_6->super.w;
 int VAR_9 = VAR_6->super.h;
 const unsigned char *VAR_10 = VAR_5;
 int VAR_11 = VAR_6->super.n;
 int VAR_12 = VAR_8 * VAR_11;
 int VAR_13, VAR_14;


 VAR_13 = 0;
 while (VAR_13 < VAR_9)
 {
  int VAR_15;

  FUNC_0(VAR_10 == VAR_5 + VAR_13 * VAR_2);


  for (VAR_15 = 1; VAR_15 < 256 && VAR_13+VAR_15 < VAR_9; VAR_15++)
  {
   if (FUNC_3(VAR_10, VAR_10 + VAR_15 * VAR_2, VAR_12) != 0)
    break;
  }
  FUNC_1(VAR_0, VAR_7, VAR_15-1);


  VAR_14 = 0;
  while (VAR_14 < VAR_8)
  {
   int VAR_16;

   FUNC_0(VAR_10 == VAR_5 + VAR_13 * VAR_2 + VAR_14 * VAR_11);


   for (VAR_16 = 1; VAR_16 < 128 && VAR_14+VAR_16 < VAR_8; VAR_16++)
   {
    if (FUNC_3(VAR_10 + (VAR_16-1)*VAR_11, VAR_10 + VAR_16*VAR_11, VAR_11) == 0)
     break;
   }
   if (VAR_16 == 1)
   {
    int VAR_17;




    for (VAR_17 = 1; VAR_17 < 128 && VAR_14+VAR_17 < VAR_8; VAR_17++)
    {
     if (FUNC_3(VAR_10, VAR_10 + VAR_17*VAR_11, VAR_11) != 0)
      break;
    }
    FUNC_1(VAR_0, VAR_7, VAR_17-1);
    FUNC_2(VAR_0, VAR_7, VAR_10, VAR_11);
    VAR_10 += VAR_11*VAR_17;
    VAR_14 += VAR_17;
   }
   else
   {
    FUNC_1(VAR_0, VAR_7, 257-VAR_16);
    VAR_14 += VAR_16;
    while (VAR_16 > 0)
    {
     FUNC_2(VAR_0, VAR_7, VAR_10, VAR_11);
     VAR_10 += VAR_11;
     VAR_16--;
    }
   }
  }


  VAR_10 += VAR_2*(VAR_15-1);
  VAR_13 += VAR_15;
 }
}
