
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct regmap {int dummy; } ;
struct fsl_spdif_priv {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (struct regmap*,int ,int) ;
 struct snd_soc_dai* FUNC_2 (struct snd_kcontrol*) ;
 struct fsl_spdif_priv* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3,
    struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_dai *VAR_5 = FUNC_2(VAR_3);
 struct fsl_spdif_priv *VAR_6 = FUNC_3(VAR_5);
 struct regmap *VAR_7 = VAR_6->regmap;
 u32 VAR_8;

 FUNC_0(VAR_7, VAR_2, &VAR_8);
 VAR_4->value.integer.value[0] = (VAR_8 & VAR_0) != 0;
 FUNC_1(VAR_7, VAR_1, VAR_0);

 return 0;
}
