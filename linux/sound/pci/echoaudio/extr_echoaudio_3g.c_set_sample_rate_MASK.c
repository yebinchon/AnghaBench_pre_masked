
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {scalar_t__ input_clock; int sample_rate; scalar_t__ digital_mode; TYPE_2__* card; TYPE_1__* comm_page; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {void* sample_rate; int control_register; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct echoaudio*,scalar_t__) ;
 int FUNC_5 (struct echoaudio*,int,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct echoaudio*,int,int,int ) ;

__attribute__((used)) static int FUNC_8(struct echoaudio *VAR_13, u32 VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17, VAR_18;


 if (VAR_13->input_clock != VAR_11) {
  FUNC_2(VAR_13->card->dev,
    "Cannot set sample rate - clock not set to CLK_CLOCKININTERNAL\n");

  VAR_13->comm_page->sample_rate = FUNC_0(VAR_14);
  VAR_13->sample_rate = VAR_14;
  FUNC_4(VAR_13, VAR_13->input_clock);
  return 0;
 }

 if (FUNC_6(VAR_14 >= 50000 &&
         VAR_13->digital_mode == VAR_0))
  return -VAR_12;

 VAR_16 = 0;
 VAR_15 = FUNC_3(VAR_13->comm_page->control_register);
 VAR_15 &= VAR_6;

 switch (VAR_14) {
 case 96000:
  VAR_16 = VAR_5;
  break;
 case 88200:
  VAR_16 = VAR_4;
  break;
 case 48000:
  VAR_16 = VAR_3;
  break;
 case 44100:
  VAR_16 = VAR_2;
  break;
 case 32000:
  VAR_16 = VAR_1;
  break;
 default:
  VAR_16 = VAR_7;
  if (VAR_14 > 50000)
   VAR_16 |= VAR_8;
  break;
 }

 VAR_15 |= VAR_16;
 VAR_15 = FUNC_5(VAR_13, VAR_15, VAR_14);

 VAR_17 = VAR_14;
 if (VAR_17 > 50000)
  VAR_17 /= 2;
 if (VAR_17 < 32000)
  VAR_17 = 32000;

 VAR_18 = VAR_10 / VAR_17 - 2;
 if (VAR_18 > VAR_9)
  VAR_18 = VAR_9;

 VAR_13->comm_page->sample_rate = FUNC_0(VAR_14);
 VAR_13->sample_rate = VAR_14;
 FUNC_1(VAR_13->card->dev,
  "SetSampleRate: %d clock %x\n", VAR_14, VAR_15);


 return FUNC_7(VAR_13, VAR_15, VAR_18, 0);
}
