
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int printdir; int vsetfield; int vgetfield; } ;
struct TYPE_10__ {int tif_setupencode; int tif_setupdecode; TYPE_1__ tif_tagmethods; int tif_clientdata; } ;
struct TYPE_9__ {int predictor; int * decodepfunc; int * encodepfunc; int setupencode; int setupdecode; int printdir; int vsetparent; int vgetparent; } ;
typedef TYPE_2__ TIFFPredictorState ;
typedef TYPE_3__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_5 ;

int
FUNC_5(TIFF* VAR_6)
{
 TIFFPredictorState* VAR_7 = FUNC_0(VAR_6);

 FUNC_4(VAR_7 != 0);




 if (!FUNC_3(VAR_6, VAR_5,
         FUNC_1(VAR_5))) {
  FUNC_2(VAR_6->tif_clientdata, "TIFFPredictorInit",
      "Merging Predictor codec-specific tags failed");
  return 0;
 }




 VAR_7->vgetparent = VAR_6->tif_tagmethods.vgetfield;
 VAR_6->tif_tagmethods.vgetfield =
            VAR_3;
 VAR_7->vsetparent = VAR_6->tif_tagmethods.vsetfield;
 VAR_6->tif_tagmethods.vsetfield =
     VAR_4;
 VAR_7->printdir = VAR_6->tif_tagmethods.printdir;
 VAR_6->tif_tagmethods.printdir =
            VAR_0;

 VAR_7->setupdecode = VAR_6->tif_setupdecode;
 VAR_6->tif_setupdecode = VAR_1;
 VAR_7->setupencode = VAR_6->tif_setupencode;
 VAR_6->tif_setupencode = VAR_2;

 VAR_7->predictor = 1;
 VAR_7->encodepfunc = ((void*)0);
 VAR_7->decodepfunc = ((void*)0);
 return 1;
}
