
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct adau1761_platform_data {scalar_t__ input_differential; } ;
struct adau {scalar_t__ type; int regmap; } ;
struct TYPE_2__ {struct adau1761_platform_data* platform_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int VAR_12 ;
 int FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_8 (struct snd_soc_component*) ;
 struct adau* FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_11 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_component *VAR_13)
{
 struct snd_soc_dapm_context *VAR_14 = FUNC_8(VAR_13);
 struct adau1761_platform_data *VAR_15 = VAR_13->dev->platform_data;
 struct adau *VAR_16 = FUNC_9(VAR_13);
 int VAR_17;

 VAR_17 = FUNC_5(VAR_13);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_15 && VAR_15->input_differential) {
  FUNC_6(VAR_16->regmap, VAR_2,
   VAR_1,
   VAR_1);
  FUNC_6(VAR_16->regmap, VAR_7,
   VAR_1,
   VAR_1);
  VAR_17 = FUNC_7(VAR_13,
   VAR_11,
   FUNC_0(VAR_11));
  if (VAR_17)
   return VAR_17;
 } else {
  VAR_17 = FUNC_7(VAR_13,
   VAR_12,
   FUNC_0(VAR_12));
  if (VAR_17)
   return VAR_17;
 }

 switch (FUNC_1(VAR_13)) {
 case 128:
  break;
 case 129:
  FUNC_6(VAR_16->regmap, VAR_3,
   VAR_4,
   VAR_4);
  FUNC_6(VAR_16->regmap, VAR_5,
   VAR_6,
   VAR_6);
  break;
 default:
  return -VAR_8;
 }

 VAR_17 = FUNC_3(VAR_13);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_2(VAR_13);
 if (VAR_17)
  return VAR_17;

 if (VAR_16->type == VAR_0) {
  VAR_17 = FUNC_11(VAR_14, VAR_10,
   FUNC_0(VAR_10));
  if (VAR_17)
   return VAR_17;

  VAR_17 = FUNC_10(VAR_14, VAR_9,
   FUNC_0(VAR_9));
  if (VAR_17)
   return VAR_17;
 }

 VAR_17 = FUNC_4(VAR_13);
 if (VAR_17 < 0)
  return VAR_17;

 return 0;
}
