
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * tileContigRoutine ;
struct TYPE_5__ {int tif_clientdata; } ;
struct TYPE_4__ {int * cielab; TYPE_3__* tif; } ;
typedef TYPE_1__ TIFFRGBAImage ;
typedef int TIFFCIELabToRGB ;


 scalar_t__ FUNC_0 (int *,int *,float*) ;
 int FUNC_1 (int ,char const*,char*) ;
 int FUNC_2 (TYPE_3__*,int ,float**) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static tileContigRoutine
FUNC_5(TIFFRGBAImage* VAR_3)
{
 static const char VAR_4[] = "initCIELabConversion";

 float *VAR_5;
 float VAR_6[3];

 FUNC_2(VAR_3->tif, VAR_0, &VAR_5);
 if (VAR_5[1] == 0.0f ) {
  FUNC_1(VAR_3->tif->tif_clientdata, VAR_4,
      "Invalid value for WhitePoint tag.");
  return ((void*)0);
        }

 if (!VAR_3->cielab) {
  VAR_3->cielab = (TIFFCIELabToRGB *)
   FUNC_4(sizeof(TIFFCIELabToRGB));
  if (!VAR_3->cielab) {
   FUNC_1(VAR_3->tif->tif_clientdata, VAR_4,
       "No space for CIE L*a*b*->RGB conversion state.");
   return ((void*)0);
  }
 }

 VAR_6[1] = 100.0F;
 VAR_6[0] = VAR_5[0] / VAR_5[1] * VAR_6[1];
 VAR_6[2] = (1.0F - VAR_5[0] - VAR_5[1])
        / VAR_5[1] * VAR_6[1];
 if (FUNC_0(VAR_3->cielab, &VAR_1, VAR_6) < 0) {
  FUNC_1(VAR_3->tif->tif_clientdata, VAR_4,
      "Failed to initialize CIE L*a*b*->RGB conversion state.");
  FUNC_3(VAR_3->cielab);
  return ((void*)0);
 }

 return VAR_2;
}
