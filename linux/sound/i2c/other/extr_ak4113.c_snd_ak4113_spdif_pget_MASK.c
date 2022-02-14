
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ak4113 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ak4113*,int ) ;
 struct ak4113* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_4,
     struct snd_ctl_elem_value *VAR_5)
{
 struct ak4113 *VAR_6 = FUNC_1(VAR_4);
 unsigned short VAR_7;

 VAR_5->value.integer.value[0] = 0xf8f2;
 VAR_5->value.integer.value[1] = 0x4e1f;
 VAR_7 = FUNC_0(VAR_6, VAR_0) |
  (FUNC_0(VAR_6, VAR_1) << 8);
 VAR_5->value.integer.value[2] = VAR_7;
 VAR_7 = FUNC_0(VAR_6, VAR_2) |
  (FUNC_0(VAR_6, VAR_3) << 8);
 VAR_5->value.integer.value[3] = VAR_7;
 return 0;
}
