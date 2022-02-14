
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_hsw {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {void** value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hsw_priv_data {int dev; struct sst_hsw* hsw; } ;


 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct hsw_priv_data* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;
 int FUNC_6 (struct sst_hsw*,int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_5(VAR_0);
 struct hsw_priv_data *VAR_3 = FUNC_4(VAR_2);
 struct sst_hsw *VAR_4 = VAR_3->hsw;
 unsigned int VAR_5 = 0;

 FUNC_1(VAR_3->dev);
 FUNC_6(VAR_4, 0, 0, &VAR_5);
 VAR_1->value.integer.value[0] = FUNC_0(VAR_5);

 FUNC_6(VAR_4, 0, 1, &VAR_5);
 VAR_1->value.integer.value[1] = FUNC_0(VAR_5);

 FUNC_2(VAR_3->dev);
 FUNC_3(VAR_3->dev);
 return 0;
}
