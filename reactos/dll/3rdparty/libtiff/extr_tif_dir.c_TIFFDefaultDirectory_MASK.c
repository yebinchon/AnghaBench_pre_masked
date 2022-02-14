
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_14__ {struct TYPE_14__* fields; scalar_t__ allocated_size; } ;
struct TYPE_11__ {int * printdir; int vgetfield; int vsetfield; } ;
struct TYPE_12__ {int td_bitspersample; int td_samplesperpixel; size_t td_rowsperstrip; int td_tiledepth; int td_stripbytecountsorted; int td_imagedepth; int* td_ycbcrsubsampling; int td_ycbcrpositioning; int td_sampleformat; int td_resolutionunit; scalar_t__ td_tilelength; scalar_t__ td_tilewidth; int td_orientation; int td_threshholding; int td_fillorder; } ;
struct TYPE_13__ {scalar_t__ tif_nfieldscompat; int tif_flags; TYPE_6__* tif_fieldscompat; TYPE_1__ tif_tagmethods; int * tif_foundfield; int tif_postdecode; TYPE_2__ tif_dir; } ;
typedef int TIFFFieldArray ;
typedef TYPE_2__ TIFFDirectory ;
typedef TYPE_3__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_1 () ;
 int VAR_10 ;
 int FUNC_2 (TYPE_3__*,int const*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (TYPE_3__*) ;

int
FUNC_7(TIFF* VAR_13)
{
 register TIFFDirectory* VAR_14 = &VAR_13->tif_dir;
 const TIFFFieldArray* VAR_15;

 VAR_15 = FUNC_1();
 FUNC_2(VAR_13, VAR_15);

 FUNC_5(VAR_14, 0, sizeof (*VAR_14));
 VAR_14->td_fillorder = VAR_1;
 VAR_14->td_bitspersample = 1;
 VAR_14->td_threshholding = VAR_5;
 VAR_14->td_orientation = VAR_2;
 VAR_14->td_samplesperpixel = 1;
 VAR_14->td_rowsperstrip = (uint32) -1;
 VAR_14->td_tilewidth = 0;
 VAR_14->td_tilelength = 0;
 VAR_14->td_tiledepth = 1;
 VAR_14->td_stripbytecountsorted = 1;
 VAR_14->td_resolutionunit = VAR_3;
 VAR_14->td_sampleformat = VAR_4;
 VAR_14->td_imagedepth = 1;
 VAR_14->td_ycbcrsubsampling[0] = 2;
 VAR_14->td_ycbcrsubsampling[1] = 2;
 VAR_14->td_ycbcrpositioning = VAR_9;
 VAR_13->tif_postdecode = VAR_10;
 VAR_13->tif_foundfield = ((void*)0);
 VAR_13->tif_tagmethods.vsetfield = VAR_12;
 VAR_13->tif_tagmethods.vgetfield = VAR_11;
 VAR_13->tif_tagmethods.printdir = ((void*)0);





 if (VAR_13->tif_nfieldscompat > 0) {
  uint32 VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_13->tif_nfieldscompat; VAR_16++) {
    if (VAR_13->tif_fieldscompat[VAR_16].allocated_size)
      FUNC_4(VAR_13->tif_fieldscompat[VAR_16].fields);
  }
  FUNC_4(VAR_13->tif_fieldscompat);
  VAR_13->tif_nfieldscompat = 0;
  VAR_13->tif_fieldscompat = ((void*)0);
 }
 if (&FUNC_3)
  FUNC_3)(VAR_13);
 (void) FUNC_0(VAR_13, VAR_6, VAR_0);
 VAR_13->tif_flags &= ~VAR_7;






 VAR_13->tif_flags &= ~VAR_8;

 return (1);
}
