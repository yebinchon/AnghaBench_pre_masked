
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident_pcm_mixer {scalar_t__ cvol; } ;
struct snd_trident {struct snd_trident_pcm_mixer* pcm_mixer; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 size_t FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_trident* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_trident *VAR_2 = FUNC_1(VAR_0);
 struct snd_trident_pcm_mixer *VAR_3 = &VAR_2->pcm_mixer[FUNC_0(VAR_0, &VAR_1->id)];

 VAR_1->value.integer.value[0] = 127 - VAR_3->cvol;
 return 0;
}
