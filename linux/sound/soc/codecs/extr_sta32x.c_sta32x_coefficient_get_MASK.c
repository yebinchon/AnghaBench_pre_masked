
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta32x_priv {int coeff_lock; int regmap; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,unsigned int*) ;
 int FUNC_3 (int ,scalar_t__,unsigned int) ;
 struct sta32x_priv* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_4,
      struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_5(VAR_4);
 struct sta32x_priv *VAR_7 = FUNC_4(VAR_6);
 int VAR_8 = VAR_4->private_value >> 16;
 int VAR_9 = VAR_4->private_value & 0xffff;
 unsigned int VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;

 FUNC_0(&VAR_7->coeff_lock);


 FUNC_2(VAR_7->regmap, VAR_3, &VAR_10);
 VAR_10 &= 0xf0;




 FUNC_3(VAR_7->regmap, VAR_3, VAR_10);

 FUNC_3(VAR_7->regmap, VAR_2, VAR_9);
 if (VAR_8 == 1) {
  FUNC_3(VAR_7->regmap, VAR_3, VAR_10 | 0x04);
 } else if (VAR_8 == 5) {
  FUNC_3(VAR_7->regmap, VAR_3, VAR_10 | 0x08);
 } else {
  VAR_13 = -VAR_0;
  goto exit_unlock;
 }

 for (VAR_12 = 0; VAR_12 < 3 * VAR_8; VAR_12++) {
  FUNC_2(VAR_7->regmap, VAR_1 + VAR_12, &VAR_11);
  VAR_5->value.bytes.data[VAR_12] = VAR_11;
 }

exit_unlock:
 FUNC_1(&VAR_7->coeff_lock);

 return VAR_13;
}
