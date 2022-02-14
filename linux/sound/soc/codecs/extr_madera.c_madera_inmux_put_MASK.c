
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct soc_enum {unsigned int shift_l; unsigned int mask; int reg; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct regmap {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct TYPE_7__ {unsigned int** inmode; } ;
struct TYPE_8__ {TYPE_3__ codec; } ;
struct madera {int dev; TYPE_4__ pdata; struct regmap* regmap; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct regmap*,int,unsigned int,unsigned int,int*) ;
 struct madera_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,struct snd_kcontrol*,unsigned int,struct soc_enum*,int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_4,
       struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 =
  FUNC_3(VAR_4);
 struct snd_soc_dapm_context *VAR_7 =
  FUNC_4(VAR_4);
 struct madera_priv *VAR_8 = FUNC_2(VAR_6);
 struct madera *VAR_9 = VAR_8->madera;
 struct regmap *VAR_10 = VAR_9->regmap;
 struct soc_enum *VAR_11 = (struct soc_enum *)VAR_4->private_value;
 unsigned int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;
 bool VAR_16;
 int VAR_17;

 VAR_12 = VAR_5->value.enumerated.item[0];
 if (VAR_12 > 1)
  return -VAR_0;

 VAR_13 = VAR_12 << VAR_11->shift_l;
 VAR_14 = (VAR_11->mask << VAR_11->shift_l) | VAR_1;

 switch (VAR_11->reg) {
 case 131:
  VAR_15 = VAR_9->pdata.codec.inmode[0][2 * VAR_12];
  break;
 case 130:
  VAR_15 = VAR_9->pdata.codec.inmode[0][1 + (2 * VAR_12)];
  break;
 case 129:
  VAR_15 = VAR_9->pdata.codec.inmode[1][2 * VAR_12];
  break;
 case 128:
  VAR_15 = VAR_9->pdata.codec.inmode[1][1 + (2 * VAR_12)];
  break;
 default:
  return -VAR_0;
 }

 if (VAR_15 & VAR_3)
  VAR_13 |= 1 << VAR_2;

 FUNC_0(VAR_9->dev, "mux=%u reg=0x%x inmode=0x%x mask=0x%x val=0x%x\n",
  VAR_12, VAR_11->reg, VAR_15, VAR_14, VAR_13);

 VAR_17 = FUNC_1(VAR_10, VAR_11->reg, VAR_14, VAR_13, &VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_16)
  return FUNC_5(VAR_7, VAR_4,
           VAR_12, VAR_11, ((void*)0));
 else
  return 0;
}
