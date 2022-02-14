
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct snd_usb_caiaqdev {int audio_parm_answer; int bpp; int ep1_wait_queue; } ;
struct device {int dummy; } ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 struct device* FUNC_0 (struct snd_usb_caiaqdev*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct snd_usb_caiaqdev*,int ,char*,int) ;
 int FUNC_3 (int ,int,int ) ;

int FUNC_4 (struct snd_usb_caiaqdev *VAR_11,
           int VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15;
 char VAR_16[5];
 struct device *VAR_17 = FUNC_0(VAR_11);

 switch (VAR_12) {
 case 44100: VAR_16[0] = VAR_7; break;
 case 48000: VAR_16[0] = VAR_8; break;
 case 88200: VAR_16[0] = VAR_9; break;
 case 96000: VAR_16[0] = VAR_10; break;
 case 192000: VAR_16[0] = VAR_6; break;
 default: return -VAR_2;
 }

 switch (VAR_13) {
 case 16: VAR_16[1] = VAR_0; break;
 case 24: VAR_16[1] = VAR_1; break;
 default: return -VAR_2;
 }

 VAR_16[2] = VAR_14 & 0xff;
 VAR_16[3] = VAR_14 >> 8;
 VAR_16[4] = 1;

 FUNC_1(VAR_17, "setting audio params: %d Hz, %d bits, %d bpp\n",
  VAR_12, VAR_13, VAR_14);

 VAR_11->audio_parm_answer = -1;
 VAR_15 = FUNC_2(VAR_11, VAR_3,
      VAR_16, sizeof(VAR_16));

 if (VAR_15)
  return VAR_15;

 if (!FUNC_3(VAR_11->ep1_wait_queue,
     VAR_11->audio_parm_answer >= 0, VAR_5))
  return -VAR_4;

 if (VAR_11->audio_parm_answer != 1)
  FUNC_1(VAR_17, "unable to set the device's audio params\n");
 else
  VAR_11->bpp = VAR_14;

 return VAR_11->audio_parm_answer == 1 ? 0 : -VAR_2;
}
