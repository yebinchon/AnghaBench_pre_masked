
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct snd_ac97*,int ,int ,unsigned short) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_15,
           struct snd_ctl_elem_value *VAR_16)
{
 struct snd_ac97 *VAR_17 = FUNC_1(VAR_15);
 unsigned short VAR_18;
 unsigned short VAR_19;
 unsigned short VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;

 switch (VAR_16->value.enumerated.item[0])
 {
 case 0:
  VAR_18 = 0;
  VAR_19 = 0;
  VAR_20 = 0;
  break;
 case 1:
  VAR_18 = VAR_2;
  VAR_19 = VAR_6;
  VAR_20 = VAR_10;
  break;
 case 2:
  VAR_18 = VAR_0;
  VAR_19 = VAR_4;
  VAR_20 = VAR_8;
  break;
 case 3:
  VAR_18 = VAR_1;
  VAR_19 = VAR_5;
  VAR_20 = VAR_9;
  break;
 default:
  return -VAR_14;
 }

 VAR_21 = FUNC_0(VAR_17, VAR_12,
        VAR_3, VAR_18);
 if (VAR_21 < 0)
  return VAR_21;
 VAR_22 = FUNC_0(VAR_17, VAR_13,
        VAR_7, VAR_19);
 if (VAR_22 < 0)
  return VAR_22;
 VAR_23 = FUNC_0(VAR_17, VAR_12,
        VAR_11, VAR_20);
 if (VAR_23 < 0)
  return VAR_23;

 return (VAR_21 > 0 || VAR_22 > 0 || VAR_23 > 0) ? 1 : 0;
}
