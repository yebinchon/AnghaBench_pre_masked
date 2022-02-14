
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_6__ {int name; } ;
struct snd_kcontrol {TYPE_3__ id; } ;
struct TYPE_4__ {int * item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct max98088_priv {struct max98088_cdata* dai; } ;
struct max98088_cdata {int eq_sel; } ;


 int FUNC_0 (struct snd_soc_component*,int ) ;
 struct max98088_priv* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
                                struct snd_ctl_elem_value *VAR_1)
{
       struct snd_soc_component *VAR_2 = FUNC_2(VAR_0);
       struct max98088_priv *VAR_3 = FUNC_1(VAR_2);
       int VAR_4 = FUNC_0(VAR_2, VAR_0->id.name);
       struct max98088_cdata *VAR_5;

       if (VAR_4 < 0)
        return VAR_4;

       VAR_5 = &VAR_3->dai[VAR_4];
       VAR_1->value.enumerated.item[0] = VAR_5->eq_sel;
       return 0;
}
