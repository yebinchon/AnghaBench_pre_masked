
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_hsw {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hsw_priv_data {struct sst_hsw* hsw; } ;
typedef enum sst_hsw_module_id { ____Placeholder_sst_hsw_module_id } sst_hsw_module_id ;


 int VAR_0 ;
 int VAR_1 ;
 struct hsw_priv_data* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_2 (struct sst_hsw*,int) ;
 int FUNC_3 (struct sst_hsw*,int,int ,int,int,int*) ;
 int FUNC_4 (struct sst_hsw*) ;
 int FUNC_5 (struct sst_hsw*,int*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_1(VAR_2);
 struct hsw_priv_data *VAR_5 = FUNC_0(VAR_4);
 struct sst_hsw *VAR_6 = VAR_5->hsw;
 int VAR_7;
 enum sst_hsw_module_id VAR_8 = VAR_0;
 int VAR_9 = VAR_3->value.bytes.data[0];
 int VAR_10 = VAR_1;


 if (VAR_9 == 0xFF) {
  FUNC_4(VAR_6);
  return 0;
 }


 VAR_7 = FUNC_5(VAR_6, VAR_3->value.bytes.data);
 if (VAR_7 < 0)
  return VAR_7;

 if (FUNC_2(VAR_6, VAR_8))
  VAR_7 = FUNC_3(VAR_6, VAR_8, 0, VAR_9,
    VAR_10, VAR_3->value.bytes.data);
 return VAR_7;
}
