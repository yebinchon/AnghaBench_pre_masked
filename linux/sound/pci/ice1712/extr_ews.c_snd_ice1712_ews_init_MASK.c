
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int subvendor; } ;
struct TYPE_9__ {int stream_put; int stream_get; int default_put; int default_get; int setup_rate; int open; } ;
struct TYPE_10__ {int cs8403_bits; TYPE_2__ ops; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int akm_codecs; TYPE_4__ eeprom; struct snd_akm4xxx* akm; TYPE_3__ spdif; int cs8427; TYPE_5__* i2c; TYPE_6__* card; struct ews_spec* spec; } ;
struct snd_akm4xxx {int dummy; } ;
struct ews_spec {int * i2cdevs; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_8__ {int * bit; } ;
struct TYPE_12__ {TYPE_1__ hw_ops; struct snd_ice1712* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,char*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_6__*,char*,int *,TYPE_5__**) ;
 int FUNC_4 (TYPE_5__*,char*,int ,int *) ;
 int FUNC_5 (struct snd_ice1712*,int ,int) ;
 int FUNC_6 (struct snd_akm4xxx*,int *,int *,struct snd_ice1712*) ;
 int FUNC_7 (struct snd_ice1712*,int) ;
 int FUNC_8 (struct snd_ice1712*,int ) ;
 int VAR_32 ;
 int FUNC_9 (struct snd_ice1712*,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_ice1712 *VAR_33)
{
 int VAR_34;
 struct snd_akm4xxx *VAR_35;
 struct ews_spec *VAR_36;


 switch (VAR_33->eeprom.subvendor) {
 case 130:
  VAR_33->num_total_dacs = 2;
  VAR_33->num_total_adcs = 2;
  break;
 case 132:
 case 131:
 case 129:
 case 128:
  VAR_33->num_total_dacs = 8;
  VAR_33->num_total_adcs = 8;
  break;
 case 133:

  VAR_33->num_total_dacs = 8;
  VAR_33->num_total_adcs = 8;
  break;
 case 134:
  VAR_33->num_total_dacs = 6;
  VAR_33->num_total_adcs = 6;
  break;
 }

 VAR_36 = FUNC_1(sizeof(*VAR_36), VAR_12);
 if (!VAR_36)
  return -VAR_6;
 VAR_33->spec = VAR_36;


 if ((VAR_34 = FUNC_3(VAR_33->card, "ICE1712 GPIO 1", ((void*)0), &VAR_33->i2c)) < 0) {
  FUNC_0(VAR_33->card->dev, "unable to create I2C bus\n");
  return VAR_34;
 }
 VAR_33->i2c->private_data = VAR_33;
 VAR_33->i2c->hw_ops.bit = &VAR_32;


 switch (VAR_33->eeprom.subvendor) {
 case 134:
  VAR_34 = FUNC_4(VAR_33->i2c, "PCF9554",
         VAR_14,
         &VAR_36->i2cdevs[VAR_7]);
  if (VAR_34 < 0) {
   FUNC_0(VAR_33->card->dev,
    "PCF9554 initialization failed\n");
   return VAR_34;
  }
  FUNC_5(VAR_33, VAR_19, 0x80);
  break;
 case 132:
 case 131:
 case 129:
 case 128:

  VAR_34 = FUNC_4(VAR_33->i2c, "CS8404",
         VAR_16,
         &VAR_36->i2cdevs[VAR_9]);
  if (VAR_34 < 0)
   return VAR_34;
  VAR_34 = FUNC_4(VAR_33->i2c, "PCF8574 (1st)",
         VAR_17,
         &VAR_36->i2cdevs[VAR_10]);
  if (VAR_34 < 0)
   return VAR_34;
  VAR_34 = FUNC_4(VAR_33->i2c, "PCF8574 (2nd)",
         VAR_18,
         &VAR_36->i2cdevs[VAR_11]);
  if (VAR_34 < 0)
   return VAR_34;

  if ((VAR_34 = FUNC_7(VAR_33, 0x0f)) < 0)
   return VAR_34;
  break;
 case 133:
  VAR_34 = FUNC_4(VAR_33->i2c, "PCF8575",
         VAR_15,
         &VAR_36->i2cdevs[VAR_8]);
  if (VAR_34 < 0)
   return VAR_34;
  break;
 }


 switch (VAR_33->eeprom.subvendor) {
 case 130:
  if ((VAR_34 = FUNC_9(VAR_33, VAR_0)) < 0)
   return VAR_34;
  FUNC_2(VAR_33->cs8427, VAR_4, VAR_5 | VAR_2 | VAR_1 | VAR_3);
  break;
 case 134:
  if ((VAR_34 = FUNC_9(VAR_33, VAR_13)) < 0)
   return VAR_34;
  FUNC_2(VAR_33->cs8427, VAR_4, VAR_5 | VAR_2 | VAR_1 | VAR_3);
  break;
 case 132:
 case 131:
 case 129:
 case 128:
 case 133:

  VAR_33->spdif.ops.open = VAR_26;
  VAR_33->spdif.ops.setup_rate = VAR_27;
  VAR_33->spdif.ops.default_get = VAR_28;
  VAR_33->spdif.ops.default_put = VAR_29;
  VAR_33->spdif.ops.stream_get = VAR_30;
  VAR_33->spdif.ops.stream_put = VAR_31;

  FUNC_8(VAR_33, VAR_33->spdif.cs8403_bits);
  break;
 }


 switch (VAR_33->eeprom.subvendor) {
 case 133:
  return 0;
 }


 VAR_35 = VAR_33->akm = FUNC_1(sizeof(struct snd_akm4xxx), VAR_12);
 if (! VAR_35)
  return -VAR_6;
 VAR_33->akm_codecs = 1;

 switch (VAR_33->eeprom.subvendor) {
 case 132:
 case 131:
 case 129:
 case 128:
  VAR_34 = FUNC_6(VAR_35, &VAR_22, &VAR_23, VAR_33);
  break;
 case 130:
  VAR_34 = FUNC_6(VAR_35, &VAR_24, &VAR_25, VAR_33);
  break;
 case 134:
  VAR_34 = FUNC_6(VAR_35, &VAR_20, &VAR_21, VAR_33);
  break;
 default:
  VAR_34 = 0;
 }

 return VAR_34;
}
