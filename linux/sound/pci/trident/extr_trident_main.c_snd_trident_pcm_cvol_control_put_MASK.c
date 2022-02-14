
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident_pcm_mixer {unsigned short cvol; int * voice; } ;
struct snd_trident {int reg_lock; struct snd_trident_pcm_mixer* pcm_mixer; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 size_t FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_trident* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_trident*,int *,unsigned short) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_trident *VAR_2 = FUNC_1(VAR_0);
 struct snd_trident_pcm_mixer *VAR_3 = &VAR_2->pcm_mixer[FUNC_0(VAR_0, &VAR_1->id)];
 unsigned short VAR_4;
 int VAR_5 = 0;

 VAR_4 = 0x7f - (VAR_1->value.integer.value[0] & 0x7f);
 FUNC_3(&VAR_2->reg_lock);
 VAR_5 = VAR_4 != VAR_3->cvol;
 VAR_3->cvol = VAR_4;
 if (VAR_3->voice != ((void*)0))
  FUNC_2(VAR_2, VAR_3->voice, VAR_4);
 FUNC_4(&VAR_2->reg_lock);
 return VAR_5;
}
