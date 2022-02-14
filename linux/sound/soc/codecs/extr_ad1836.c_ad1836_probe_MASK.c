
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct ad1836_priv {size_t type; int regmap; } ;
struct TYPE_5__ {int channels_max; } ;
struct TYPE_4__ {int channels_max; } ;
struct TYPE_6__ {TYPE_2__ capture; TYPE_1__ playback; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_3__* VAR_13 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct ad1836_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int ,int) ;
 int FUNC_8 (struct snd_soc_dapm_context*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_14)
{
 struct ad1836_priv *VAR_15 = FUNC_6(VAR_14);
 struct snd_soc_dapm_context *VAR_16 = FUNC_5(VAR_14);
 int VAR_17, VAR_18;
 int VAR_19 = 0;
 int VAR_20;

 VAR_17 = VAR_13[VAR_15->type].playback.channels_max / 2;
 VAR_18 = VAR_13[VAR_15->type].capture.channels_max / 2;



 FUNC_3(VAR_15->regmap, VAR_4, 0x300);

 FUNC_3(VAR_15->regmap, VAR_5, 0x0);

 FUNC_3(VAR_15->regmap, VAR_1, 0x100);

 FUNC_3(VAR_15->regmap, VAR_2, 0x180);

 for (VAR_20 = 1; VAR_20 <= VAR_17; ++VAR_20) {
  FUNC_3(VAR_15->regmap, FUNC_0(VAR_20), 0x3FF);
  FUNC_3(VAR_15->regmap, FUNC_1(VAR_20), 0x3FF);
 }

 if (VAR_15->type == VAR_0) {

  FUNC_3(VAR_15->regmap, VAR_3, 0x3A);
  VAR_19 = FUNC_4(VAR_14, VAR_6,
    FUNC_2(VAR_6));
  if (VAR_19)
   return VAR_19;
 } else {
  FUNC_3(VAR_15->regmap, VAR_3, 0x00);
 }

 VAR_19 = FUNC_4(VAR_14, VAR_10, VAR_17 * 2);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_4(VAR_14, VAR_7, VAR_18);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_8(VAR_16, VAR_11, VAR_17);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_8(VAR_16, VAR_8, VAR_18);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_7(VAR_16, VAR_12, VAR_17);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_7(VAR_16, VAR_9, VAR_18);
 if (VAR_19)
  return VAR_19;

 return VAR_19;
}
