
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int subvendor; int gpiodir; } ;
struct TYPE_8__ {int stream_put; int stream_get; int default_put; int default_get; int setup_rate; int open; } ;
struct TYPE_9__ {int cs8403_bits; TYPE_2__ ops; } ;
struct TYPE_7__ {void* set_pro_rate; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int pm_suspend_enabled; int akm_codecs; TYPE_4__ eeprom; struct snd_akm4xxx* akm; TYPE_3__ spdif; TYPE_1__ gpio; TYPE_6__* i2c; TYPE_5__* card; int pm_suspend; int pm_resume; int omni; } ;
struct snd_akm4xxx {int dummy; } ;
struct TYPE_12__ {int * ops; struct snd_ice1712* private_data; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
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
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,char*) ;
 struct snd_akm4xxx* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_5__*,char*,int *,TYPE_6__**) ;
 int FUNC_4 (struct snd_akm4xxx*,int *,int *,struct snd_ice1712*) ;
 int FUNC_5 (struct snd_ice1712*,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_6 (struct snd_ice1712*,int ) ;
 unsigned char FUNC_7 (struct snd_ice1712*,int ) ;
 int FUNC_8 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct snd_ice1712 *VAR_28)
{
 int VAR_29;
 struct snd_akm4xxx *VAR_30;
 unsigned char VAR_31;

 if (VAR_28->eeprom.subvendor == 138 &&
     VAR_28->eeprom.gpiodir == 0x7b)
  VAR_28->eeprom.subvendor = 137;

 if (VAR_28->eeprom.subvendor == 133 &&
     VAR_28->eeprom.gpiodir == 0xfb)
      VAR_28->eeprom.subvendor = 132;


 switch (VAR_28->eeprom.subvendor) {
 case 139:
  VAR_28->num_total_dacs = 2;
  VAR_28->num_total_adcs = 2;
  break;
 case 135:
  VAR_28->num_total_dacs = 8;
  VAR_28->num_total_adcs = 2;
  break;
 case 134:
 case 133:
  VAR_28->num_total_dacs = VAR_28->omni ? 8 : 4;
  VAR_28->num_total_adcs = VAR_28->omni ? 8 : 4;
  break;
 case 138:
 case 137:
 case 136:
 case 129:
 case 130:
  VAR_28->num_total_dacs = 8;
  VAR_28->num_total_adcs = 8;
  break;
 case 131:
  VAR_28->num_total_dacs = 4;
  break;
 case 128:
 case 132:
  VAR_28->num_total_dacs = 4;
  VAR_28->num_total_adcs = 4;
  break;
 }






 VAR_31 = FUNC_7(VAR_28, VAR_5);
 VAR_31 |= VAR_4;
 FUNC_8(VAR_28, VAR_5, VAR_31);
 FUNC_9(5);


 switch (VAR_28->eeprom.subvendor) {
 case 139:
 case 135:
 case 137:
 case 136:
 case 128:
 case 132:
  if ((VAR_29 = FUNC_3(VAR_28->card, "ICE1712 GPIO 1", ((void*)0), &VAR_28->i2c)) < 0) {
   FUNC_0(VAR_28->card->dev, "unable to create I2C bus\n");
   return VAR_29;
  }
  VAR_28->i2c->private_data = VAR_28;
  VAR_28->i2c->ops = &VAR_18;
  if ((VAR_29 = FUNC_6(VAR_28, VAR_0)) < 0)
   return VAR_29;
  break;
 case 138:
 case 129:
  VAR_28->gpio.set_pro_rate = VAR_19;
  break;
 case 131:
  VAR_28->gpio.set_pro_rate = VAR_19;

 case 133:
  VAR_28->spdif.ops.open = VAR_20;
  VAR_28->spdif.ops.setup_rate = VAR_21;
  VAR_28->spdif.ops.default_get = VAR_22;
  VAR_28->spdif.ops.default_put = VAR_23;
  VAR_28->spdif.ops.stream_get = VAR_24;
  VAR_28->spdif.ops.stream_put = VAR_25;

  FUNC_5(VAR_28, VAR_28->spdif.cs8403_bits);
  break;
 }


 switch (VAR_28->eeprom.subvendor) {
 case 138:
 case 137:
 case 131:
 case 129:
  return 0;
 }


 VAR_30 = VAR_28->akm = FUNC_1(sizeof(struct snd_akm4xxx), VAR_3);
 if (! VAR_30)
  return -VAR_2;
 VAR_28->akm_codecs = 1;

 switch (VAR_28->eeprom.subvendor) {
 case 139:
  VAR_29 = FUNC_4(VAR_30, &VAR_6, &VAR_7, VAR_28);
  break;
 case 135:
  VAR_29 = FUNC_4(VAR_30, &VAR_10, &VAR_11, VAR_28);
  break;
 case 136:
 case 130:
  VAR_29 = FUNC_4(VAR_30, &VAR_8, &VAR_9, VAR_28);
  break;
 case 133:
 case 134:
  VAR_29 = FUNC_4(VAR_30, &VAR_12, &VAR_13, VAR_28);
  break;
 case 128:
  VAR_29 = FUNC_4(VAR_30, &VAR_16, &VAR_17, VAR_28);
  break;
 case 132:
  VAR_29 = FUNC_4(VAR_30, &VAR_14, &VAR_15, VAR_28);
  break;
 default:
  FUNC_2();
  return -VAR_1;
 }

 return VAR_29;
}
