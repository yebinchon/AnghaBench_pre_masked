
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdsp {int control_register; int io_type; int system_sample_rate; scalar_t__ capture_pid; scalar_t__ playback_pid; int firmware_rev; int channel_map; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;



 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct hdsp*) ;
 int FUNC_4 (struct hdsp*) ;
 int FUNC_5 (struct hdsp*,int) ;
 int FUNC_6 (struct hdsp*) ;
 int FUNC_7 (struct hdsp*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct hdsp *VAR_21, int VAR_22, int VAR_23)
{
 int VAR_24 = 0;
 int VAR_25;
 int VAR_26;






 if (!(VAR_21->control_register & VAR_3)) {
  if (VAR_23) {

   FUNC_0(VAR_21->card->dev,
    "device is not running as a clock master: cannot set sample rate.\n");
   return -1;
  } else {

   int VAR_27 = FUNC_4(VAR_21);
   int VAR_28 = FUNC_6(VAR_21);

   if ((VAR_28 == VAR_27*2) && (FUNC_3(VAR_21) >= VAR_2))
    FUNC_1(VAR_21->card->dev,
      "Detected ADAT in double speed mode\n");
   else if (VAR_21->io_type == 131 && (VAR_28 == VAR_27*4) && (FUNC_3(VAR_21) >= VAR_2))
    FUNC_1(VAR_21->card->dev,
      "Detected ADAT in quad speed mode\n");
   else if (VAR_22 != VAR_27) {
    FUNC_1(VAR_21->card->dev,
      "No AutoSync source for requested rate\n");
    return -1;
   }
  }
 }

 VAR_25 = VAR_21->system_sample_rate;
 if (VAR_22 > 96000 && VAR_21->io_type != 131)
  return -VAR_1;

 switch (VAR_22) {
 case 32000:
  if (VAR_25 > 48000)
   VAR_24 = 1;
  VAR_26 = VAR_7;
  break;
 case 44100:
  if (VAR_25 > 48000)
   VAR_24 = 1;
  VAR_26 = VAR_8;
  break;
 case 48000:
  if (VAR_25 > 48000)
   VAR_24 = 1;
  VAR_26 = VAR_9;
  break;
 case 64000:
  if (VAR_25 <= 48000 || VAR_25 > 96000)
   VAR_24 = 1;
  VAR_26 = VAR_10;
  break;
 case 88200:
  if (VAR_25 <= 48000 || VAR_25 > 96000)
   VAR_24 = 1;
  VAR_26 = VAR_11;
  break;
 case 96000:
  if (VAR_25 <= 48000 || VAR_25 > 96000)
   VAR_24 = 1;
  VAR_26 = VAR_12;
  break;
 case 128000:
  if (VAR_25 < 128000)
   VAR_24 = 1;
  VAR_26 = VAR_4;
  break;
 case 176400:
  if (VAR_25 < 128000)
   VAR_24 = 1;
  VAR_26 = VAR_5;
  break;
 case 192000:
  if (VAR_25 < 128000)
   VAR_24 = 1;
  VAR_26 = VAR_6;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_24 && (VAR_21->capture_pid >= 0 || VAR_21->playback_pid >= 0)) {
  FUNC_2(VAR_21->card->dev,
    "cannot change speed mode (capture PID = %d, playback PID = %d)\n",
       VAR_21->capture_pid,
       VAR_21->playback_pid);
  return -VAR_0;
 }

 VAR_21->control_register &= ~VAR_13;
 VAR_21->control_register |= VAR_26;
 FUNC_7(VAR_21, VAR_14, VAR_21->control_register);


 if (VAR_21->io_type == 131 && VAR_21->firmware_rev >= 152)
  FUNC_5(VAR_21, VAR_22);

 if (VAR_22 >= 128000) {
  VAR_21->channel_map = VAR_16;
 } else if (VAR_22 > 48000) {
  if (VAR_21->io_type == 131)
   VAR_21->channel_map = VAR_15;
  else
   VAR_21->channel_map = VAR_19;
 } else {
  switch (VAR_21->io_type) {
  case 128:
  case 129:
   VAR_21->channel_map = VAR_20;
   break;
  case 132:
  case 130:
   VAR_21->channel_map = VAR_18;
   break;
  case 131:
   VAR_21->channel_map = VAR_17;
   break;
  default:

   break;
  }
 }

 VAR_21->system_sample_rate = VAR_22;

 return 0;
}
