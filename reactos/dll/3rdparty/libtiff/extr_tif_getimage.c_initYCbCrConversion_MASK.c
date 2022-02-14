
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_5__ {int tif_clientdata; } ;
struct TYPE_4__ {int * ycbcr; TYPE_3__* tif; } ;
typedef int TIFFYCbCrToRGB ;
typedef int TIFFRGBValue ;
typedef TYPE_1__ TIFFRGBAImage ;


 int FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (TYPE_3__*,int ,float**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,float*,float*) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (float) ;

__attribute__((used)) static int
FUNC_6(TIFFRGBAImage* VAR_2)
{
 static const char VAR_3[] = "initYCbCrConversion";

 float *VAR_4, *VAR_5;

 if (VAR_2->ycbcr == ((void*)0)) {
  VAR_2->ycbcr = (TIFFYCbCrToRGB*) FUNC_4(
      FUNC_3(sizeof (TIFFYCbCrToRGB), sizeof (long))
      + 4*256*sizeof (TIFFRGBValue)
      + 2*256*sizeof (int)
      + 3*256*sizeof (int32)
      );
  if (VAR_2->ycbcr == ((void*)0)) {
   FUNC_0(VAR_2->tif->tif_clientdata, VAR_3,
       "No space for YCbCr->RGB conversion state");
   return (0);
  }
 }

 FUNC_1(VAR_2->tif, VAR_1, &VAR_4);
 FUNC_1(VAR_2->tif, VAR_0,
     &VAR_5);



        if( VAR_4[0] != VAR_4[0] ||
            VAR_4[1] != VAR_4[1] ||
            VAR_4[1] == 0.0 ||
            VAR_4[2] != VAR_4[2] )
        {
            FUNC_0(VAR_2->tif->tif_clientdata, VAR_3,
                "Invalid values for YCbCrCoefficients tag");
            return (0);
        }

        if( !FUNC_5(VAR_5[0]) ||
            !FUNC_5(VAR_5[1]) ||
            !FUNC_5(VAR_5[2]) ||
            !FUNC_5(VAR_5[3]) ||
            !FUNC_5(VAR_5[4]) ||
            !FUNC_5(VAR_5[5]) )
        {
            FUNC_0(VAR_2->tif->tif_clientdata, VAR_3,
                "Invalid values for ReferenceBlackWhite tag");
            return (0);
        }

 if (FUNC_2(VAR_2->ycbcr, VAR_4, VAR_5) < 0)
  return(0);
 return (1);
}
