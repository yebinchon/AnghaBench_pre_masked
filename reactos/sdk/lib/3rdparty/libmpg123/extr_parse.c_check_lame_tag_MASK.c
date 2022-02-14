
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {scalar_t__* level; float* gain; scalar_t__* peak; } ;
struct TYPE_8__ {int filelen; } ;
struct TYPE_11__ {int stereo; int framesize; char* bsbuf; scalar_t__ vbr; scalar_t__ audio_start; int abr_rate; int** bsspace; size_t bsnum; scalar_t__ track_frames; TYPE_3__ p; TYPE_2__ rva; TYPE_1__ rdat; scalar_t__ lsf; } ;
typedef TYPE_4__ mpg123_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned long FUNC_0 (char*,int*) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned long) ;
 int FUNC_5 (char*,unsigned int,unsigned int,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 int FUNC_8 (TYPE_4__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char*,unsigned int*,unsigned int*,char*) ;
 int VAR_10 ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int FUNC_12(mpg123_handle *VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;






 int VAR_15 = (VAR_11->stereo == 2)
 ? (VAR_11->lsf ? 17 : 32)
 : (VAR_11->lsf ? 9 : 17);

 if(VAR_11->p.flags & VAR_3) goto check_lame_tag_no;

 FUNC_3("do we have lame tag?");







 if(VAR_11->framesize < VAR_15+8) goto check_lame_tag_no;


 for(VAR_12=2; VAR_12 < VAR_15; ++VAR_12) if(VAR_11->bsbuf[VAR_12] != 0) goto check_lame_tag_no;

 FUNC_3("possibly...");
 if
 (
     (VAR_11->bsbuf[VAR_15] == 'I')
  && (VAR_11->bsbuf[VAR_15+1] == 'n')
  && (VAR_11->bsbuf[VAR_15+2] == 'f')
  && (VAR_11->bsbuf[VAR_15+3] == 'o')
 )
 {

 }
 else if
 (
     (VAR_11->bsbuf[VAR_15] == 'X')
  && (VAR_11->bsbuf[VAR_15+1] == 'i')
  && (VAR_11->bsbuf[VAR_15+2] == 'n')
  && (VAR_11->bsbuf[VAR_15+3] == 'g')
 )
 {
  VAR_11->vbr = VAR_5;
 }
 else goto check_lame_tag_no;


 if(VAR_8) FUNC_6(VAR_10, "Note: Xing/Lame/Info header detected\n");
 VAR_15 += 4;
 VAR_13 = FUNC_0(VAR_11->bsbuf, &VAR_15);
 FUNC_4("Xing: flags 0x%08lx", VAR_13);





 if(VAR_13 & 1)
 {
  if(VAR_11->framesize < VAR_15+4) goto check_lame_tag_yes; VAR_14 = FUNC_0(VAR_11->bsbuf, &VAR_15);
  if(VAR_11->p.flags & VAR_4)
  {
   if(VAR_9) FUNC_6(VAR_10
   , "Note: Ignoring Xing frames because of MPG123_IGNORE_STREAMLENGTH\n");
  }
  else
  {

   VAR_11->track_frames = VAR_14 > VAR_7 ? 0 : (off_t) VAR_14;






   if(VAR_9) FUNC_6(VAR_10, "Note: Xing: %lu frames\n", VAR_14);
  }
 }
 if(VAR_13 & 0x2)
 {
  if(VAR_11->framesize < VAR_15+4) goto check_lame_tag_yes; VAR_14 = FUNC_0(VAR_11->bsbuf, &VAR_15);
  if(VAR_11->p.flags & VAR_4)
  {
   if(VAR_9) FUNC_6(VAR_10
   , "Note: Ignoring Xing bytes because of MPG123_IGNORE_STREAMLENGTH\n");
  }
  else
  {




   if(VAR_11->rdat.filelen < 1)
   VAR_11->rdat.filelen = (off_t) VAR_14 + VAR_11->audio_start;
   else
   {
    if((off_t)VAR_14 != VAR_11->rdat.filelen - VAR_11->audio_start && VAR_6)
    {
     double VAR_16 = 100.0/VAR_11->rdat.filelen
                 * ( VAR_11->rdat.filelen - VAR_11->audio_start
                     - (off_t)VAR_14 );
     if(VAR_16 < 0.) VAR_16 = -VAR_16;

     if(VAR_9) FUNC_6(VAR_10
     , "Note: Xing stream size %lu differs by %f%% from determined/given file size!\n"
     , VAR_14, VAR_16);

     if(VAR_16 > 1. && VAR_6) FUNC_6(VAR_10
     , "Warning: Xing stream size off by more than 1%%, fuzzy seeking may be even more fuzzy than by design!\n");
    }
   }

   if(VAR_9) FUNC_6(VAR_10, "Note: Xing: %lu bytes\n", VAR_14);
  }
 }
 if(VAR_13 & 0x4)
 {
  if(VAR_11->framesize < VAR_15+100) goto check_lame_tag_yes;
  FUNC_7(VAR_11, VAR_11->bsbuf+VAR_15);
  VAR_15 += 100;
 }
 if(VAR_13 & 0x8)
 {
  if(VAR_11->framesize < VAR_15+4) goto check_lame_tag_yes; VAR_14 = FUNC_0(VAR_11->bsbuf, &VAR_15);
  if(VAR_9) FUNC_6(VAR_10, "Note: Xing: quality = %lu\n", VAR_14);
 }
 if(VAR_11->framesize < VAR_15+24) goto check_lame_tag_yes;
 if(VAR_11->bsbuf[VAR_15] != 0)
 {
  unsigned char VAR_17;
  float VAR_18[2] = {0,0};
  float VAR_19 = 0;
  float VAR_20 = 0;
  char VAR_21[10];
  off_t VAR_22;
  off_t VAR_23;
  FUNC_9(VAR_21, VAR_11->bsbuf+VAR_15, 9);
  VAR_21[9] = 0;
  if(VAR_9) FUNC_6(VAR_10, "Note: Info: Encoder: %s\n", VAR_21);
  if(!FUNC_11("LAME", VAR_21, 4))
  {



   unsigned int VAR_24, VAR_25;
   char VAR_26[6];
   VAR_26[0] = 0;
   if(FUNC_10(VAR_21+4, "%u.%u%s", &VAR_24, &VAR_25, VAR_26) >= 2)
   {
    FUNC_5("LAME: %u/%u/%s", VAR_24, VAR_25, VAR_26);



    if(VAR_24 < 3 || (VAR_24 == 3 && VAR_25 < 95))
    {
     VAR_20 = 6;
     if(VAR_9) FUNC_6(VAR_10
     , "Note: Info: Old LAME detected, using ReplayGain preamp of %f dB.\n"
     , VAR_20);
    }
   }
   else if(VAR_9) FUNC_6(VAR_10
   , "Note: Info: Cannot determine LAME version.\n");
  }
  VAR_15 += 9;


  VAR_17 = VAR_11->bsbuf[VAR_15] & 15;
  VAR_15 += 1;
  if(VAR_9)
  {
   FUNC_6(VAR_10, "Note: Info: rev %u\n", VAR_11->bsbuf[VAR_15] >> 4);
   FUNC_6(VAR_10, "Note: Info: vbr mode %u\n", VAR_17);
  }
  switch(VAR_17)
  {

   case 1:
   case 8: VAR_11->vbr = VAR_1; break;
   case 2:
   case 9: VAR_11->vbr = VAR_0; break;
   default: VAR_11->vbr = VAR_5;
  }
  VAR_15 += 1;




  if
  (
      (VAR_11->bsbuf[VAR_15] != 0)
   || (VAR_11->bsbuf[VAR_15+1] != 0)
   || (VAR_11->bsbuf[VAR_15+2] != 0)
   || (VAR_11->bsbuf[VAR_15+3] != 0)
  )
  {
   FUNC_3("Wow! Is there _really_ a non-zero peak value? Now is it stored as float or int - how should I know?");




  }
  if(VAR_9) FUNC_6(VAR_10
  , "Note: Info: peak = %f (I won't use this)\n", VAR_19);
  VAR_19 = 0;
  VAR_15 += 4;







  for(VAR_12 =0; VAR_12 < 2; ++VAR_12)
  {
   unsigned char VAR_27 = VAR_11->bsbuf[VAR_15] >> 5;
   unsigned char VAR_28 = (VAR_11->bsbuf[VAR_15] >> 2) & 0x7;
   float VAR_29 = (VAR_11->bsbuf[VAR_15] & 0x2) ? -0.1f : 0.1f;
   unsigned short VAR_30 = FUNC_1(VAR_11->bsbuf, &VAR_15) & 0x1ff;
   if(VAR_28 == 0 || VAR_27 < 1 || VAR_27 > 2) continue;

   --VAR_27;
   VAR_18[VAR_27] = VAR_29 * (float) VAR_30;

   if(VAR_28 == 3) VAR_18[VAR_27] += VAR_20;
  }
  if(VAR_9)
  {
   FUNC_6(VAR_10, "Note: Info: Radio Gain = %03.1fdB\n"
   , VAR_18[0]);
   FUNC_6(VAR_10, "Note: Info: Audiophile Gain = %03.1fdB\n"
   , VAR_18[1]);
  }
  for(VAR_12=0; VAR_12 < 2; ++VAR_12)
  {
   if(VAR_11->rva.level[VAR_12] <= 0)
   {
    VAR_11->rva.peak[VAR_12] = 0;
    VAR_11->rva.gain[VAR_12] = VAR_18[VAR_12];
    VAR_11->rva.level[VAR_12] = 0;
   }
  }

  VAR_15 += 1;


  if(VAR_11->vbr == VAR_0)
  {
   VAR_11->abr_rate = VAR_11->bsbuf[VAR_15];
   if(VAR_9) FUNC_6(VAR_10, "Note: Info: ABR rate = %u\n"
   , VAR_11->abr_rate);
  }
  VAR_15 += 1;



  VAR_22 = ( (((int) VAR_11->bsbuf[VAR_15]) << 4)
            | (((int) VAR_11->bsbuf[VAR_15+1]) >> 4) );
  VAR_23 = ( (((int) VAR_11->bsbuf[VAR_15+1]) << 8)
            | ((int) VAR_11->bsbuf[VAR_15+2]) ) & 0xfff;
  VAR_15 += 3;
  if(VAR_9) FUNC_6(VAR_10, "Note: Encoder delay = %i; padding = %i\n"
  , (int)VAR_22, (int)VAR_23);





 }

check_lame_tag_yes:

 VAR_11->bsbuf = VAR_11->bsspace[VAR_11->bsnum]+512;
 VAR_11->bsnum = (VAR_11->bsnum + 1) & 1;
 return 1;
check_lame_tag_no:
 return 0;
}
