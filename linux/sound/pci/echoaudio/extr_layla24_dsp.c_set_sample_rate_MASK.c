
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
 int VAR_21 ;
 int FUNC_0 (struct echoaudio*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct echoaudio*) ;
 int FUNC_8 (struct echoaudio*,int,int) ;

__attribute__((used)) static int FUNC_9(struct echoaudio *VAR_22, u32 VAR_23)
{
 u32 VAR_24, VAR_25, VAR_26;

 if (FUNC_6(VAR_23 >= 50000 &&
         VAR_22->digital_mode == VAR_0))
  return -VAR_3;


 if (VAR_22->input_clock != VAR_2) {
  FUNC_3(VAR_22->card->dev,
    "Cannot set sample rate - clock not set to CLK_CLOCKININTERNAL\n");

  VAR_22->comm_page->sample_rate = FUNC_1(VAR_23);
  VAR_22->sample_rate = VAR_23;
  return 0;
 }


 VAR_24 = FUNC_4(VAR_22->comm_page->control_register);
 VAR_24 &= VAR_14 & VAR_17;

 VAR_25 = 0;

 switch (VAR_23) {
 case 96000:
  VAR_25 = VAR_13;
  break;
 case 88200:
  VAR_25 = VAR_11;
  break;
 case 48000:
  VAR_25 = VAR_10 | VAR_19;
  break;
 case 44100:
  VAR_25 = VAR_9;

  if (VAR_24 & VAR_16)
   VAR_25 |= VAR_18;
  break;
 case 32000:
  VAR_25 = VAR_8 | VAR_18 |
   VAR_19;
  break;
 case 22050:
  VAR_25 = VAR_7;
  break;
 case 16000:
  VAR_25 = VAR_6;
  break;
 case 11025:
  VAR_25 = VAR_5;
  break;
 case 8000:
  VAR_25 = VAR_12;
  break;
 default:


  VAR_25 = VAR_20;
  if (VAR_23 > 50000) {
   VAR_26 = VAR_23 >> 1;
   VAR_24 |= VAR_15;
  } else {
   VAR_26 = VAR_23;
  }

  if (VAR_26 < 25000)
   VAR_26 = 25000;

  if (FUNC_7(VAR_22))
   return -VAR_4;

  VAR_22->comm_page->sample_rate =
   FUNC_1(VAR_21 / VAR_26 - 2);

  FUNC_0(VAR_22);
  FUNC_5(VAR_22, VAR_1);
 }

 VAR_24 |= VAR_25;

 VAR_22->comm_page->sample_rate = FUNC_1(VAR_23);
 VAR_22->sample_rate = VAR_23;
 FUNC_2(VAR_22->card->dev,
  "set_sample_rate: %d clock %d\n", VAR_23, VAR_24);

 return FUNC_8(VAR_22, VAR_24, 0);
}
