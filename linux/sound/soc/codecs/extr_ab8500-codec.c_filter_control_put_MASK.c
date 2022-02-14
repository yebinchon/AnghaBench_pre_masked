
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct filter_control {unsigned int count; int * value; } ;
struct ab8500_codec_drvdata {int ctrl_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ab8500_codec_drvdata* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
  struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_3(VAR_0);
 struct ab8500_codec_drvdata *VAR_3 = FUNC_2(VAR_2);
 struct filter_control *VAR_4 =
   (struct filter_control *)VAR_0->private_value;
 unsigned int VAR_5;

 FUNC_0(&VAR_3->ctrl_lock);
 for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++)
  VAR_4->value[VAR_5] = VAR_1->value.integer.value[VAR_5];
 FUNC_1(&VAR_3->ctrl_lock);

 return 0;
}
