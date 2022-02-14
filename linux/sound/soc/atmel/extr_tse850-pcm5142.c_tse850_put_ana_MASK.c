
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tse850_priv {int ana; } ;
struct soc_enum {unsigned int items; } ;
struct snd_soc_dapm_context {struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;
 struct tse850_priv* FUNC_1 (struct snd_soc_card*) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_dapm_context *VAR_3 = FUNC_2(VAR_1);
 struct snd_soc_card *VAR_4 = VAR_3->card;
 struct tse850_priv *VAR_5 = FUNC_1(VAR_4);
 struct soc_enum *VAR_6 = (struct soc_enum *)VAR_1->private_value;
 unsigned int VAR_7 = VAR_2->value.enumerated.item[0];
 int VAR_8;

 if (VAR_7 >= VAR_6->items)
  return -VAR_0;
 if (VAR_7)
  VAR_7 = 11000000 + (1000000 * VAR_7);
 else
  VAR_7 = 2000000;

 VAR_8 = FUNC_0(VAR_5->ana, VAR_7, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_3(VAR_1, VAR_2);
}
