
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {scalar_t__ input_clock; int sample_rate; scalar_t__ digital_mode; scalar_t__ device_id; short asic_code; TYPE_2__* card; TYPE_1__* comm_page; int lock; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {void* sample_rate; int control_register; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 short VAR_8 ;
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
 int VAR_21 ;
 int VAR_22 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct echoaudio*,int ,short) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct echoaudio*,int,char) ;

__attribute__((used)) static int FUNC_8(struct echoaudio *VAR_23, u32 VAR_24)
{
 u32 VAR_25, VAR_26;
 short VAR_27;
 char VAR_28;


 if (VAR_23->input_clock != VAR_3) {
  FUNC_1(VAR_23->card->dev,
   "Cannot set sample rate - clock not set to CLK_CLOCKININTERNAL\n");

  VAR_23->comm_page->sample_rate = FUNC_0(VAR_24);
  VAR_23->sample_rate = VAR_24;
  return 0;
 }


 if (VAR_24 >= 88200) {
  if (VAR_23->digital_mode == VAR_1)
   return -VAR_4;
  if (VAR_23->device_id == VAR_0)
   VAR_27 = VAR_8;
  else
   VAR_27 = VAR_6;
 } else {
  if (VAR_23->device_id == VAR_0)
   VAR_27 = VAR_7;
  else
   VAR_27 = VAR_5;
 }

 VAR_28 = 0;
 if (VAR_27 != VAR_23->asic_code) {
  int VAR_29;

  FUNC_6(&VAR_23->lock);
  VAR_29 = FUNC_4(VAR_23, VAR_2,
     VAR_27);
  FUNC_5(&VAR_23->lock);

  if (VAR_29 < 0)
   return VAR_29;
  VAR_23->asic_code = VAR_27;
  VAR_28 = 1;
 }


 VAR_26 = 0;
 VAR_25 = FUNC_3(VAR_23->comm_page->control_register);
 VAR_25 &= VAR_18;
 VAR_25 &= VAR_20;

 switch (VAR_24) {
 case 96000:
  VAR_26 = VAR_17;
  break;
 case 88200:
  VAR_26 = VAR_15;
  break;
 case 48000:
  VAR_26 = VAR_14 | VAR_22;
  break;
 case 44100:
  VAR_26 = VAR_13;

  if (VAR_25 & VAR_19)
   VAR_26 |= VAR_21;
  break;
 case 32000:
  VAR_26 = VAR_12 | VAR_21 |
   VAR_22;
  break;
 case 22050:
  VAR_26 = VAR_11;
  break;
 case 16000:
  VAR_26 = VAR_10;
  break;
 case 11025:
  VAR_26 = VAR_9;
  break;
 case 8000:
  VAR_26 = VAR_16;
  break;
 default:
  FUNC_2(VAR_23->card->dev,
   "set_sample_rate: %d invalid!\n", VAR_24);
  return -VAR_4;
 }

 VAR_25 |= VAR_26;

 VAR_23->comm_page->sample_rate = FUNC_0(VAR_24);
 VAR_23->sample_rate = VAR_24;
 FUNC_1(VAR_23->card->dev,
  "set_sample_rate: %d clock %d\n", VAR_24, VAR_26);

 return FUNC_7(VAR_23, VAR_25, VAR_28);
}
