
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
struct snd_ad1816a {int lock; } ;


 unsigned short FUNC_0 (struct snd_ad1816a*,int) ;
 int FUNC_1 (struct snd_ad1816a*,int,unsigned short) ;
 struct snd_ad1816a* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ad1816a *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;
 int VAR_4 = VAR_0->private_value & 0xff;
 int VAR_5 = (VAR_0->private_value >> 8) & 0x0f;
 int VAR_6 = (VAR_0->private_value >> 12) & 0x0f;
 int VAR_7 = (VAR_0->private_value >> 16) & 0xff;
 int VAR_8 = (VAR_0->private_value >> 24) & 0xff;
 int VAR_9;
 unsigned short VAR_10, VAR_11, VAR_12;

 VAR_11 = VAR_1->value.integer.value[0] & VAR_7;
 VAR_12 = VAR_1->value.integer.value[1] & VAR_7;
 if (VAR_8) {
  VAR_11 = VAR_7 - VAR_11;
  VAR_12 = VAR_7 - VAR_12;
 }
 VAR_11 <<= VAR_5;
 VAR_12 <<= VAR_6;
 FUNC_3(&VAR_2->lock, VAR_3);
 VAR_10 = FUNC_0(VAR_2, VAR_4);
 VAR_11 = (VAR_10 & ~((VAR_7 << VAR_5) | (VAR_7 << VAR_6))) | VAR_11 | VAR_12;
 VAR_9 = VAR_11 != VAR_10;
 FUNC_1(VAR_2, VAR_4, VAR_11);
 FUNC_4(&VAR_2->lock, VAR_3);
 return VAR_9;
}
