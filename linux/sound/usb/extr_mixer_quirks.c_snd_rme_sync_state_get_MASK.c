
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
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
 int VAR_7 ;


 int FUNC_0 (struct snd_kcontrol*,int*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_8,
      struct snd_ctl_elem_value *VAR_9)
{
 u32 VAR_10;
 int VAR_11 = VAR_6;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_8, &VAR_10);
 if (VAR_12 < 0)
  return VAR_12;
 switch (VAR_8->private_value) {
 case 129:
  if (VAR_10 & VAR_2)
   VAR_11 = VAR_7;
  else if (VAR_10 & VAR_1)
   VAR_11 = VAR_5;
  break;
 case 128:
  if (VAR_10 & VAR_4)
   VAR_11 = VAR_7;
  else if (VAR_10 & VAR_3)
   VAR_11 = VAR_5;
  break;
 default:
  return -VAR_0;
 }
 VAR_9->value.enumerated.item[0] = VAR_11;
 return 0;
}
