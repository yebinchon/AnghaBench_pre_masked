
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tscs42xx {int coeff_ram_lock; int * coeff_ram; } ;
struct soc_bytes_ext {int max; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct coeff_ram_ctl {size_t addr; struct soc_bytes_ext bytes_ext; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tscs42xx* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 =
  FUNC_4(VAR_1);
 struct tscs42xx *VAR_4 = FUNC_3(VAR_3);
 struct coeff_ram_ctl *VAR_5 =
  (struct coeff_ram_ctl *)VAR_1->private_value;
 struct soc_bytes_ext *VAR_6 = &VAR_5->bytes_ext;

 FUNC_1(&VAR_4->coeff_ram_lock);

 FUNC_0(VAR_2->value.bytes.data,
  &VAR_4->coeff_ram[VAR_5->addr * VAR_0], VAR_6->max);

 FUNC_2(&VAR_4->coeff_ram_lock);

 return 0;
}
