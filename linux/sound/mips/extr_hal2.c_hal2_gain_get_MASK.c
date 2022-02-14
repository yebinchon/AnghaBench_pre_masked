
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_hal2 {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (struct snd_hal2*,int ) ;
 struct snd_hal2* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_8,
          struct snd_ctl_elem_value *VAR_9)
{
 struct snd_hal2 *VAR_10 = FUNC_1(VAR_8);
 u32 VAR_11;
 int VAR_12, VAR_13;

 switch ((int)VAR_8->private_value) {
 case 128:
  VAR_11 = FUNC_0(VAR_10, VAR_7);
  if (VAR_11 & VAR_4) {
   VAR_12 = 0;
   VAR_13 = 0;
  } else {
   VAR_12 = 31 - ((VAR_11 >> VAR_2) & 31);
   VAR_13 = 31 - ((VAR_11 >> VAR_5) & 31);
  }
  break;
 case 129:
  VAR_11 = FUNC_0(VAR_10, VAR_1);
  VAR_12 = (VAR_11 >> VAR_3) & 15;
  VAR_13 = (VAR_11 >> VAR_6) & 15;
  break;
 default:
  return -VAR_0;
 }
 VAR_9->value.integer.value[0] = VAR_12;
 VAR_9->value.integer.value[1] = VAR_13;

 return 0;
}
