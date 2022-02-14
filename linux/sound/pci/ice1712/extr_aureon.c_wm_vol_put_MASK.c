
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {struct aureon_spec* spec; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct aureon_spec {unsigned int* vol; int * master; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3, struct snd_ctl_elem_value *VAR_4)
{
 struct snd_ice1712 *VAR_5 = FUNC_2(VAR_3);
 struct aureon_spec *VAR_6 = VAR_5->spec;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_10 = VAR_3->private_value >> 8;
 VAR_9 = VAR_3->private_value & 0xff;
 FUNC_1(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  unsigned int VAR_12 = VAR_4->value.integer.value[VAR_7];
  if (VAR_12 > VAR_1)
   VAR_12 = VAR_1;
  VAR_12 |= VAR_6->vol[VAR_9+VAR_7] & VAR_2;
  if (VAR_12 != VAR_6->vol[VAR_9+VAR_7]) {
   VAR_6->vol[VAR_9+VAR_7] = VAR_12;
   VAR_8 = VAR_0 + VAR_9 + VAR_7;
   FUNC_3(VAR_5, VAR_8, VAR_6->vol[VAR_9 + VAR_7],
       VAR_6->master[VAR_7]);
   VAR_11 = 1;
  }
 }
 FUNC_0(VAR_5);
 return VAR_11;
}
