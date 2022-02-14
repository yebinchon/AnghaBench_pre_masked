
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_chmap {int max_channels; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int max; scalar_t__ min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {TYPE_1__ value; int count; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_pcm_chmap* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_info *VAR_3)
{
 struct snd_pcm_chmap *VAR_4 = FUNC_0(VAR_2);

 VAR_3->type = VAR_1;
 VAR_3->count = 0;
 VAR_3->count = VAR_4->max_channels;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = VAR_0;
 return 0;
}
