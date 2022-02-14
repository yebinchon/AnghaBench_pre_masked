
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {scalar_t__ mic_volume; TYPE_3__* mgr; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int mixer_mutex; } ;


 int FUNC_0 (struct snd_pcxhr*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_pcxhr* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pcxhr *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = 0;
 FUNC_1(&VAR_2->mgr->mixer_mutex);
 if (VAR_2->mic_volume != VAR_1->value.integer.value[0]) {
  VAR_3 = 1;
  VAR_2->mic_volume = VAR_1->value.integer.value[0];
  FUNC_0(VAR_2, 1, 0);
 }
 FUNC_2(&VAR_2->mgr->mixer_mutex);
 return VAR_3;
}
