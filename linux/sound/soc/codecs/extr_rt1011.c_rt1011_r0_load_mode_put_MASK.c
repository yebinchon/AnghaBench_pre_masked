
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* card; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {unsigned int* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct rt1011_priv {unsigned int r0_reg; int regmap; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int instantiated; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,unsigned int,unsigned int,unsigned int) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (struct rt1011_priv*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_4 (struct snd_soc_component*) ;
 struct rt1011_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2,
  struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_3(VAR_2);
 struct rt1011_priv *VAR_5 = FUNC_5(VAR_4);
 struct device *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 if (VAR_3->value.integer.value[0] == VAR_5->r0_reg)
  return 0;

 if (!VAR_4->card->instantiated)
  return 0;

 if (VAR_3->value.integer.value[0] == 0)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5->regmap);
 if (FUNC_4(VAR_4) == VAR_1) {
  VAR_5->r0_reg = VAR_3->value.integer.value[0];

  VAR_9 = 2147483648U;
  VAR_7 = VAR_9 / VAR_5->r0_reg / 128;
  VAR_8 = ((VAR_9 / VAR_5->r0_reg * 100) / 128)
      - (VAR_7 * 100);
  FUNC_0(VAR_6, "New r0 resistance about %d.%02d ohm, reg=0x%X\n",
   VAR_7, VAR_8, VAR_5->r0_reg);

  if (VAR_5->r0_reg)
   FUNC_2(VAR_5);
 }

 return 0;
}
