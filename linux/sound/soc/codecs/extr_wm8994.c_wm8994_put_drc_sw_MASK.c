
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_mixer_control {scalar_t__ shift; int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_5,
        struct snd_ctl_elem_value *VAR_6)
{
 struct soc_mixer_control *VAR_7 =
  (struct soc_mixer_control *)VAR_5->private_value;
 struct snd_soc_component *VAR_8 = FUNC_1(VAR_5);
 int VAR_9, VAR_10;


 if (VAR_7->shift == VAR_4)
  VAR_9 = VAR_1 |
   VAR_2;
 else
  VAR_9 = VAR_3;

 VAR_10 = FUNC_0(VAR_8, VAR_7->reg);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_10 & VAR_9)
  return -VAR_0;

 return FUNC_2(VAR_5, VAR_6);
}
