
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct adau1761_platform_data {int headphone_mode; } ;
struct adau {int regmap; } ;
typedef enum adau1761_output_mode { ____Placeholder_adau1761_output_mode } adau1761_output_mode ;
struct TYPE_2__ {struct adau1761_platform_data* platform_data; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct adau* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_11)
{
 struct snd_soc_dapm_context *VAR_12 = FUNC_3(VAR_11);
 struct adau *VAR_13 = FUNC_4(VAR_11);
 struct adau1761_platform_data *VAR_14 = VAR_11->dev->platform_data;
 enum adau1761_output_mode VAR_15;
 int VAR_16;

 if (VAR_14)
  VAR_15 = VAR_14->headphone_mode;
 else
  VAR_15 = 130;

 switch (VAR_15) {
 case 128:
  break;
 case 129:
  FUNC_1(VAR_13->regmap, VAR_2,
   VAR_3 |
   VAR_4,
   VAR_3 |
   VAR_4);

 case 130:
  FUNC_1(VAR_13->regmap, VAR_0,
   VAR_1,
   VAR_1);
  break;
 default:
  return -VAR_5;
 }

 if (VAR_15 == 129) {
  VAR_16 = FUNC_6(VAR_12,
   VAR_7,
   FUNC_0(VAR_7));
  if (VAR_16)
   return VAR_16;
  VAR_16 = FUNC_5(VAR_12,
   VAR_6,
   FUNC_0(VAR_6));
 } else {
  VAR_16 = FUNC_2(VAR_11, VAR_8,
   FUNC_0(VAR_8));
  if (VAR_16)
   return VAR_16;
  VAR_16 = FUNC_6(VAR_12,
   VAR_10,
   FUNC_0(VAR_10));
  if (VAR_16)
   return VAR_16;
  VAR_16 = FUNC_5(VAR_12,
   VAR_9,
   FUNC_0(VAR_9));
 }

 return VAR_16;
}
