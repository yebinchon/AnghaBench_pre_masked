
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct snd_emu10k1 {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_emu10k1*,int,int) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
        struct snd_emu10k1 *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_4 = VAR_0->private_value & 0xff;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3);
 if (VAR_3) {
  VAR_1->value.integer.value[0] = 0xff - ((VAR_5 >> 24) & 0xff);
  VAR_1->value.integer.value[1] = 0xff - ((VAR_5 >> 16) & 0xff);
 } else {
  VAR_1->value.integer.value[0] = 0xff - ((VAR_5 >> 8) & 0xff);
  VAR_1->value.integer.value[1] = 0xff - ((VAR_5 >> 0) & 0xff);
 }
 return 0;
}
