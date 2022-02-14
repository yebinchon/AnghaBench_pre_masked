
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1_pcm_mixer {int* attn; TYPE_4__* epcm; } ;
struct snd_emu10k1 {int reg_lock; struct snd_emu10k1_pcm_mixer* pcm_mixer; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct TYPE_8__ {TYPE_3__** voices; } ;
struct TYPE_7__ {int number; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct snd_kcontrol*,int *) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int ,int) ;
 struct snd_emu10k1* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 unsigned long VAR_3;
 struct snd_emu10k1 *VAR_4 = FUNC_2(VAR_1);
 struct snd_emu10k1_pcm_mixer *VAR_5 =
  &VAR_4->pcm_mixer[FUNC_0(VAR_1, &VAR_2->id)];
 int VAR_6 = 0, VAR_7, VAR_8;

 FUNC_3(&VAR_4->reg_lock, VAR_3);
 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  VAR_8 = VAR_2->value.integer.value[VAR_7] & 0xffff;
  if (VAR_5->attn[VAR_7] != VAR_8) {
   VAR_5->attn[VAR_7] = VAR_8;
   VAR_6 = 1;
  }
 }
 if (VAR_6 && VAR_5->epcm) {
  if (VAR_5->epcm->voices[0] && VAR_5->epcm->voices[1]) {
   FUNC_1(VAR_4, VAR_0, VAR_5->epcm->voices[0]->number, VAR_5->attn[1]);
   FUNC_1(VAR_4, VAR_0, VAR_5->epcm->voices[1]->number, VAR_5->attn[2]);
  } else if (VAR_5->epcm->voices[0]) {
   FUNC_1(VAR_4, VAR_0, VAR_5->epcm->voices[0]->number, VAR_5->attn[0]);
  }
 }
 FUNC_4(&VAR_4->reg_lock, VAR_3);
 return VAR_6;
}
