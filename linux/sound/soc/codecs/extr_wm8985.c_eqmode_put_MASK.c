
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,unsigned int) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_14,
        struct snd_ctl_elem_value *VAR_15)
{
 struct snd_soc_component *VAR_16 = FUNC_3(VAR_14);
 unsigned int VAR_17, VAR_18;
 unsigned int VAR_19;

 if (VAR_15->value.enumerated.item[0] != 0
   && VAR_15->value.enumerated.item[0] != 1)
  return -VAR_0;

 VAR_19 = FUNC_0(VAR_16, VAR_6);
 switch ((VAR_19 & VAR_7) >> VAR_9) {
 case 0:
  if (!VAR_15->value.enumerated.item[0])
   return 0;
  break;
 case 1:
  if (VAR_15->value.enumerated.item[0])
   return 0;
  break;
 }

 VAR_17 = FUNC_0(VAR_16, VAR_12);
 VAR_18 = FUNC_0(VAR_16, VAR_13);

 FUNC_1(VAR_16, VAR_12,
       VAR_2 | VAR_1, 0);
 FUNC_1(VAR_16, VAR_13,
       VAR_5 | VAR_4, 0);
 FUNC_1(VAR_16, VAR_3,
       VAR_11, VAR_10);

 FUNC_1(VAR_16, VAR_6,
       VAR_8,
       VAR_15->value.enumerated.item[0]
       << VAR_9);

 FUNC_2(VAR_16, VAR_12, VAR_17);
 FUNC_2(VAR_16, VAR_13, VAR_18);
 return 0;
}
