
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct soc_mixer_control {int reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (struct snd_soc_component*,int,int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_2(VAR_0);
 struct soc_mixer_control *VAR_3 =
  (struct soc_mixer_control *)VAR_0->private_value;
 int VAR_4 = VAR_3->reg;
        int VAR_5;
        u16 VAR_6;

        VAR_5 = FUNC_3(VAR_0, VAR_1);
        if (VAR_5 < 0)
                return VAR_5;


        VAR_6 = FUNC_0(VAR_2, VAR_4);
        return FUNC_1(VAR_2, VAR_4, VAR_6 | 0x0100);
}
