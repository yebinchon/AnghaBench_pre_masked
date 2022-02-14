
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int iec958; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct rme96 {int wcreg_spdif_stream; } ;


 struct rme96* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct rme96 *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->value.iec958, VAR_2->wcreg_spdif_stream);
 return 0;
}
