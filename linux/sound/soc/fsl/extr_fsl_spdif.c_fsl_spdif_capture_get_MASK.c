
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct regmap {int dummy; } ;
struct fsl_spdif_priv {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (struct regmap*,int ,int) ;
 struct snd_soc_dai* FUNC_2 (struct snd_kcontrol*) ;
 struct fsl_spdif_priv* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_6,
    struct snd_ctl_elem_value *VAR_7)
{
 struct snd_soc_dai *VAR_8 = FUNC_2(VAR_6);
 struct fsl_spdif_priv *VAR_9 = FUNC_3(VAR_8);
 struct regmap *VAR_10 = VAR_9->regmap;
 u32 VAR_11, VAR_12;

 FUNC_0(VAR_10, VAR_3, &VAR_12);
 if (!(VAR_12 & VAR_1))
  return -VAR_0;

 FUNC_0(VAR_10, VAR_4, &VAR_11);
 VAR_7->value.iec958.status[0] = (VAR_11 >> 16) & 0xFF;
 VAR_7->value.iec958.status[1] = (VAR_11 >> 8) & 0xFF;
 VAR_7->value.iec958.status[2] = VAR_11 & 0xFF;

 FUNC_0(VAR_10, VAR_5, &VAR_11);
 VAR_7->value.iec958.status[3] = (VAR_11 >> 16) & 0xFF;
 VAR_7->value.iec958.status[4] = (VAR_11 >> 8) & 0xFF;
 VAR_7->value.iec958.status[5] = VAR_11 & 0xFF;


 FUNC_1(VAR_10, VAR_2, VAR_1);

 return 0;
}
