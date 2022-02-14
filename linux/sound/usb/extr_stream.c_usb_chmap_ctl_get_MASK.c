
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_usb_substream {TYPE_1__* cur_audiofmt; } ;
struct snd_pcm_chmap_elem {int channels; int * map; } ;
struct snd_pcm_chmap {struct snd_usb_substream* private_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {struct snd_pcm_chmap_elem* chmap; } ;


 int FUNC_0 (int *,int ,int) ;
 struct snd_pcm_chmap* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pcm_chmap *VAR_2 = FUNC_1(VAR_0);
 struct snd_usb_substream *VAR_3 = VAR_2->private_data;
 struct snd_pcm_chmap_elem *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_0(VAR_1->value.integer.value, 0,
        sizeof(VAR_1->value.integer.value));
 if (VAR_3->cur_audiofmt)
  VAR_4 = VAR_3->cur_audiofmt->chmap;
 if (VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_4->channels; VAR_5++)
   VAR_1->value.integer.value[VAR_5] = VAR_4->map[VAR_5];
 }
 return 0;
}
