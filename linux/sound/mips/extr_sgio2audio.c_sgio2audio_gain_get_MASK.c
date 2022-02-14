
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sgio2audio {int ad1843; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *,int) ;
 struct snd_sgio2audio* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct snd_sgio2audio *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->ad1843, (int)VAR_0->private_value);

 VAR_1->value.integer.value[0] = (VAR_3 >> 8) & 0xFF;
 VAR_1->value.integer.value[1] = VAR_3 & 0xFF;

 return 0;
}
