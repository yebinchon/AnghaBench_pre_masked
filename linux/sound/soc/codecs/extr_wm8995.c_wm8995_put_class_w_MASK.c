
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;


 struct snd_soc_component* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_2);
 return VAR_3;
}
