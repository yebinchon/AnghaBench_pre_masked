
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct img_spdif_in {int lock; int * multi_freqs; scalar_t__ multi_freq; } ;


 struct snd_soc_dai* FUNC_0 (struct snd_kcontrol*) ;
 struct img_spdif_in* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dai *VAR_2 = FUNC_0(VAR_0);
 struct img_spdif_in *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 if (VAR_3->multi_freq) {
  VAR_1->value.integer.value[0] = VAR_3->multi_freqs[0];
  VAR_1->value.integer.value[1] = VAR_3->multi_freqs[1];
  VAR_1->value.integer.value[2] = VAR_3->multi_freqs[2];
  VAR_1->value.integer.value[3] = VAR_3->multi_freqs[3];
 } else {
  VAR_1->value.integer.value[0] = 0;
  VAR_1->value.integer.value[1] = 0;
  VAR_1->value.integer.value[2] = 0;
  VAR_1->value.integer.value[3] = 0;
 }
 FUNC_3(&VAR_3->lock, VAR_4);

 return 0;
}
