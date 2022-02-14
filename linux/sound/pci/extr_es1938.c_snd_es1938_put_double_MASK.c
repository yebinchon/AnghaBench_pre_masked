
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
struct es1938 {int dummy; } ;


 unsigned char FUNC_0 (struct es1938*,int,unsigned char,unsigned char) ;
 struct es1938* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct es1938 *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = VAR_0->private_value & 0xff;
 int VAR_4 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_5 = (VAR_0->private_value >> 16) & 0x07;
 int VAR_6 = (VAR_0->private_value >> 19) & 0x07;
 int VAR_7 = (VAR_0->private_value >> 24) & 0xff;
 int VAR_8 = (VAR_0->private_value >> 22) & 1;
 int VAR_9;
 unsigned char VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = VAR_1->value.integer.value[0] & VAR_7;
 VAR_11 = VAR_1->value.integer.value[1] & VAR_7;
 if (VAR_8) {
  VAR_10 = VAR_7 - VAR_10;
  VAR_11 = VAR_7 - VAR_11;
 }
 VAR_10 <<= VAR_5;
 VAR_11 <<= VAR_6;
 VAR_12 = VAR_7 << VAR_5;
 VAR_13 = VAR_7 << VAR_6;
 if (VAR_3 != VAR_4) {
  VAR_9 = 0;
  if (FUNC_0(VAR_2, VAR_3, VAR_12, VAR_10) != VAR_10)
   VAR_9 = 1;
  if (FUNC_0(VAR_2, VAR_4, VAR_13, VAR_11) != VAR_11)
   VAR_9 = 1;
 } else {
  VAR_9 = (FUNC_0(VAR_2, VAR_3, VAR_12 | VAR_13,
           VAR_10 | VAR_11) != (VAR_10 | VAR_11));
 }
 return VAR_9;
}
