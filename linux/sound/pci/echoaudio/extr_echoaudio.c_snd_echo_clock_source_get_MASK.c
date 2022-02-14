
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct echoaudio {int input_clock; int num_clock_sources; int* clock_source_list; } ;


 struct echoaudio* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct echoaudio *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_0);
 VAR_4 = VAR_2->input_clock;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_clock_sources; VAR_3++)
  if (VAR_4 == VAR_2->clock_source_list[VAR_3])
   VAR_1->value.enumerated.item[0] = VAR_3;

 return 0;
}
