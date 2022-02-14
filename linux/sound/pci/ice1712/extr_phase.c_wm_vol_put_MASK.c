
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {struct phase28_spec* spec; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct phase28_spec {unsigned int* vol; int * master; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
   struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_2(VAR_2);
 struct phase28_spec *VAR_5 = VAR_4->spec;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_9 = VAR_2->private_value >> 8;
 VAR_8 = VAR_2->private_value & 0xff;
 FUNC_1(VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  unsigned int VAR_11;
  VAR_11 = VAR_3->value.integer.value[VAR_6];
  if (VAR_11 > 0x7f)
   continue;
  VAR_11 |= VAR_5->vol[VAR_8+VAR_6] & VAR_1;
  if (VAR_11 != VAR_5->vol[VAR_8+VAR_6]) {
   VAR_5->vol[VAR_8+VAR_6] = VAR_11;
   VAR_7 = VAR_0 + VAR_8 + VAR_6;
   FUNC_3(VAR_4, VAR_7, VAR_5->vol[VAR_8+VAR_6],
       VAR_5->master[VAR_6]);
   VAR_10 = 1;
  }
 }
 FUNC_0(VAR_4);
 return VAR_10;
}
