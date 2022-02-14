
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_es18xx {scalar_t__ port; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_es18xx*,int) ;
 struct snd_es18xx* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3, struct snd_ctl_elem_value *VAR_4)
{
 struct snd_es18xx *VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = VAR_3->private_value & 0xff;
 int VAR_7 = (VAR_3->private_value >> 8) & 0xff;
 int VAR_8 = (VAR_3->private_value >> 16) & 0xff;
 int VAR_9 = (VAR_3->private_value >> 24) & VAR_0;
 int VAR_10 = (VAR_3->private_value >> 24) & VAR_1;
 int VAR_11;

 if (VAR_10)
  VAR_11 = FUNC_0(VAR_5->port + VAR_2);
 else
  VAR_11 = FUNC_1(VAR_5, VAR_6);
 VAR_4->value.integer.value[0] = (VAR_11 >> VAR_7) & VAR_8;
 if (VAR_9)
  VAR_4->value.integer.value[0] = VAR_8 - VAR_4->value.integer.value[0];
 return 0;
}
