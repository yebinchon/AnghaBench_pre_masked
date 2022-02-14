
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ct_atc {int (* spdif_out_get_status ) (struct ct_atc*,unsigned int*) ;} ;


 unsigned int VAR_0 ;
 struct ct_atc* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct ct_atc*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_value *VAR_2)
{
 struct ct_atc *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;

 VAR_3->spdif_out_get_status(VAR_3, &VAR_4);

 if (VAR_4 == 0)
  VAR_4 = VAR_0;

 VAR_2->value.iec958.status[0] = (VAR_4 >> 0) & 0xff;
 VAR_2->value.iec958.status[1] = (VAR_4 >> 8) & 0xff;
 VAR_2->value.iec958.status[2] = (VAR_4 >> 16) & 0xff;
 VAR_2->value.iec958.status[3] = (VAR_4 >> 24) & 0xff;

 return 0;
}
