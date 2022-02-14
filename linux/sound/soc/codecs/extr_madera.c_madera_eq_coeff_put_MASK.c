
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_bytes {int num_regs; int base; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {int regmap; int dev; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int,int) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int *,int) ;
 int FUNC_7 (int ,int ,unsigned int*) ;
 struct madera_priv* FUNC_8 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_9 (struct snd_kcontrol*) ;

int FUNC_10(struct snd_kcontrol *VAR_5,
   struct snd_ctl_elem_value *VAR_6)
{
 struct snd_soc_component *VAR_7 =
  FUNC_9(VAR_5);
 struct madera_priv *VAR_8 = FUNC_8(VAR_7);
 struct madera *VAR_9 = VAR_8->madera;
 struct soc_bytes *VAR_10 = (void *)VAR_5->private_value;
 unsigned int VAR_11;
 __be16 *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = VAR_10->num_regs * FUNC_5(VAR_9->regmap);

 VAR_12 = FUNC_3(VAR_6->value.bytes.data, VAR_13, VAR_3 | VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12[0] &= FUNC_0(VAR_4);

 if (FUNC_4(!!VAR_12[0], VAR_12[1], VAR_12[2]) ||
     FUNC_4(1, VAR_12[4], VAR_12[5]) ||
     FUNC_4(1, VAR_12[8], VAR_12[9]) ||
     FUNC_4(1, VAR_12[12], VAR_12[13]) ||
     FUNC_4(0, VAR_12[16], VAR_12[17])) {
  FUNC_1(VAR_9->dev, "Rejecting unstable EQ coefficients\n");
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_7(VAR_9->regmap, VAR_10->base, &VAR_11);
 if (VAR_14 != 0)
  goto out;

 VAR_11 &= ~VAR_4;
 VAR_12[0] |= FUNC_0(VAR_11);

 VAR_14 = FUNC_6(VAR_9->regmap, VAR_10->base, VAR_12, VAR_13);

out:
 FUNC_2(VAR_12);

 return VAR_14;
}
