
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_chmap_elem {int channels; int * map; } ;
struct snd_pcm_chmap {struct snd_pcm_chmap_elem* chmap; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; int id; } ;
struct TYPE_4__ {int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 unsigned int FUNC_1 (struct snd_kcontrol*,int *) ;
 struct snd_pcm_chmap* FUNC_2 (struct snd_kcontrol*) ;
 struct snd_pcm_substream* FUNC_3 (struct snd_pcm_chmap*,unsigned int) ;
 scalar_t__ FUNC_4 (struct snd_pcm_chmap*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct snd_pcm_chmap *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5 = FUNC_1(VAR_2, &VAR_3->id);
 struct snd_pcm_substream *VAR_6;
 const struct snd_pcm_chmap_elem *VAR_7;

 if (!VAR_4->chmap)
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_6)
  return -VAR_1;
 FUNC_0(VAR_3->value.integer.value, 0,
        sizeof(VAR_3->value.integer.value));
 if (!VAR_6->runtime)
  return 0;
 for (VAR_7 = VAR_4->chmap; VAR_7->channels; VAR_7++) {
  int VAR_8;
  if (VAR_7->channels == VAR_6->runtime->channels &&
      FUNC_4(VAR_4, VAR_7->channels)) {
   for (VAR_8 = 0; VAR_8 < VAR_7->channels; VAR_8++)
    VAR_3->value.integer.value[VAR_8] = VAR_7->map[VAR_8];
   return 0;
  }
 }
 return -VAR_0;
}
