
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (struct snd_soc_component*,int,int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = VAR_0->private_value & 0xff;
 int VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_5 = FUNC_0(VAR_2, VAR_3);
 return FUNC_1(VAR_2, VAR_3, VAR_5 | 0x0100);
}
