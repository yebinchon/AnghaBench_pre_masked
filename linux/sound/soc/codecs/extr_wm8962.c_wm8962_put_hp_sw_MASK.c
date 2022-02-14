
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_5,
       struct snd_ctl_elem_value *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;


        VAR_8 = FUNC_3(VAR_5, VAR_6);
 if (VAR_8 == 0)
  return 0;


 VAR_8 = FUNC_0(VAR_7, VAR_4);
 if (VAR_8 & VAR_0) {
  FUNC_1(VAR_7, VAR_1,
         FUNC_0(VAR_7, VAR_1));
  return 1;
 }


 if (VAR_8 & VAR_2)
  FUNC_1(VAR_7, VAR_3,
         FUNC_0(VAR_7, VAR_3));

 return 1;
}
