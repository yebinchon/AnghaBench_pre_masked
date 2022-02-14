
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_4__ {scalar_t__* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*,int ,int) ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_4(VAR_2);
 unsigned char VAR_5 = VAR_2->private_value & 0xff;
 int VAR_6, VAR_7;

 if (VAR_2->private_value & (1 << 31))
  return -VAR_0;
 VAR_7 = VAR_3->value.enumerated.item[0] ? VAR_5 : 0;
 FUNC_2(VAR_4);
 VAR_6 = FUNC_0(VAR_4, VAR_1);
 VAR_7 |= VAR_6 & ~VAR_5;
 FUNC_3(VAR_4, VAR_1, VAR_7);
 FUNC_1(VAR_4);
 return VAR_6 != VAR_7;
}
