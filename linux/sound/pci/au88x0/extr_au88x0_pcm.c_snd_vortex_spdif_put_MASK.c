
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int spdif_sr; } ;
typedef TYPE_3__ vortex_t ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int* status; } ;
struct TYPE_7__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;



 TYPE_3__* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 vortex_t *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 48000;
 switch (VAR_2->value.iec958.status[3] & VAR_0) {
 case 130: VAR_4 = 32000; break;
 case 129: VAR_4 = 44100; break;
 case 128: VAR_4 = 48000; break;
 }
 if (VAR_4 == VAR_3->spdif_sr)
  return 0;
 VAR_3->spdif_sr = VAR_4;
 FUNC_1(VAR_3, VAR_3->spdif_sr, 1);
 return 1;
}
