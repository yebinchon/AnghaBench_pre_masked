
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
 int FUNC_1 (int *,int *,int *,int) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_2, fz_band_writer *VAR_3, int VAR_4, int VAR_5, int VAR_6, const unsigned char *VAR_7)
{
 fz_output *VAR_8 = VAR_3->out;
 int VAR_9 = VAR_3->w;
 int VAR_10 = VAR_3->h;
 int VAR_11 = VAR_3->n;
 int VAR_12;
 int VAR_13 = VAR_5 + VAR_6;

 if (VAR_11 != 4)
  FUNC_0(VAR_2, VAR_0, "wrong number of color components in bitmap");

 if (VAR_13 > VAR_10)
  VAR_13 = VAR_10;
 VAR_13 -= VAR_5;

 VAR_12 = VAR_4 - (VAR_9>>1);
 while (VAR_13--)
 {
  int VAR_14 = VAR_9-1;
  while (VAR_14 > 0)
  {
   FUNC_1(VAR_2, VAR_8, &VAR_1[8 * *VAR_7++], 8);
   VAR_14 -= 2;
  }
  if (VAR_14 == 0)
   FUNC_1(VAR_2, VAR_8, &VAR_1[8 * *VAR_7], 4);
  VAR_7 += VAR_12;
 }
}
