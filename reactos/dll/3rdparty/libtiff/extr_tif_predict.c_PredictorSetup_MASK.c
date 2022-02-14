
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int td_bitspersample; int td_sampleformat; scalar_t__ td_planarconfig; int td_samplesperpixel; } ;
struct TYPE_12__ {int tif_clientdata; TYPE_2__ tif_dir; } ;
struct TYPE_10__ {int predictor; int stride; scalar_t__ rowsize; } ;
typedef TYPE_1__ TIFFPredictorState ;
typedef TYPE_2__ TIFFDirectory ;
typedef TYPE_3__ TIFF ;


 scalar_t__ VAR_0 ;



 TYPE_1__* FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_5(TIFF* VAR_2)
{
 static const char VAR_3[] = "PredictorSetup";

 TIFFPredictorState* VAR_4 = FUNC_0(VAR_2);
 TIFFDirectory* VAR_5 = &VAR_2->tif_dir;

 switch (VAR_4->predictor)
 {
  case 128:
   return 1;
  case 129:
   if (VAR_5->td_bitspersample != 8
       && VAR_5->td_bitspersample != 16
       && VAR_5->td_bitspersample != 32) {
    FUNC_1(VAR_2->tif_clientdata, VAR_3,
        "Horizontal differencing \"Predictor\" not supported with %d-bit samples",
        VAR_5->td_bitspersample);
    return 0;
   }
   break;
  case 130:
   if (VAR_5->td_sampleformat != VAR_1) {
    FUNC_1(VAR_2->tif_clientdata, VAR_3,
        "Floating point \"Predictor\" not supported with %d data format",
        VAR_5->td_sampleformat);
    return 0;
   }
                        if (VAR_5->td_bitspersample != 16
                            && VAR_5->td_bitspersample != 24
                            && VAR_5->td_bitspersample != 32
                            && VAR_5->td_bitspersample != 64) {
                                FUNC_1(VAR_2->tif_clientdata, VAR_3,
                                             "Floating point \"Predictor\" not supported with %d-bit samples",
                                             VAR_5->td_bitspersample);
    return 0;
                            }
   break;
  default:
   FUNC_1(VAR_2->tif_clientdata, VAR_3,
       "\"Predictor\" value %d not supported",
       VAR_4->predictor);
   return 0;
 }
 VAR_4->stride = (VAR_5->td_planarconfig == VAR_0 ?
     VAR_5->td_samplesperpixel : 1);



 if (FUNC_4(VAR_2))
  VAR_4->rowsize = FUNC_3(VAR_2);
 else
  VAR_4->rowsize = FUNC_2(VAR_2);
 if (VAR_4->rowsize == 0)
  return 0;

 return 1;
}
