
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
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 unsigned char FUNC_2 (struct snd_es18xx*,int,int,unsigned char) ;
 struct snd_es18xx* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3, struct snd_ctl_elem_value *VAR_4)
{
 struct snd_es18xx *VAR_5 = FUNC_3(VAR_3);
 int VAR_6 = VAR_3->private_value & 0xff;
 int VAR_7 = (VAR_3->private_value >> 8) & 0xff;
 int VAR_8 = (VAR_3->private_value >> 16) & 0xff;
 int VAR_9 = (VAR_3->private_value >> 24) & VAR_0;
 int VAR_10 = (VAR_3->private_value >> 24) & VAR_1;
 unsigned char VAR_11;

 VAR_11 = (VAR_4->value.integer.value[0] & VAR_8);
 if (VAR_9)
  VAR_11 = VAR_8 - VAR_11;
 VAR_8 <<= VAR_7;
 VAR_11 <<= VAR_7;
 if (VAR_10) {
  unsigned char VAR_12 = FUNC_0(VAR_5->port + VAR_2);

  if ((VAR_12 & VAR_8) == VAR_11)
   return 0;
  FUNC_1((VAR_12 & ~VAR_8) | VAR_11, VAR_5->port + VAR_2);
  return 1;
 }

 return FUNC_2(VAR_5, VAR_6, VAR_8, VAR_11) != VAR_11;
}
