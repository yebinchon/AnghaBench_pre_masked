
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_i2c_device {int bus; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_i2c_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct snd_i2c_device* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_i2c_device *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_1(VAR_2->bus);
 VAR_3 = FUNC_0(VAR_2, VAR_0->private_value);
 FUNC_2(VAR_2->bus);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_1->value.integer.value[0] = VAR_3;
 return 0;
}
