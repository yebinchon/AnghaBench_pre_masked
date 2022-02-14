
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lay; int lsf; int mpeg25; size_t sampling_frequency; int error_protection; size_t bitrate_index; long padding; scalar_t__ mode; int freeformat; int stereo; scalar_t__ freeformat_framesize; long framesize; int spf; int ssize; int do_layer; int emphasis; int original; int copyright; int mode_ext; int extension; } ;
typedef TYPE_1__ mpg123_handle ;


 unsigned long VAR_0 ;
 size_t FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 long FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 void* FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,size_t,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,unsigned long) ;
 int FUNC_16 (int ,char*,long) ;
 int* VAR_12 ;
 int FUNC_17 (TYPE_1__*,unsigned long) ;
 int FUNC_18 (unsigned long) ;
 int VAR_13 ;
 scalar_t__*** VAR_14 ;

__attribute__((used)) static int FUNC_19(mpg123_handle *VAR_15,unsigned long VAR_16, int *VAR_17)
{
 VAR_15->lay = 4 - FUNC_6(VAR_16);

 if(FUNC_11(VAR_16) & 0x2)
 {
  VAR_15->lsf = (FUNC_11(VAR_16) & 0x1) ? 0 : 1;
  VAR_15->mpeg25 = 0;
  VAR_15->sampling_frequency = FUNC_10(VAR_16) + (VAR_15->lsf*3);
 }
 else
 {
  VAR_15->lsf = 1;
  VAR_15->mpeg25 = 1;
  VAR_15->sampling_frequency = 6 + FUNC_10(VAR_16);
 }





 VAR_15->error_protection = FUNC_4(VAR_16)^0x1;
 VAR_15->bitrate_index = FUNC_0(VAR_16);
 VAR_15->padding = FUNC_8(VAR_16);
 VAR_15->extension = FUNC_9(VAR_16);
 VAR_15->mode = FUNC_2(VAR_16);
 VAR_15->mode_ext = FUNC_1(VAR_16);
 VAR_15->copyright = FUNC_3(VAR_16);
 VAR_15->original = FUNC_7(VAR_16);
 VAR_15->emphasis = FUNC_5(VAR_16);
 VAR_15->freeformat = !(VAR_16 & VAR_0);

 VAR_15->stereo = (VAR_15->mode == VAR_3) ? 1 : 2;


 if(VAR_15->freeformat)
 {

  if(VAR_15->freeformat_framesize < 0)
  {
   int VAR_18;
   *VAR_17 += 1;
   if(*VAR_17 > 5)
   {
    if(VAR_8) FUNC_14("You fooled me too often. Refusing to guess free format frame size _again_.");
    return VAR_5;
   }
   VAR_18 = FUNC_17(VAR_15, VAR_16);
   if(VAR_18 == VAR_6)
   {
    VAR_15->freeformat_framesize = VAR_15->framesize - VAR_15->padding;
    if(VAR_7)
    FUNC_16(VAR_13, "Note: free format frame size %li\n", VAR_15->freeformat_framesize);
   }
   else
   {
    if(VAR_18 == VAR_2)
    FUNC_12("Need more data to guess free format frame size.");
    else if(VAR_8)
    FUNC_14("Encountered free format header, but failed to guess frame size.");

    return VAR_18;
   }
  }

  else
  {
   VAR_15->framesize = VAR_15->freeformat_framesize + VAR_15->padding;
  }
 }

 switch(VAR_15->lay)
 {

  case 1:
   VAR_15->spf = 384;
   VAR_15->do_layer = VAR_9;
   if(!VAR_15->freeformat)
   {
    VAR_15->framesize = (long) VAR_14[VAR_15->lsf][0][VAR_15->bitrate_index] * 12000;
    VAR_15->framesize /= VAR_12[VAR_15->sampling_frequency];
    VAR_15->framesize = ((VAR_15->framesize+VAR_15->padding)<<2)-4;
   }
  break;


  case 2:
   VAR_15->spf = 1152;
   VAR_15->do_layer = VAR_10;
   if(!VAR_15->freeformat)
   {
    FUNC_13("bitrate index: %i (%i)", VAR_15->bitrate_index, VAR_14[VAR_15->lsf][1][VAR_15->bitrate_index] );
    VAR_15->framesize = (long) VAR_14[VAR_15->lsf][1][VAR_15->bitrate_index] * 144000;
    VAR_15->framesize /= VAR_12[VAR_15->sampling_frequency];
    VAR_15->framesize += VAR_15->padding - 4;
   }
  break;


  case 3:
   VAR_15->spf = VAR_15->lsf ? 576 : 1152;
   VAR_15->do_layer = VAR_11;
   if(VAR_15->lsf)
   VAR_15->ssize = (VAR_15->stereo == 1) ? 9 : 17;
   else
   VAR_15->ssize = (VAR_15->stereo == 1) ? 17 : 32;

   if(VAR_15->error_protection)
   VAR_15->ssize += 2;

   if(!VAR_15->freeformat)
   {
    VAR_15->framesize = (long) VAR_14[VAR_15->lsf][2][VAR_15->bitrate_index] * 144000;
    VAR_15->framesize /= VAR_12[VAR_15->sampling_frequency]<<(VAR_15->lsf);
    VAR_15->framesize = VAR_15->framesize + VAR_15->padding - 4;
   }
  break;

  default:
   if(VAR_4) FUNC_15("Layer type %i not supported in this build!", VAR_15->lay);

   return VAR_5;
 }
 if (VAR_15->framesize > VAR_1)
 {
  if(VAR_4) FUNC_15("Frame size too big: %d", VAR_15->framesize+4-VAR_15->padding);

  return VAR_5;
 }
 return VAR_6;
}
