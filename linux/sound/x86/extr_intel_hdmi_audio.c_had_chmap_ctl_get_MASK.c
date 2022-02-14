
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_chmap_elem {int channels; int * map; } ;
struct snd_pcm_chmap {struct snd_intelhad* private_data; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_intelhad {int mutex; TYPE_1__* chmap; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {struct snd_pcm_chmap_elem* chmap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_pcm_chmap* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct snd_pcm_chmap *VAR_3 = FUNC_3(VAR_1);
 struct snd_intelhad *VAR_4 = VAR_3->private_data;
 int VAR_5;
 const struct snd_pcm_chmap_elem *VAR_6;

 FUNC_0(VAR_2->value.integer.value, 0,
        sizeof(long) * VAR_0);
 FUNC_1(&VAR_4->mutex);
 if (!VAR_4->chmap->chmap) {
  FUNC_2(&VAR_4->mutex);
  return 0;
 }

 VAR_6 = VAR_4->chmap->chmap;
 for (VAR_5 = 0; VAR_5 < VAR_6->channels; VAR_5++)
  VAR_2->value.integer.value[VAR_5] = VAR_6->map[VAR_5];
 FUNC_2(&VAR_4->mutex);

 return 0;
}
