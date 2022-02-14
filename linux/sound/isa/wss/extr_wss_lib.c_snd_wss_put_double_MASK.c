
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_wss {int* image; int reg_lock; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_wss* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_wss*,int,unsigned short) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_wss *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;
 int VAR_4 = VAR_0->private_value & 0xff;
 int VAR_5 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_6 = (VAR_0->private_value >> 16) & 0x07;
 int VAR_7 = (VAR_0->private_value >> 19) & 0x07;
 int VAR_8 = (VAR_0->private_value >> 24) & 0xff;
 int VAR_9 = (VAR_0->private_value >> 22) & 1;
 int VAR_10;
 unsigned short VAR_11, VAR_12;

 VAR_11 = VAR_1->value.integer.value[0] & VAR_8;
 VAR_12 = VAR_1->value.integer.value[1] & VAR_8;
 if (VAR_9) {
  VAR_11 = VAR_8 - VAR_11;
  VAR_12 = VAR_8 - VAR_12;
 }
 VAR_11 <<= VAR_6;
 VAR_12 <<= VAR_7;
 FUNC_2(&VAR_2->reg_lock, VAR_3);
 if (VAR_4 != VAR_5) {
  VAR_11 = (VAR_2->image[VAR_4] & ~(VAR_8 << VAR_6)) | VAR_11;
  VAR_12 = (VAR_2->image[VAR_5] & ~(VAR_8 << VAR_7)) | VAR_12;
  VAR_10 = VAR_11 != VAR_2->image[VAR_4] ||
    VAR_12 != VAR_2->image[VAR_5];
  FUNC_1(VAR_2, VAR_4, VAR_11);
  FUNC_1(VAR_2, VAR_5, VAR_12);
 } else {
  VAR_8 = (VAR_8 << VAR_6) | (VAR_8 << VAR_7);
  VAR_11 = (VAR_2->image[VAR_4] & ~VAR_8) | VAR_11 | VAR_12;
  VAR_10 = VAR_11 != VAR_2->image[VAR_4];
  FUNC_1(VAR_2, VAR_4, VAR_11);
 }
 FUNC_3(&VAR_2->reg_lock, VAR_3);
 return VAR_10;
}
