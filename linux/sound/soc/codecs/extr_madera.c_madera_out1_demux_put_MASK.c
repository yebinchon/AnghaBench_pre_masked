
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_enum {int items; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int* item; } ;
struct TYPE_6__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct madera_priv {struct madera* madera; } ;
struct TYPE_7__ {int * out_mono; } ;
struct TYPE_8__ {TYPE_3__ codec; } ;
struct madera {unsigned int hp_ena; int dev; int regmap; int * out_shorted; scalar_t__* out_clamp; TYPE_4__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_soc_component*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int,unsigned int) ;
 struct madera_priv* FUNC_5 (struct snd_soc_component*) ;
 unsigned int FUNC_6 (struct snd_soc_component*,int ,int,unsigned int) ;
 struct snd_soc_component* FUNC_7 (struct snd_kcontrol*) ;
 struct snd_soc_dapm_context* FUNC_8 (struct snd_kcontrol*) ;
 int FUNC_9 (struct snd_soc_dapm_context*) ;
 int FUNC_10 (struct snd_soc_dapm_context*) ;
 int FUNC_11 (struct snd_soc_dapm_context*,struct snd_kcontrol*,unsigned int,struct soc_enum*,int *) ;
 int FUNC_12 (int,int) ;

int FUNC_13(struct snd_kcontrol *VAR_6,
     struct snd_ctl_elem_value *VAR_7)
{
 struct snd_soc_component *VAR_8 =
  FUNC_7(VAR_6);
 struct snd_soc_dapm_context *VAR_9 =
  FUNC_8(VAR_6);
 struct madera_priv *VAR_10 = FUNC_5(VAR_8);
 struct madera *VAR_11 = VAR_10->madera;
 struct soc_enum *VAR_12 = (struct soc_enum *)VAR_6->private_value;
 unsigned int VAR_13, VAR_14, VAR_15;
 bool VAR_16;
 int VAR_17;

 if (VAR_7->value.enumerated.item[0] > VAR_12->items - 1)
  return -VAR_0;

 VAR_14 = VAR_7->value.enumerated.item[0];

 FUNC_9(VAR_9);

 VAR_13 = VAR_14 << VAR_2;

 VAR_15 = FUNC_6(VAR_8, VAR_5,
          VAR_1,
          VAR_13);
 if (!VAR_15)
  goto end;


 VAR_17 = FUNC_4(VAR_11->regmap, VAR_5,
     VAR_3 | VAR_4, 0);
 if (VAR_17)
  FUNC_1(VAR_11->dev, "Failed to disable outputs: %d\n", VAR_17);

 FUNC_12(2000, 3000);


 if (VAR_11->out_clamp[0])
  VAR_17 = FUNC_4(VAR_11->regmap,
      VAR_5,
      VAR_1, VAR_13);
 if (VAR_17) {
  FUNC_0(VAR_11->dev, "Failed to set OUT1 demux: %d\n", VAR_17);
 } else {

  if (!VAR_13 && !VAR_11->pdata.codec.out_mono[0])
   VAR_16 = 0;
  else
   VAR_16 = 1;

  VAR_17 = FUNC_2(VAR_8, 1, VAR_16);
  if (VAR_17)
   FUNC_1(VAR_11->dev,
     "Failed to set output mode: %d\n", VAR_17);
 }





 if (VAR_13 ||
     (VAR_11->out_clamp[0] && !VAR_11->out_shorted[0])) {
  VAR_17 = FUNC_4(VAR_11->regmap,
      VAR_5,
      VAR_3 | VAR_4,
      VAR_11->hp_ena);
  if (VAR_17)
   FUNC_1(VAR_11->dev,
     "Failed to restore earpiece outputs: %d\n",
     VAR_17);
  else if (VAR_11->hp_ena)
   FUNC_3(34);
  else
   FUNC_12(2000, 3000);
 }

end:
 FUNC_10(VAR_9);

 return FUNC_11(VAR_9, VAR_6, VAR_14, VAR_12, ((void*)0));
}
