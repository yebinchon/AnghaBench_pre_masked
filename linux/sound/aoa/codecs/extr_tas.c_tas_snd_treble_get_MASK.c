
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tas {int mtx; int treble; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tas* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct tas *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->mtx);
 VAR_1->value.integer.value[0] = VAR_2->treble;
 FUNC_1(&VAR_2->mtx);
 return 0;
}
