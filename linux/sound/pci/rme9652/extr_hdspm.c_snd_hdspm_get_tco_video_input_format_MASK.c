
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdspm {int dummy; } ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (struct hdspm*,scalar_t__) ;
 struct hdspm* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 u32 VAR_3;
 int VAR_4 = 0;

 struct hdspm *VAR_5 = FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_5, VAR_0 + 4);
 switch (VAR_3 & (129 |
   128)) {
 case 129:

  VAR_4 = 1;
  break;
 case 128:

  VAR_4 = 2;
  break;
 default:

  VAR_4 = 0;
  break;
 }
 VAR_2->value.enumerated.item[0] = VAR_4;
 return 0;
}
