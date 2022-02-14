
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rme9652 {int dummy; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (struct snd_rme9652*,int ) ;
 struct snd_rme9652* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_8, struct snd_ctl_elem_value *VAR_9)
{
 struct snd_rme9652 *VAR_10 = FUNC_1(VAR_8);
 unsigned int VAR_11, VAR_12, VAR_13;

 switch (VAR_8->private_value) {
 case 0: VAR_11 = VAR_1; VAR_12 = VAR_5; break;
 case 1: VAR_11 = VAR_2; VAR_12 = VAR_6; break;
 case 2: VAR_11 = VAR_3; VAR_12 = VAR_7; break;
 default: return -VAR_0;
 }
 VAR_13 = FUNC_0(VAR_10, VAR_4);
 VAR_9->value.enumerated.item[0] = (VAR_13 & VAR_11) ? 1 : 0;
 VAR_9->value.enumerated.item[0] |= (VAR_13 & VAR_12) ? 2 : 0;
 return 0;
}
