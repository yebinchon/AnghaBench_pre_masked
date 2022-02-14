
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {int dummy; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int) ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct snd_soc_component*,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_3 (struct snd_kcontrol*) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,struct snd_kcontrol*,unsigned int,struct soc_enum*,int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_component *VAR_5 =
  FUNC_3(VAR_3);
 struct snd_soc_dapm_context *VAR_6 =
  FUNC_4(VAR_3);
 struct soc_enum *VAR_7 = (struct soc_enum *)VAR_3->private_value;
 unsigned int VAR_8 = VAR_4->value.enumerated.item[0];
 unsigned int VAR_9 = FUNC_1(VAR_5,
             VAR_1);


 if (VAR_9 != VAR_8)
  FUNC_5(VAR_6, VAR_3, 0, ((void*)0), ((void*)0));

 FUNC_2(VAR_5, VAR_2,
          VAR_1 |
          VAR_0,
          FUNC_0(VAR_1, VAR_8) |
          FUNC_0(VAR_0, VAR_8));

 FUNC_5(VAR_6, VAR_3, VAR_8, VAR_7, ((void*)0));

 return 0;
}
