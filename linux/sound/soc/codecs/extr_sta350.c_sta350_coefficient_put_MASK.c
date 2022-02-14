
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta350_priv {int* coef_shadow; int regmap; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__,unsigned int*) ;
 int FUNC_1 (int ,scalar_t__,unsigned int) ;
 struct sta350_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_5,
      struct snd_ctl_elem_value *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_3(VAR_5);
 struct sta350_priv *VAR_8 = FUNC_2(VAR_7);
 int VAR_9 = VAR_5->private_value >> 16;
 int VAR_10 = VAR_5->private_value & 0xffff;
 unsigned int VAR_11;
 int VAR_12;


 FUNC_0(VAR_8->regmap, VAR_3, &VAR_11);
 VAR_11 &= 0xf0;




 FUNC_1(VAR_8->regmap, VAR_3, VAR_11);

 FUNC_1(VAR_8->regmap, VAR_2, VAR_10);
 for (VAR_12 = 0; VAR_12 < VAR_9 && (VAR_10 + VAR_12 < VAR_4); VAR_12++)
  VAR_8->coef_shadow[VAR_10 + VAR_12] =
     (VAR_6->value.bytes.data[3 * VAR_12] << 16)
   | (VAR_6->value.bytes.data[3 * VAR_12 + 1] << 8)
   | (VAR_6->value.bytes.data[3 * VAR_12 + 2]);
 for (VAR_12 = 0; VAR_12 < 3 * VAR_9; VAR_12++)
  FUNC_1(VAR_8->regmap, VAR_1 + VAR_12,
        VAR_6->value.bytes.data[VAR_12]);
 if (VAR_9 == 1)
  FUNC_1(VAR_8->regmap, VAR_3, VAR_11 | 0x01);
 else if (VAR_9 == 5)
  FUNC_1(VAR_8->regmap, VAR_3, VAR_11 | 0x02);
 else
  return -VAR_0;

 return 0;
}
