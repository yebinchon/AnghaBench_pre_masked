
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int printdir; int vsetfield; int vgetfield; } ;
struct TYPE_9__ {int tif_setupencode; int tif_setupdecode; TYPE_1__ tif_tagmethods; } ;
struct TYPE_8__ {int setupencode; int setupdecode; int printdir; int vsetparent; int vgetparent; } ;
typedef TYPE_2__ TIFFPredictorState ;
typedef TYPE_3__ TIFF ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;

int
FUNC_2(TIFF* VAR_0)
{
 TIFFPredictorState* VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1 != 0);

 VAR_0->tif_tagmethods.vgetfield = VAR_1->vgetparent;
 VAR_0->tif_tagmethods.vsetfield = VAR_1->vsetparent;
 VAR_0->tif_tagmethods.printdir = VAR_1->printdir;
 VAR_0->tif_setupdecode = VAR_1->setupdecode;
 VAR_0->tif_setupencode = VAR_1->setupencode;

 return 1;
}
