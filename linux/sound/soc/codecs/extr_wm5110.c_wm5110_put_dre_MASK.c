
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_mixer_control {int shift; int rshift; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct arizona {int dev; int regmap; } ;
struct TYPE_4__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 struct arizona* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_dapm_context*) ;
 struct snd_soc_component* FUNC_7 (struct snd_kcontrol*) ;
 int FUNC_8 (struct arizona*,int) ;

__attribute__((used)) static int FUNC_9(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_7(VAR_3);
 struct snd_soc_dapm_context *VAR_6 = FUNC_4(VAR_5);
 struct arizona *VAR_7 = FUNC_1(VAR_5->dev->parent);
 struct soc_mixer_control *VAR_8 =
  (struct soc_mixer_control *)VAR_3->private_value;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11 = (0x1 << VAR_8->shift) | (0x1 << VAR_8->rshift);
 unsigned int VAR_12 = (!!VAR_4->value.integer.value[0]) << VAR_8->shift;
 unsigned int VAR_13 = (!!VAR_4->value.integer.value[1]) << VAR_8->rshift;
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17;
 int VAR_18;

 FUNC_5(VAR_6);

 VAR_18 = FUNC_2(VAR_7->regmap, VAR_1, &VAR_9);
 if (VAR_18) {
  FUNC_0(VAR_7->dev, "Failed to read output state: %d\n", VAR_18);
  goto err;
 }
 VAR_18 = FUNC_2(VAR_7->regmap, VAR_0, &VAR_10);
 if (VAR_18) {
  FUNC_0(VAR_7->dev, "Failed to read DRE state: %d\n", VAR_18);
  goto err;
 }

 VAR_14 = VAR_10 & (1 << VAR_8->shift);
 VAR_15 = VAR_10 & (1 << VAR_8->rshift);

 VAR_16 = VAR_9 & (1 << VAR_8->rshift);
 VAR_17 = VAR_9 & (1 << VAR_8->shift);

 if ((VAR_16 && VAR_12 != VAR_14) || (VAR_17 && VAR_13 != VAR_15)) {
  FUNC_0(VAR_7->dev, "Can't change DRE on active outputs\n");
  VAR_18 = -VAR_2;
  goto err;
 }

 VAR_18 = FUNC_3(VAR_7->regmap, VAR_0,
     VAR_11, VAR_12 | VAR_13);
 if (VAR_18) {
  FUNC_0(VAR_7->dev, "Failed to set DRE: %d\n", VAR_18);
  goto err;
 }


 if (!VAR_12 && VAR_14)
  FUNC_8(VAR_7, VAR_8->shift);

 if (!VAR_13 && VAR_15)
  FUNC_8(VAR_7, VAR_8->rshift);

err:
 FUNC_6(VAR_6);

 return VAR_18;
}
