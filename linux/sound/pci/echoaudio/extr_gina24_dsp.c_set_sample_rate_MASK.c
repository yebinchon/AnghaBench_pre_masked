
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {scalar_t__ digital_mode; scalar_t__ input_clock; int sample_rate; TYPE_2__* card; TYPE_1__* comm_page; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {void* sample_rate; int control_register; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct echoaudio*,int,int) ;

__attribute__((used)) static int FUNC_7(struct echoaudio *VAR_17, u32 VAR_18)
{
 u32 VAR_19, VAR_20;

 if (FUNC_5(VAR_18 >= 50000 &&
         VAR_17->digital_mode == VAR_0))
  return -VAR_2;


 if (VAR_17->input_clock != VAR_1) {
  FUNC_3(VAR_17->card->dev,
    "Cannot set sample rate - clock not set to CLK_CLOCKININTERNAL\n");

  VAR_17->comm_page->sample_rate = FUNC_0(VAR_18);
  VAR_17->sample_rate = VAR_18;
  return 0;
 }

 VAR_20 = 0;

 VAR_19 = FUNC_4(VAR_17->comm_page->control_register);
 VAR_19 &= VAR_12 & VAR_14;

 switch (VAR_18) {
 case 96000:
  VAR_20 = VAR_11;
  break;
 case 88200:
  VAR_20 = VAR_9;
  break;
 case 48000:
  VAR_20 = VAR_8 | VAR_16;
  break;
 case 44100:
  VAR_20 = VAR_7;

  if (VAR_19 & VAR_13)
   VAR_20 |= VAR_15;
  break;
 case 32000:
  VAR_20 = VAR_6 | VAR_15 |
   VAR_16;
  break;
 case 22050:
  VAR_20 = VAR_5;
  break;
 case 16000:
  VAR_20 = VAR_4;
  break;
 case 11025:
  VAR_20 = VAR_3;
  break;
 case 8000:
  VAR_20 = VAR_10;
  break;
 default:
  FUNC_2(VAR_17->card->dev,
   "set_sample_rate: %d invalid!\n", VAR_18);
  return -VAR_2;
 }

 VAR_19 |= VAR_20;

 VAR_17->comm_page->sample_rate = FUNC_0(VAR_18);
 VAR_17->sample_rate = VAR_18;
 FUNC_1(VAR_17->card->dev, "set_sample_rate: %d clock %d\n", VAR_18, VAR_20);

 return FUNC_6(VAR_17, VAR_19, 0);
}
