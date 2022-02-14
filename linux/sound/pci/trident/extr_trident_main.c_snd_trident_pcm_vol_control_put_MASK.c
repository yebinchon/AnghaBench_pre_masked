
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident_pcm_mixer {unsigned int vol; int * voice; } ;
struct snd_trident {scalar_t__ device; int reg_lock; struct snd_trident_pcm_mixer* pcm_mixer; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_trident* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_trident*,int *,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct snd_trident *VAR_3 = FUNC_1(VAR_1);
 struct snd_trident_pcm_mixer *VAR_4 = &VAR_3->pcm_mixer[FUNC_0(VAR_1, &VAR_2->id)];
 unsigned int VAR_5;
 int VAR_6 = 0;

 if (VAR_3->device == VAR_0) {
  VAR_5 = 1023 - (VAR_2->value.integer.value[0] & 1023);
 } else {
  VAR_5 = (255 - (VAR_2->value.integer.value[0] & 255)) << 2;
 }
 FUNC_3(&VAR_3->reg_lock);
 VAR_6 = VAR_5 != VAR_4->vol;
 VAR_4->vol = VAR_5;
 if (VAR_4->voice != ((void*)0))
  FUNC_2(VAR_3, VAR_4->voice, VAR_5);
 FUNC_4(&VAR_3->reg_lock);
 return VAR_6;
}
