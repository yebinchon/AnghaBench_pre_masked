
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_dummy {int** mixer_volume; int mixer_lock; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_dummy* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct snd_dummy *VAR_2 = FUNC_0(VAR_0);
 int VAR_3, VAR_4 = VAR_0->private_value;
 int VAR_5, VAR_6;

 VAR_5 = VAR_1->value.integer.value[0];
 if (VAR_5 < -50)
  VAR_5 = -50;
 if (VAR_5 > 100)
  VAR_5 = 100;
 VAR_6 = VAR_1->value.integer.value[1];
 if (VAR_6 < -50)
  VAR_6 = -50;
 if (VAR_6 > 100)
  VAR_6 = 100;
 FUNC_1(&VAR_2->mixer_lock);
 VAR_3 = VAR_2->mixer_volume[VAR_4][0] != VAR_5 ||
          VAR_2->mixer_volume[VAR_4][1] != VAR_6;
 VAR_2->mixer_volume[VAR_4][0] = VAR_5;
 VAR_2->mixer_volume[VAR_4][1] = VAR_6;
 FUNC_2(&VAR_2->mixer_lock);
 return VAR_3;
}
