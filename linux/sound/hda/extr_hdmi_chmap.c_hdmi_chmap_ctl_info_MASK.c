
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_chmap {struct hdac_chmap* private_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;
struct hdac_chmap {int channels_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_pcm_chmap* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_info *VAR_3)
{
 struct snd_pcm_chmap *VAR_4 = FUNC_0(VAR_2);
 struct hdac_chmap *VAR_5 = VAR_4->private_data;

 VAR_3->type = VAR_1;
 VAR_3->count = VAR_5->channels_max;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = VAR_0;
 return 0;
}
