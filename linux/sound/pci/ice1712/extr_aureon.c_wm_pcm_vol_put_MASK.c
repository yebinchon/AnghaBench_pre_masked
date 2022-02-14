
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {unsigned short* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ,unsigned short) ;
 int FUNC_5 (struct snd_ice1712*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_4, struct snd_ctl_elem_value *VAR_5)
{
 struct snd_ice1712 *VAR_6 = FUNC_2(VAR_4);
 unsigned short VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_5->value.integer.value[0];
 if (VAR_8 > VAR_2)
  return -VAR_0;
 FUNC_1(VAR_6);
 VAR_8 = (VAR_8 ? (VAR_8 + VAR_1) : 0) & 0xff;
 VAR_7 = FUNC_3(VAR_6, VAR_3) & 0xff;
 if (VAR_7 != VAR_8) {
  FUNC_4(VAR_6, VAR_3, VAR_8);
  FUNC_5(VAR_6, VAR_3, VAR_8 | 0x100);
  VAR_9 = 1;
 }
 FUNC_0(VAR_6);
 return VAR_9;
}
