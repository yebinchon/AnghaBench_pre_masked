
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int iec958; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct hdsp {scalar_t__ creg_spdif; int lock; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct hdsp* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct hdsp *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;
 u32 VAR_4;

 VAR_4 = FUNC_0(&VAR_1->value.iec958);
 FUNC_2(&VAR_2->lock);
 VAR_3 = VAR_4 != VAR_2->creg_spdif;
 VAR_2->creg_spdif = VAR_4;
 FUNC_3(&VAR_2->lock);
 return VAR_3;
}
