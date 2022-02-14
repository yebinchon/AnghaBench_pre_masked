
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xonar_pcm179x {int hp_gain_offset; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct xonar_pcm179x* model_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct oxygen *VAR_2 = VAR_0->private_data;
 struct xonar_pcm179x *VAR_3 = VAR_2->model_data;

 FUNC_0(&VAR_2->mutex);
 if (VAR_3->hp_gain_offset < 2*-12)
  VAR_1->value.enumerated.item[0] = 0;
 else if (VAR_3->hp_gain_offset < 2*-6)
  VAR_1->value.enumerated.item[0] = 1;
 else if (VAR_3->hp_gain_offset < 0)
  VAR_1->value.enumerated.item[0] = 2;
 else
  VAR_1->value.enumerated.item[0] = 3;
 FUNC_1(&VAR_2->mutex);
 return 0;
}
