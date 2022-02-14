
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct emu10k1x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct emu10k1x*,int) ;
 int FUNC_1 (struct emu10k1x*,int ,int ,int) ;
 struct emu10k1x* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_value *VAR_3)
{
 struct emu10k1x *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5;

 VAR_5 = VAR_3->value.integer.value[0] ;

 if (VAR_5) {

  FUNC_1(VAR_4, VAR_1, 0, 0x000);
  FUNC_1(VAR_4, VAR_0, 0, 0x700);
  FUNC_0(VAR_4, 0x1000);
 } else {

  FUNC_1(VAR_4, VAR_1, 0, 0x700);
  FUNC_1(VAR_4, VAR_0, 0, 0x1003F);
  FUNC_0(VAR_4, 0x1080);
 }
 return 0;
}
