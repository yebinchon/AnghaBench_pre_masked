
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct i2c_client {int dummy; } ;


 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct i2c_client*,int,int ,int) ;
 struct i2c_client* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_0(VAR_0);
 struct i2c_client *VAR_3 = FUNC_2(VAR_2->dev);
 int VAR_4 = VAR_0->private_value >> 16;
 int VAR_5 = VAR_0->private_value & 0xffff;

 return FUNC_1(VAR_3, VAR_5,
  VAR_1->value.integer.value, VAR_4);
}
