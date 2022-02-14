
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int td_bitspersample; } ;
struct TYPE_11__ {scalar_t__ tif_encoderow; int tif_flags; void* tif_encodetile; void* tif_encodestrip; void* tif_postdecode; TYPE_2__ tif_dir; } ;
struct TYPE_9__ {int predictor; scalar_t__ encodepfunc; scalar_t__ encoderow; void* encodetile; void* encodestrip; int (* setupencode ) (TYPE_3__*) ;} ;
typedef TYPE_1__ TIFFPredictorState ;
typedef TYPE_2__ TIFFDirectory ;
typedef TYPE_3__ TIFF ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_3(TIFF* VAR_10)
{
 TIFFPredictorState* VAR_11 = FUNC_1(VAR_10);
 TIFFDirectory* VAR_12 = &VAR_10->tif_dir;

 if (!(*VAR_11->setupencode)(VAR_10) || !FUNC_0(VAR_10))
  return 0;

 if (VAR_11->predictor == 2) {
  switch (VAR_12->td_bitspersample) {
   case 8: VAR_11->encodepfunc = VAR_7; break;
   case 16: VAR_11->encodepfunc = VAR_5; break;
   case 32: VAR_11->encodepfunc = VAR_6; break;
  }




                if( VAR_10->tif_encoderow != VAR_0 )
                {
                    VAR_11->encoderow = VAR_10->tif_encoderow;
                    VAR_10->tif_encoderow = VAR_0;
                    VAR_11->encodestrip = VAR_10->tif_encodestrip;
                    VAR_10->tif_encodestrip = VAR_1;
                    VAR_11->encodetile = VAR_10->tif_encodetile;
                    VAR_10->tif_encodetile = VAR_1;
                }
                if (VAR_10->tif_flags & VAR_2) {
                    if (VAR_11->encodepfunc == VAR_5) {
                            VAR_11->encodepfunc = VAR_8;
                            VAR_10->tif_postdecode = VAR_3;
                    } else if (VAR_11->encodepfunc == VAR_6) {
                            VAR_11->encodepfunc = VAR_9;
                            VAR_10->tif_postdecode = VAR_3;
                    }
                }
        }

 else if (VAR_11->predictor == 3) {
  VAR_11->encodepfunc = VAR_4;




                if( VAR_10->tif_encoderow != VAR_0 )
                {
                    VAR_11->encoderow = VAR_10->tif_encoderow;
                    VAR_10->tif_encoderow = VAR_0;
                    VAR_11->encodestrip = VAR_10->tif_encodestrip;
                    VAR_10->tif_encodestrip = VAR_1;
                    VAR_11->encodetile = VAR_10->tif_encodetile;
                    VAR_10->tif_encodetile = VAR_1;
                }
 }

 return 1;
}
