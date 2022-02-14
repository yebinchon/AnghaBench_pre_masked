
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct cs47l15 {int in1_lp_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct cs47l15* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_9,
          struct snd_ctl_elem_value *VAR_10)
{
 struct snd_soc_component *VAR_11 =
  FUNC_2(VAR_9);
 struct cs47l15 *VAR_12 = FUNC_0(VAR_11);

 switch (VAR_10->value.integer.value[0]) {
 case 0:

  FUNC_1(VAR_11, VAR_6,
           VAR_7,
           5 << VAR_8);
  FUNC_1(VAR_11, VAR_0,
           VAR_1,
           4 << VAR_2);
  FUNC_1(VAR_11, VAR_3,
           VAR_4, 0);
  VAR_12->in1_lp_mode = 0;
  break;
 default:

  FUNC_1(VAR_11, VAR_6,
           VAR_7,
           4 << VAR_8);
  FUNC_1(VAR_11, VAR_0,
           VAR_1,
           1 << VAR_2);
  FUNC_1(VAR_11, VAR_3,
           VAR_4,
           3 << VAR_5);
  VAR_12->in1_lp_mode = 1;
  break;
 }

 return 0;
}
