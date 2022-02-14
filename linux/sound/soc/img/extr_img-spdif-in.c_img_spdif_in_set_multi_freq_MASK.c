
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct img_spdif_in {int multi_freq; int lock; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct img_spdif_in*,unsigned int*) ;
 struct snd_soc_dai* FUNC_1 (struct snd_kcontrol*) ;
 struct img_spdif_in* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_dai *VAR_4 = FUNC_1(VAR_2);
 struct img_spdif_in *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6[VAR_1];
 bool VAR_7;
 unsigned long VAR_8;

 if ((VAR_3->value.integer.value[0] == 0) &&
   (VAR_3->value.integer.value[1] == 0) &&
   (VAR_3->value.integer.value[2] == 0) &&
   (VAR_3->value.integer.value[3] == 0)) {
  VAR_7 = 0;
 } else {
  VAR_6[0] = VAR_3->value.integer.value[0];
  VAR_6[1] = VAR_3->value.integer.value[1];
  VAR_6[2] = VAR_3->value.integer.value[2];
  VAR_6[3] = VAR_3->value.integer.value[3];
  VAR_7 = 1;
 }

 if (VAR_7)
  return FUNC_0(VAR_5, VAR_6);

 FUNC_3(&VAR_5->lock, VAR_8);

 if (VAR_5->active) {
  FUNC_4(&VAR_5->lock, VAR_8);
  return -VAR_0;
 }

 VAR_5->multi_freq = 0;

 FUNC_4(&VAR_5->lock, VAR_8);

 return 0;
}
