
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ca0106 {int dummy; } ;


 unsigned int FUNC_0 (struct snd_ca0106*,int,int) ;
 struct snd_ca0106* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
        struct snd_ca0106 *VAR_2 = FUNC_1(VAR_0);
        unsigned int VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = (VAR_0->private_value >> 8) & 0xff;
 VAR_5 = VAR_0->private_value & 0xff;

        VAR_3 = FUNC_0(VAR_2, VAR_5, VAR_4);
        VAR_1->value.integer.value[0] = 0xff - ((VAR_3 >> 24) & 0xff);
        VAR_1->value.integer.value[1] = 0xff - ((VAR_3 >> 16) & 0xff);
        return 0;
}
