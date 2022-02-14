
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
struct snd_akm4xxx {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_akm4xxx*,int,int) ;
 struct snd_akm4xxx* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_akm4xxx *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = FUNC_1(VAR_0->private_value);
 int VAR_4 = FUNC_0(VAR_0->private_value);
 int VAR_5 = FUNC_3(VAR_0->private_value);
 int VAR_6 = FUNC_2(VAR_0->private_value);

 unsigned char VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4) & (1<<VAR_5);
 if (VAR_6)
  VAR_7 = ! VAR_7;
 VAR_1->value.integer.value[0] = (VAR_7 & (1<<VAR_5)) != 0;
 return 0;
}
