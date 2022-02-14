
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_bytes {int num_regs; int base; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_2__ bytes; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct arizona {int regmap; int dev; } ;
typedef int __be16 ;
struct TYPE_4__ {int parent; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*) ;
 struct arizona* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,int) ;
 int FUNC_8 (int ,int ,unsigned int*) ;
 struct snd_soc_component* FUNC_9 (struct snd_kcontrol*) ;

int FUNC_10(struct snd_kcontrol *VAR_5,
    struct snd_ctl_elem_value *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_9(VAR_5);
 struct arizona *VAR_8 = FUNC_3(VAR_7->dev->parent);
 struct soc_bytes *VAR_9 = (void *)VAR_5->private_value;
 unsigned int VAR_10;
 __be16 *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = VAR_9->num_regs * FUNC_6(VAR_8->regmap);

 VAR_11 = FUNC_5(VAR_6->value.bytes.data, VAR_12, VAR_4 | VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11[0] &= FUNC_1(VAR_0);

 if (FUNC_0(!!VAR_11[0], VAR_11[1], VAR_11[2]) ||
     FUNC_0(1, VAR_11[4], VAR_11[5]) ||
     FUNC_0(1, VAR_11[8], VAR_11[9]) ||
     FUNC_0(1, VAR_11[12], VAR_11[13]) ||
     FUNC_0(0, VAR_11[16], VAR_11[17])) {
  FUNC_2(VAR_8->dev, "Rejecting unstable EQ coefficients\n");
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_8(VAR_8->regmap, VAR_9->base, &VAR_10);
 if (VAR_13 != 0)
  goto out;

 VAR_10 &= ~VAR_0;
 VAR_11[0] |= FUNC_1(VAR_10);

 VAR_13 = FUNC_7(VAR_8->regmap, VAR_9->base, VAR_11, VAR_12);

out:
 FUNC_4(VAR_11);
 return VAR_13;
}
