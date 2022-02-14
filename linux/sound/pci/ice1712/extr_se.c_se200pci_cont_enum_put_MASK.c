
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {struct se_spec* spec; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct se_spec {TYPE_1__* vol; } ;
struct TYPE_4__ {unsigned int ch1; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int) ;
 unsigned int FUNC_1 (int) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_2(VAR_1);
 struct se_spec *VAR_4 = VAR_3->spec;
 int VAR_5 = VAR_1->private_value;
 unsigned int VAR_6;

 VAR_6 = VAR_2->value.enumerated.item[0];
 if (VAR_6 >= FUNC_1(VAR_5))
  return -VAR_0;
 if (VAR_4->vol[VAR_5].ch1 != VAR_6) {
  VAR_4->vol[VAR_5].ch1 = VAR_6;
  FUNC_0(VAR_3, VAR_5);
  return 1;
 }
 return 0;
}
