
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_6__ {int td_bitspersample; scalar_t__ td_sampleformat; int td_samplesperpixel; int td_extrasamples; int td_planarconfig; int td_compression; } ;
struct TYPE_7__ {int tif_decodestatus; TYPE_1__ tif_dir; } ;
typedef TYPE_1__ TIFFDirectory ;
typedef TYPE_2__ TIFF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int*) ;
 int FUNC_1 (TYPE_2__*,int ,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (char*,char*,...) ;

int
FUNC_3(TIFF* VAR_8, char VAR_9[1024])
{
 TIFFDirectory* VAR_10 = &VAR_8->tif_dir;
 uint16 VAR_11;
 int VAR_12;

 if (!VAR_8->tif_decodestatus) {
  FUNC_2(VAR_9, "Sorry, requested compression method is not configured");
  return (0);
 }
 switch (VAR_10->td_bitspersample) {
  case 1:
  case 2:
  case 4:
  case 8:
  case 16:
   break;
  default:
   FUNC_2(VAR_9, "Sorry, can not handle images with %d-bit samples",
       VAR_10->td_bitspersample);
   return (0);
 }
        if (VAR_10->td_sampleformat == VAR_4) {
                FUNC_2(VAR_9, "Sorry, can not handle images with IEEE floating-point samples");
                return (0);
        }
 VAR_12 = VAR_10->td_samplesperpixel - VAR_10->td_extrasamples;
 if (!FUNC_0(VAR_8, VAR_6, &VAR_11)) {
  switch (VAR_12) {
   case 1:
    VAR_11 = 133;
    break;
   case 3:
    VAR_11 = 130;
    break;
   default:
    FUNC_2(VAR_9, "Missing needed %s tag", VAR_7);
    return (0);
  }
 }
 switch (VAR_11) {
  case 132:
  case 133:
  case 131:
   if (VAR_10->td_planarconfig == VAR_3
       && VAR_10->td_samplesperpixel != 1
       && VAR_10->td_bitspersample < 8 ) {
    FUNC_2(VAR_9,
        "Sorry, can not handle contiguous data with %s=%d, "
        "and %s=%d and Bits/Sample=%d",
        VAR_7, VAR_11,
        "Samples/pixel", VAR_10->td_samplesperpixel,
        VAR_10->td_bitspersample);
    return (0);
   }





   break;
  case 128:






   break;
  case 130:
   if (VAR_12 < 3) {
    FUNC_2(VAR_9, "Sorry, can not handle RGB image with %s=%d",
        "Color channels", VAR_12);
    return (0);
   }
   break;
  case 129:
   {
    uint16 VAR_13;
    FUNC_1(VAR_8, VAR_5, &VAR_13);
    if (VAR_13 != VAR_2) {
     FUNC_2(VAR_9,
         "Sorry, can not handle separated image with %s=%d",
         "InkSet", VAR_13);
     return 0;
    }
    if (VAR_10->td_samplesperpixel < 4) {
     FUNC_2(VAR_9,
         "Sorry, can not handle separated image with %s=%d",
         "Samples/pixel", VAR_10->td_samplesperpixel);
     return 0;
    }
    break;
   }
  case 135:
   if (VAR_10->td_compression != VAR_0) {
    FUNC_2(VAR_9, "Sorry, LogL data must have %s=%d",
        "Compression", VAR_0);
    return (0);
   }
   break;
  case 134:
   if (VAR_10->td_compression != VAR_0 &&
       VAR_10->td_compression != VAR_1) {
    FUNC_2(VAR_9, "Sorry, LogLuv data must have %s=%d or %d",
        "Compression", VAR_0, VAR_1);
    return (0);
   }
   if (VAR_10->td_planarconfig != VAR_3) {
    FUNC_2(VAR_9, "Sorry, can not handle LogLuv images with %s=%d",
        "Planarconfiguration", VAR_10->td_planarconfig);
    return (0);
   }
   if ( VAR_10->td_samplesperpixel != 3 || VAR_12 != 3 ) {
                                FUNC_2(VAR_9,
                                        "Sorry, can not handle image with %s=%d, %s=%d",
                                        "Samples/pixel", VAR_10->td_samplesperpixel,
                                        "colorchannels", VAR_12);
                                return 0;
                        }
   break;
  case 136:
                        if ( VAR_10->td_samplesperpixel != 3 || VAR_12 != 3 || VAR_10->td_bitspersample != 8 ) {
                                FUNC_2(VAR_9,
                                        "Sorry, can not handle image with %s=%d, %s=%d and %s=%d",
                                        "Samples/pixel", VAR_10->td_samplesperpixel,
                                        "colorchannels", VAR_12,
                                        "Bits/sample", VAR_10->td_bitspersample);
                                return 0;
                        }
   break;
                default:
   FUNC_2(VAR_9, "Sorry, can not handle image with %s=%d",
       VAR_7, VAR_11);
   return (0);
 }
 return (1);
}
