
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_7,
       struct snd_ctl_elem_value *VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_2(VAR_7);
 unsigned int VAR_10 = FUNC_0(VAR_9, VAR_3);
 unsigned int VAR_11 = FUNC_0(VAR_9, VAR_1);


 if (VAR_8->value.enumerated.item[0] ==
     ((VAR_11 & VAR_6) != 0))
  return 0;


 if (VAR_10 & VAR_4)
  return -VAR_0;

 if (VAR_8->value.enumerated.item[0]) {

  VAR_11 &= ~(VAR_5 | VAR_2);
  VAR_11 |= VAR_6;
 } else {

  VAR_11 |= VAR_5 | VAR_2;
  VAR_11 &= ~VAR_6;
 }

 FUNC_1(VAR_9, VAR_1, VAR_11);

 return 0;
}
