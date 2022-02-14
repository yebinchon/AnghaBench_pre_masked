
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_bytes_ext {int max; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_info {int count; int type; } ;
struct coeff_ram_ctl {struct soc_bytes_ext bytes_ext; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_info *VAR_2)
{
 struct coeff_ram_ctl *VAR_3 =
  (struct coeff_ram_ctl *)VAR_1->private_value;
 struct soc_bytes_ext *VAR_4 = &VAR_3->bytes_ext;

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_4->max;

 return 0;
}
