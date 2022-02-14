
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_chmap {int chmap; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {struct snd_pcm_chmap** chmaps; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
        struct snd_ctl_elem_value *VAR_4)
{
 struct snd_ac97 *VAR_5 = FUNC_1(VAR_3);
 struct snd_pcm_chmap *VAR_6 = VAR_5->chmaps[VAR_0];

 if (VAR_6) {
  if (VAR_4->value.integer.value[0])
   VAR_6->chmap = VAR_2;
  else
   VAR_6->chmap = VAR_1;
 }
 return FUNC_0(VAR_3, VAR_4);
}
