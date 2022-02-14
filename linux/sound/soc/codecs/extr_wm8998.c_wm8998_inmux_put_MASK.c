
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct arizona* arizona; } ;
struct wm8998_priv {TYPE_1__ core; } ;
struct soc_enum {int reg; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_7__ {unsigned int* item; } ;
struct TYPE_8__ {TYPE_3__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct TYPE_6__ {unsigned int* inmode; } ;
struct arizona {TYPE_2__ pdata; } ;



 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct wm8998_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int,int,unsigned int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,struct snd_kcontrol*,unsigned int,struct soc_enum*,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_11,
       struct snd_ctl_elem_value *VAR_12)
{
 struct snd_soc_component *VAR_13 = FUNC_3(VAR_11);
 struct snd_soc_dapm_context *VAR_14 = FUNC_0(VAR_13);
 struct wm8998_priv *VAR_15 = FUNC_1(VAR_13);
 struct arizona *VAR_16 = VAR_15->core.arizona;
 struct soc_enum *VAR_17 = (struct soc_enum *)VAR_11->private_value;
 unsigned int VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_20 = VAR_12->value.enumerated.item[0];
 if (VAR_20 > 1)
  return -VAR_10;

 switch (VAR_17->reg) {
 case 128:
  VAR_18 = VAR_7;
  VAR_19 = 1 + (2 * VAR_20);
  break;
 default:
  VAR_18 = VAR_0;
  VAR_19 = (2 * VAR_20);
  break;
 }

 VAR_21 = VAR_16->pdata.inmode[VAR_19];
 if (VAR_21 & VAR_8)
  VAR_23 = 1 << VAR_6;
 else
  VAR_23 = 0;

 VAR_22 = VAR_20 << VAR_4;
 if (VAR_21 & VAR_9)
  VAR_22 |= 1 << VAR_3;

 FUNC_2(VAR_13, VAR_18,
          VAR_5, VAR_23);

 FUNC_2(VAR_13, VAR_17->reg,
          VAR_1 |
          VAR_2,
          VAR_22);

 return FUNC_4(VAR_14, VAR_11,
          VAR_12->value.enumerated.item[0],
          VAR_17, ((void*)0));
}
