
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct adau1761_platform_data {int digmic_jackdetect_pin_mode; int jackdetect_debounce_time; int jackdetect_active_low; } ;
struct adau {int regmap; } ;
typedef enum adau1761_digmic_jackdet_pin_mode { ____Placeholder_adau1761_digmic_jackdet_pin_mode } adau1761_digmic_jackdet_pin_mode ;
struct TYPE_2__ {struct adau1761_platform_data* platform_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;







 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct adau* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_8)
{
 struct snd_soc_dapm_context *VAR_9 = FUNC_3(VAR_8);
 struct adau1761_platform_data *VAR_10 = VAR_8->dev->platform_data;
 struct adau *VAR_11 = FUNC_4(VAR_8);
 enum adau1761_digmic_jackdet_pin_mode VAR_12;
 unsigned int VAR_13 = 0;
 int VAR_14;

 if (VAR_10)
  VAR_12 = VAR_10->digmic_jackdetect_pin_mode;
 else
  VAR_12 = 132;

 switch (VAR_12) {
 case 133:
  switch (VAR_10->jackdetect_debounce_time) {
  case 128:
  case 131:
  case 130:
  case 129:
   VAR_13 |= VAR_10->jackdetect_debounce_time << 6;
   break;
  default:
   return -VAR_3;
  }
  if (VAR_10->jackdetect_active_low)
   VAR_13 |= VAR_1;

  VAR_14 = FUNC_2(VAR_8,
   VAR_6,
   FUNC_0(VAR_6));
  if (VAR_14)
   return VAR_14;

 case 132:
  VAR_14 = FUNC_5(VAR_9, VAR_7,
   FUNC_0(VAR_7));
  if (VAR_14)
   return VAR_14;
  break;
 case 134:
  VAR_14 = FUNC_6(VAR_9, VAR_5,
   FUNC_0(VAR_5));
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_5(VAR_9, VAR_4,
   FUNC_0(VAR_4));
  if (VAR_14)
   return VAR_14;

  VAR_13 |= VAR_2;
  break;
 default:
  return -VAR_3;
 }

 FUNC_1(VAR_11->regmap, VAR_0, VAR_13);

 return 0;
}
