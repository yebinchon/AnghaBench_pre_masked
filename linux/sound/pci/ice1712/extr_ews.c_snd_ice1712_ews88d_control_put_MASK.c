
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {int i2c; struct ews_spec* spec; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ews_spec {int * i2cdevs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ) ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_4(VAR_2);
 struct ews_spec *VAR_5 = VAR_4->spec;
 int VAR_6 = VAR_2->private_value & 0xff;
 int VAR_7 = (VAR_2->private_value >> 8) & 1;
 unsigned char VAR_8[2], VAR_9[2];
 int VAR_10;

 FUNC_0(VAR_4->i2c);
 if (FUNC_1(VAR_5->i2cdevs[VAR_1], VAR_8, 2) != 2) {
  FUNC_3(VAR_4->i2c);
  return -VAR_0;
 }
 VAR_9[VAR_6 >> 3] = VAR_8[VAR_6 >> 3] & ~(1 << (VAR_6 & 7));
 if (VAR_7) {
  if (! VAR_3->value.integer.value[0])
   VAR_9[VAR_6 >> 3] |= (1 << (VAR_6 & 7));
 } else {
  if (VAR_3->value.integer.value[0])
   VAR_9[VAR_6 >> 3] |= (1 << (VAR_6 & 7));
 }
 VAR_10 = (VAR_8[VAR_6 >> 3] != VAR_9[VAR_6 >> 3]);
 if (VAR_10 &&
     FUNC_2(VAR_5->i2cdevs[VAR_1], VAR_8, 2) != 2) {
  FUNC_3(VAR_4->i2c);
  return -VAR_0;
 }
 FUNC_3(VAR_4->i2c);
 return VAR_10;
}
