
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct max9759 {size_t gain; TYPE_3__* gpiod_gain; } ;
struct TYPE_6__ {int * desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct max9759* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 int ** VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_2(VAR_2);
 struct max9759 *VAR_5 = FUNC_1(VAR_4);

 if (VAR_3->value.integer.value[0] > 3)
  return -VAR_0;

 VAR_5->gain = VAR_3->value.integer.value[0];


 FUNC_0(VAR_5->gpiod_gain->desc[0],
     VAR_1[VAR_5->gain][0]);

 FUNC_0(VAR_5->gpiod_gain->desc[1],
     VAR_1[VAR_5->gain][1]);

 return 1;
}
