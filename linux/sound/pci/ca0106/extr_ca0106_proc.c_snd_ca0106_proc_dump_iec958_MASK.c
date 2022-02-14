
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_3__ {int val; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 int VAR_13 ;



 int VAR_14 ;




 int VAR_15 ;



 int VAR_16 ;



 TYPE_1__* VAR_17 ;
 int FUNC_1 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_2( struct snd_info_buffer *VAR_18, u32 VAR_19)
{
 int VAR_20;
 u32 VAR_21[4];
 VAR_21[0] = VAR_19 & 0xff;
 VAR_21[1] = (VAR_19 >> 8) & 0xff;
 VAR_21[2] = (VAR_19 >> 16) & 0xff;
 VAR_21[3] = (VAR_19 >> 24) & 0xff;

 if (! (VAR_21[0] & VAR_4)) {

  FUNC_1(VAR_18, "Mode: consumer\n");
  FUNC_1(VAR_18, "Data: ");
  if (!(VAR_21[0] & VAR_3)) {
   FUNC_1(VAR_18, "audio\n");
  } else {
   FUNC_1(VAR_18, "non-audio\n");
  }
  FUNC_1(VAR_18, "Rate: ");
  switch (VAR_21[3] & VAR_16) {
  case 129:
   FUNC_1(VAR_18, "44100 Hz\n");
   break;
  case 128:
   FUNC_1(VAR_18, "48000 Hz\n");
   break;
  case 130:
   FUNC_1(VAR_18, "32000 Hz\n");
   break;
  default:
   FUNC_1(VAR_18, "unknown\n");
   break;
  }
  FUNC_1(VAR_18, "Copyright: ");
  if (VAR_21[0] & VAR_2) {
   FUNC_1(VAR_18, "permitted\n");
  } else {
   FUNC_1(VAR_18, "protected\n");
  }
  FUNC_1(VAR_18, "Emphasis: ");
  if ((VAR_21[0] & VAR_0) != VAR_1) {
   FUNC_1(VAR_18, "none\n");
  } else {
   FUNC_1(VAR_18, "50/15us\n");
  }
  FUNC_1(VAR_18, "Category: ");
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_17); VAR_20++) {
   if ((VAR_21[1] & VAR_8) == VAR_17[VAR_20].val) {
    FUNC_1(VAR_18, "%s\n", VAR_17[VAR_20].name);
    break;
   }
  }
  if (VAR_20 >= FUNC_0(VAR_17)) {
   FUNC_1(VAR_18, "unknown 0x%x\n", VAR_21[1] & VAR_8);
  }
  FUNC_1(VAR_18, "Original: ");
  if (VAR_21[1] & VAR_9) {
   FUNC_1(VAR_18, "original\n");
  } else {
   FUNC_1(VAR_18, "1st generation\n");
  }
  FUNC_1(VAR_18, "Clock: ");
  switch (VAR_21[3] & VAR_15) {
  case 133:
   FUNC_1(VAR_18, "1000 ppm\n");
   break;
  case 132:
   FUNC_1(VAR_18, "50 ppm\n");
   break;
  case 131:
   FUNC_1(VAR_18, "variable pitch\n");
   break;
  default:
   FUNC_1(VAR_18, "unknown\n");
   break;
  }
 } else {
  FUNC_1(VAR_18, "Mode: professional\n");
  FUNC_1(VAR_18, "Data: ");
  if (!(VAR_21[0] & VAR_3)) {
   FUNC_1(VAR_18, "audio\n");
  } else {
   FUNC_1(VAR_18, "non-audio\n");
  }
  FUNC_1(VAR_18, "Rate: ");
  switch (VAR_21[0] & VAR_7) {
  case 144:
   FUNC_1(VAR_18, "44100 Hz\n");
   break;
  case 143:
   FUNC_1(VAR_18, "48000 Hz\n");
   break;
  case 145:
   FUNC_1(VAR_18, "32000 Hz\n");
   break;
  default:
   FUNC_1(VAR_18, "unknown\n");
   break;
  }
  FUNC_1(VAR_18, "Rate Locked: ");
  if (VAR_21[0] & VAR_6)
   FUNC_1(VAR_18, "no\n");
  else
   FUNC_1(VAR_18, "yes\n");
  FUNC_1(VAR_18, "Emphasis: ");
  switch (VAR_21[0] & VAR_5) {
  case 148:
   FUNC_1(VAR_18, "CCITT J.17\n");
   break;
  case 147:
   FUNC_1(VAR_18, "none\n");
   break;
  case 149:
   FUNC_1(VAR_18, "50/15us\n");
   break;
  case 146:
  default:
   FUNC_1(VAR_18, "unknown\n");
   break;
  }
  FUNC_1(VAR_18, "Stereophonic: ");
  if ((VAR_21[1] & VAR_10) == VAR_11) {
   FUNC_1(VAR_18, "stereo\n");
  } else {
   FUNC_1(VAR_18, "not indicated\n");
  }
  FUNC_1(VAR_18, "Userbits: ");
  switch (VAR_21[1] & VAR_12) {
  case 142:
   FUNC_1(VAR_18, "192bit\n");
   break;
  case 141:
   FUNC_1(VAR_18, "user-defined\n");
   break;
  default:
   FUNC_1(VAR_18, "unknown\n");
   break;
  }
  FUNC_1(VAR_18, "Sample Bits: ");
  switch (VAR_21[2] & VAR_13) {
  case 140:
   FUNC_1(VAR_18, "20 bit\n");
   break;
  case 139:
   FUNC_1(VAR_18, "24 bit\n");
   break;
  case 138:
   FUNC_1(VAR_18, "user defined\n");
   break;
  default:
   FUNC_1(VAR_18, "unknown\n");
   break;
  }
  FUNC_1(VAR_18, "Word Length: ");
  switch (VAR_21[2] & VAR_14) {
  case 136:
   FUNC_1(VAR_18, "22 bit or 18 bit\n");
   break;
  case 135:
   FUNC_1(VAR_18, "23 bit or 19 bit\n");
   break;
  case 134:
   FUNC_1(VAR_18, "24 bit or 20 bit\n");
   break;
  case 137:
   FUNC_1(VAR_18, "20 bit or 16 bit\n");
   break;
  default:
   FUNC_1(VAR_18, "unknown\n");
   break;
  }
 }
}
