
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct pcm512x_priv {int mute; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pcm512x_priv* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
            struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_3(VAR_0);
 struct pcm512x_priv *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(&VAR_3->mutex);
 VAR_1->value.integer.value[0] = !(VAR_3->mute & 0x4);
 VAR_1->value.integer.value[1] = !(VAR_3->mute & 0x2);
 FUNC_1(&VAR_3->mutex);

 return 0;
}
