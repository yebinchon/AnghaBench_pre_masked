
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_6__ {int* redcmap; int* greencmap; int* bluecmap; int stoponerr; int bitspersample; int alpha; int samplesperpixel; int photometric; int width; int height; int orientation; int isContig; int * tif; int req_orientation; int * Bitdepth16To8; int * UaToAa; int * cielab; int * ycbcr; int * PALmap; int * BWmap; int * Map; scalar_t__ col_offset; scalar_t__ row_offset; } ;
typedef TYPE_1__ TIFFRGBAImage ;
typedef int TIFF ;



 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_2 (int *,int ,...) ;
 int FUNC_3 (int *,int ,int*,...) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int *) ;
 char* VAR_21 ;
 int FUNC_10 (char*,char*,...) ;

int
FUNC_11(TIFFRGBAImage* VAR_22, TIFF* VAR_23, int VAR_24, char VAR_25[1024])
{
 uint16* VAR_26;
 uint16 VAR_27;
 uint16 VAR_28;
 uint16 VAR_29;
 int VAR_30;
 uint16 *VAR_31, *VAR_32, *VAR_33;
 int VAR_34;

 if( !FUNC_5(VAR_23, VAR_25) )
  return 0;


 VAR_22->row_offset = 0;
 VAR_22->col_offset = 0;
 VAR_22->redcmap = ((void*)0);
 VAR_22->greencmap = ((void*)0);
 VAR_22->bluecmap = ((void*)0);
 VAR_22->Map = ((void*)0);
 VAR_22->BWmap = ((void*)0);
 VAR_22->PALmap = ((void*)0);
 VAR_22->ycbcr = ((void*)0);
 VAR_22->cielab = ((void*)0);
 VAR_22->UaToAa = ((void*)0);
 VAR_22->Bitdepth16To8 = ((void*)0);
 VAR_22->req_orientation = VAR_4;

 VAR_22->tif = VAR_23;
 VAR_22->stoponerr = VAR_24;
 FUNC_3(VAR_23, VAR_8, &VAR_22->bitspersample);
 switch (VAR_22->bitspersample) {
  case 1:
  case 2:
  case 4:
  case 8:
  case 16:
   break;
  default:
   FUNC_10(VAR_25, "Sorry, can not handle images with %d-bit samples",
       VAR_22->bitspersample);
   goto fail_return;
 }
 VAR_22->alpha = 0;
 FUNC_3(VAR_23, VAR_19, &VAR_22->samplesperpixel);
 FUNC_3(VAR_23, VAR_11,
     &VAR_27, &VAR_26);
 if (VAR_27 >= 1)
 {
  switch (VAR_26[0]) {
   case 137:
    if (VAR_22->samplesperpixel > 3)
     VAR_22->alpha = 139;
    break;
   case 139:
   case 138:
    VAR_22->alpha = VAR_26[0];
    break;
  }
 }
 VAR_30 = VAR_22->samplesperpixel - VAR_27;
 FUNC_3(VAR_23, VAR_10, &VAR_29);
 FUNC_3(VAR_23, VAR_18, &VAR_28);
 if (!FUNC_2(VAR_23, VAR_17, &VAR_22->photometric)) {
  switch (VAR_30) {
   case 1:
    if (FUNC_9(VAR_23))
     VAR_22->photometric = 132;
    else
     VAR_22->photometric = 133;
    break;
   case 3:
    VAR_22->photometric = 130;
    break;
   default:
    FUNC_10(VAR_25, "Missing needed %s tag", VAR_21);
                                goto fail_return;
  }
 }
 switch (VAR_22->photometric) {
  case 131:
   if (!FUNC_2(VAR_23, VAR_9,
       &VAR_31, &VAR_32, &VAR_33)) {
    FUNC_10(VAR_25, "Missing required \"Colormap\" tag");
                                goto fail_return;
   }


   VAR_34 = (1U << VAR_22->bitspersample);
   VAR_22->redcmap = (uint16 *) FUNC_7(sizeof(uint16)*VAR_34);
   VAR_22->greencmap = (uint16 *) FUNC_7(sizeof(uint16)*VAR_34);
   VAR_22->bluecmap = (uint16 *) FUNC_7(sizeof(uint16)*VAR_34);
   if( !VAR_22->redcmap || !VAR_22->greencmap || !VAR_22->bluecmap ) {
    FUNC_10(VAR_25, "Out of memory for colormap copy");
                                goto fail_return;
   }

   FUNC_8( VAR_22->redcmap, VAR_31, VAR_34 * 2 );
   FUNC_8( VAR_22->greencmap, VAR_32, VAR_34 * 2 );
   FUNC_8( VAR_22->bluecmap, VAR_33, VAR_34 * 2 );


  case 132:
  case 133:
   if (VAR_28 == VAR_5
       && VAR_22->samplesperpixel != 1
       && VAR_22->bitspersample < 8 ) {
    FUNC_10(VAR_25,
        "Sorry, can not handle contiguous data with %s=%d, "
        "and %s=%d and Bits/Sample=%d",
        VAR_21, VAR_22->photometric,
        "Samples/pixel", VAR_22->samplesperpixel,
        VAR_22->bitspersample);
                                goto fail_return;
   }
   break;
  case 128:

   if (VAR_28 == VAR_5)


    switch (VAR_29) {
     case 140:





      FUNC_6(VAR_23, VAR_15, VAR_3);
      VAR_22->photometric = 130;
      break;
     default:
                      ;
      break;
    }






   break;
  case 130:
   if (VAR_30 < 3) {
    FUNC_10(VAR_25, "Sorry, can not handle RGB image with %s=%d",
        "Color channels", VAR_30);
                                goto fail_return;
   }
   break;
  case 129:
   {
    uint16 VAR_35;
    FUNC_3(VAR_23, VAR_14, &VAR_35);
    if (VAR_35 != VAR_2) {
     FUNC_10(VAR_25, "Sorry, can not handle separated image with %s=%d",
         "InkSet", VAR_35);
                                        goto fail_return;
    }
    if (VAR_22->samplesperpixel < 4) {
     FUNC_10(VAR_25, "Sorry, can not handle separated image with %s=%d",
         "Samples/pixel", VAR_22->samplesperpixel);
                                        goto fail_return;
    }
   }
   break;
  case 135:
   if (VAR_29 != VAR_0) {
    FUNC_10(VAR_25, "Sorry, LogL data must have %s=%d",
        "Compression", VAR_0);
                                goto fail_return;
   }
   FUNC_6(VAR_23, VAR_20, VAR_7);
   VAR_22->photometric = 133;
   VAR_22->bitspersample = 8;
   break;
  case 134:
   if (VAR_29 != VAR_0 && VAR_29 != VAR_1) {
    FUNC_10(VAR_25, "Sorry, LogLuv data must have %s=%d or %d",
        "Compression", VAR_0, VAR_1);
                                goto fail_return;
   }
   if (VAR_28 != VAR_5) {
    FUNC_10(VAR_25, "Sorry, can not handle LogLuv images with %s=%d",
        "Planarconfiguration", VAR_28);
    return (0);
   }
   FUNC_6(VAR_23, VAR_20, VAR_7);
   VAR_22->photometric = 130;
   VAR_22->bitspersample = 8;
   break;
  case 136:
   break;
  default:
   FUNC_10(VAR_25, "Sorry, can not handle image with %s=%d",
       VAR_21, VAR_22->photometric);
                        goto fail_return;
 }
 FUNC_2(VAR_23, VAR_13, &VAR_22->width);
 FUNC_2(VAR_23, VAR_12, &VAR_22->height);
 FUNC_3(VAR_23, VAR_16, &VAR_22->orientation);
 VAR_22->isContig =
     !(VAR_28 == VAR_6 && VAR_22->samplesperpixel > 1);
 if (VAR_22->isContig) {
  if (!FUNC_0(VAR_22)) {
   FUNC_10(VAR_25, "Sorry, can not handle image");
   goto fail_return;
  }
 } else {
  if (!FUNC_1(VAR_22)) {
   FUNC_10(VAR_25, "Sorry, can not handle image");
   goto fail_return;
  }
 }
 return 1;

  fail_return:
        FUNC_4( VAR_22 );
        return 0;
}
