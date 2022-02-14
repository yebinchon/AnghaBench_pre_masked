
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_hsw {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hsw_priv_data {struct sst_hsw* hsw; } ;
typedef enum sst_hsw_module_id { ____Placeholder_sst_hsw_module_id } sst_hsw_module_id ;


 int VAR_0 ;
 struct hsw_priv_data* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_2 (struct sst_hsw*,int) ;
 scalar_t__ FUNC_3 (struct sst_hsw*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_1(VAR_1);
 struct hsw_priv_data *VAR_4 = FUNC_0(VAR_3);
 struct sst_hsw *VAR_5 = VAR_4->hsw;
 enum sst_hsw_module_id VAR_6 = VAR_0;

 VAR_2->value.integer.value[0] =
  (FUNC_2(VAR_5, VAR_6) ||
  FUNC_3(VAR_5, VAR_6));
 return 0;
}
