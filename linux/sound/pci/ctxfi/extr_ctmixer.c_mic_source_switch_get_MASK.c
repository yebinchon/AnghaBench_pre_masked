
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ct_atc {int (* mic_source_switch_get ) (struct ct_atc*) ;} ;


 struct ct_atc* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct ct_atc*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct ct_atc *VAR_2 = FUNC_0(VAR_0);
 VAR_1->value.enumerated.item[0] = VAR_2->mic_source_switch_get(VAR_2);
 return 0;
}
