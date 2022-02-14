
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;



 int VAR_1 ;
 int FUNC_4 (struct snd_kcontrol*,int *) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
       struct snd_ctl_elem_value *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_3, &VAR_5);
 if (VAR_8 < 0)
  return VAR_8;
 switch (VAR_3->private_value) {
 case 128:
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7 < FUNC_0(VAR_2))
   VAR_6 = VAR_2[VAR_7];
  break;
 case 130:
  VAR_7 = FUNC_1(VAR_5);
  if (VAR_7 < VAR_1)
   VAR_6 = VAR_2[VAR_7];
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_5);
  if (VAR_7 < VAR_1)
   VAR_6 = VAR_2[VAR_7];
  break;
 default:
  return -VAR_0;
 }
 VAR_4->value.integer.value[0] = VAR_6;
 return 0;
}
