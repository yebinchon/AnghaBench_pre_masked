
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct TYPE_6__ {unsigned int index; } ;
struct snd_ctl_elem_value {TYPE_2__ value; TYPE_3__ id; } ;
struct echoaudio {int ** monitor_gain; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct echoaudio*) ;
 struct echoaudio* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct echoaudio *VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6 = VAR_4->id.index / FUNC_0(VAR_5);
 unsigned int VAR_7 = VAR_4->id.index % FUNC_0(VAR_5);

 if (VAR_6 >= VAR_1 || VAR_7 >= VAR_0)
  return -VAR_2;

 VAR_4->value.integer.value[0] = VAR_5->monitor_gain[VAR_6][VAR_7];
 return 0;
}
