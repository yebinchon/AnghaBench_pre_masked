
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_enum {int items; unsigned int shift_l; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int* item; } ;
struct TYPE_6__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct madera_priv {struct madera* madera; } ;
struct TYPE_7__ {int* out_mono; } ;
struct TYPE_8__ {TYPE_3__ codec; } ;
struct madera {int dev; int regmap; TYPE_4__ pdata; } ;
struct cs47l92 {struct madera_priv core; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_component*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int) ;
 struct snd_soc_dapm_context* FUNC_6 (struct snd_soc_component*) ;
 struct cs47l92* FUNC_7 (struct snd_soc_component*) ;
 unsigned int FUNC_8 (struct snd_soc_component*,int ,int ,unsigned int) ;
 struct snd_soc_component* FUNC_9 (struct snd_kcontrol*) ;
 int FUNC_10 (struct snd_soc_dapm_context*) ;
 int FUNC_11 (struct snd_soc_dapm_context*) ;
 int FUNC_12 (struct snd_soc_dapm_context*,struct snd_kcontrol*,unsigned int,struct soc_enum*,int *) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct snd_kcontrol *VAR_6,
        struct snd_ctl_elem_value *VAR_7)
{
 struct snd_soc_component *VAR_8 =
  FUNC_9(VAR_6);
 struct snd_soc_dapm_context *VAR_9 =
  FUNC_6(VAR_8);
 struct cs47l92 *VAR_10 = FUNC_7(VAR_8);
 struct madera_priv *VAR_11 = &VAR_10->core;
 struct madera *VAR_12 = VAR_11->madera;
 struct soc_enum *VAR_13 = (struct soc_enum *)VAR_6->private_value;
 unsigned int VAR_14, VAR_15, VAR_16, VAR_17;
 bool VAR_18;
 int VAR_19;

 if (VAR_7->value.enumerated.item[0] > VAR_13->items - 1)
  return -VAR_0;

 VAR_15 = VAR_7->value.enumerated.item[0];

 FUNC_10(VAR_9);

 VAR_14 = VAR_15 << VAR_13->shift_l;

 VAR_16 = FUNC_8(VAR_8, VAR_5,
          VAR_2,
          VAR_14);
 if (!VAR_16)
  goto end;

 VAR_19 = FUNC_4(VAR_12->regmap, VAR_5, &VAR_17);
 if (VAR_19 != 0)
  FUNC_1(VAR_12->dev, "Failed to read outputs: %d\n", VAR_19);


 VAR_19 = FUNC_5(VAR_12->regmap, VAR_5,
     VAR_3 | VAR_4, 0);
 if (VAR_19)
  FUNC_1(VAR_12->dev, "Failed to disable outputs: %d\n", VAR_19);

 FUNC_13(2000, 3000);

 VAR_19 = FUNC_5(VAR_12->regmap, VAR_5,
     VAR_1, VAR_14);
 if (VAR_19) {
  FUNC_0(VAR_12->dev, "Failed to set OUT3 demux: %d\n", VAR_19);
 } else {
  VAR_18 = VAR_12->pdata.codec.out_mono[2 + VAR_15];

  VAR_19 = FUNC_2(VAR_8, 3, VAR_18);
  if (VAR_19 < 0)
   FUNC_1(VAR_12->dev,
     "Failed to set output mode: %d\n", VAR_19);
 }

 VAR_19 = FUNC_5(VAR_12->regmap, VAR_5,
     VAR_3 | VAR_4, VAR_17);
 if (VAR_19) {
  FUNC_1(VAR_12->dev, "Failed to restore outputs: %d\n", VAR_19);
 } else {

  if (VAR_17 & (VAR_3 | VAR_4))
   FUNC_3(34);
  else
   FUNC_13(2000, 3000);
 }

end:
 FUNC_11(VAR_9);

 return FUNC_12(VAR_9, VAR_6, VAR_15, VAR_13, ((void*)0));
}
