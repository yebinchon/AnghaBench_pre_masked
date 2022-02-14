
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sst_hsw {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hsw_priv_data {int dev; struct sst_hsw* hsw; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct hsw_priv_data* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;
 int FUNC_6 (struct sst_hsw*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_5(VAR_1);
 struct hsw_priv_data *VAR_4 = FUNC_4(VAR_3);
 struct sst_hsw *VAR_5 = VAR_4->hsw;
 u32 VAR_6;

 FUNC_1(VAR_4->dev);

 if (VAR_2->value.integer.value[0] ==
  VAR_2->value.integer.value[1]) {

  VAR_6 = FUNC_0(VAR_2->value.integer.value[0]);
  FUNC_6(VAR_5, 0, VAR_0, VAR_6);

 } else {
  VAR_6 = FUNC_0(VAR_2->value.integer.value[0]);
  FUNC_6(VAR_5, 0, 0, VAR_6);

  VAR_6 = FUNC_0(VAR_2->value.integer.value[1]);
  FUNC_6(VAR_5, 0, 1, VAR_6);
 }

 FUNC_2(VAR_4->dev);
 FUNC_3(VAR_4->dev);
 return 0;
}
