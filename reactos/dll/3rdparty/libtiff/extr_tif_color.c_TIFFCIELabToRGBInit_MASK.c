
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {double d_gammaR; int d_YCR; int d_Y0R; float d_Vrwr; double d_gammaG; float d_Vrwg; double d_gammaB; float d_Vrwb; } ;
struct TYPE_4__ {int range; int rstep; float* Yr2r; int gstep; float* Yg2g; int bstep; float* Yb2b; float X0; float Y0; float Z0; TYPE_2__ display; } ;
typedef int TIFFDisplay ;
typedef TYPE_1__ TIFFCIELabToRGB ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int const*,int) ;
 scalar_t__ FUNC_1 (double,double) ;

int
FUNC_2(TIFFCIELabToRGB* VAR_1,
      const TIFFDisplay *VAR_2, float *VAR_3)
{
 int VAR_4;
 double VAR_5;

 VAR_1->range = VAR_0;

 FUNC_0(&VAR_1->display, VAR_2, sizeof(TIFFDisplay));


 VAR_5 = 1.0 / VAR_1->display.d_gammaR ;
 VAR_1->rstep =
  (VAR_1->display.d_YCR - VAR_1->display.d_Y0R) / VAR_1->range;
 for(VAR_4 = 0; VAR_4 <= VAR_1->range; VAR_4++) {
  VAR_1->Yr2r[VAR_4] = VAR_1->display.d_Vrwr
      * ((float)FUNC_1((double)VAR_4 / VAR_1->range, VAR_5));
 }


 VAR_5 = 1.0 / VAR_1->display.d_gammaG ;
 VAR_1->gstep =
     (VAR_1->display.d_YCR - VAR_1->display.d_Y0R) / VAR_1->range;
 for(VAR_4 = 0; VAR_4 <= VAR_1->range; VAR_4++) {
  VAR_1->Yg2g[VAR_4] = VAR_1->display.d_Vrwg
      * ((float)FUNC_1((double)VAR_4 / VAR_1->range, VAR_5));
 }


 VAR_5 = 1.0 / VAR_1->display.d_gammaB ;
 VAR_1->bstep =
     (VAR_1->display.d_YCR - VAR_1->display.d_Y0R) / VAR_1->range;
 for(VAR_4 = 0; VAR_4 <= VAR_1->range; VAR_4++) {
  VAR_1->Yb2b[VAR_4] = VAR_1->display.d_Vrwb
      * ((float)FUNC_1((double)VAR_4 / VAR_1->range, VAR_5));
 }


 VAR_1->X0 = VAR_3[0];
 VAR_1->Y0 = VAR_3[1];
 VAR_1->Z0 = VAR_3[2];

 return 0;
}
