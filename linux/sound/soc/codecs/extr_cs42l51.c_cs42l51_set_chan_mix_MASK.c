
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_soc_component*,int ,unsigned char) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_4,
   struct snd_ctl_elem_value *VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_1(VAR_4);
 unsigned char VAR_7;

 switch (VAR_5->value.enumerated.item[0]) {
 default:
 case 0:
  VAR_7 = VAR_1;
  break;
 case 1:
  VAR_7 = VAR_0;
  break;
 case 2:
  VAR_7 = VAR_2;
  break;
 }

 FUNC_0(VAR_6, VAR_3, VAR_7);

 return 1;
}
