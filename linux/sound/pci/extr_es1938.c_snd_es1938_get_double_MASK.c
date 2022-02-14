
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned char* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct es1938 {int dummy; } ;


 unsigned char FUNC_0 (struct es1938*,int) ;
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
 unsigned char VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_2, VAR_3);
 if (VAR_3 != VAR_4)
  VAR_10 = FUNC_0(VAR_2, VAR_4);
 else
  VAR_10 = VAR_9;
 VAR_1->value.integer.value[0] = (VAR_9 >> VAR_5) & VAR_7;
 VAR_1->value.integer.value[1] = (VAR_10 >> VAR_6) & VAR_7;
 if (VAR_8) {
  VAR_1->value.integer.value[0] = VAR_7 - VAR_1->value.integer.value[0];
  VAR_1->value.integer.value[1] = VAR_7 - VAR_1->value.integer.value[1];
 }
 return 0;
}
