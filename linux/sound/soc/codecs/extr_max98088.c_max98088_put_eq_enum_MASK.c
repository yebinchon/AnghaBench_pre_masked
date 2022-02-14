
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_5__ {int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct max98088_priv {struct max98088_cdata* dai; struct max98088_pdata* pdata; } ;
struct max98088_pdata {int eq_cfgcnt; } ;
struct max98088_cdata {int eq_sel; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct max98088_priv* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
                                struct snd_ctl_elem_value *VAR_2)
{
       struct snd_soc_component *VAR_3 = FUNC_4(VAR_1);
       struct max98088_priv *VAR_4 = FUNC_3(VAR_3);
       struct max98088_pdata *VAR_5 = VAR_4->pdata;
       int VAR_6 = FUNC_0(VAR_3, VAR_1->id.name);
       struct max98088_cdata *VAR_7;
 int VAR_8 = VAR_2->value.enumerated.item[0];

       if (VAR_6 < 0)
        return VAR_6;

       VAR_7 = &VAR_4->dai[VAR_6];

       if (VAR_8 >= VAR_5->eq_cfgcnt)
               return -VAR_0;

       VAR_7->eq_sel = VAR_8;

       switch (VAR_6) {
       case 0:
               FUNC_1(VAR_3);
               break;
       case 1:
               FUNC_2(VAR_3);
               break;
       }

       return 0;
}
