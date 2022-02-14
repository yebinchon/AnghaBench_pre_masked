
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int iec958; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct hdsp {int creg_spdif_stream; int control_register; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hdsp*,int ,int) ;
 int FUNC_1 (int *) ;
 struct hdsp* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4, struct snd_ctl_elem_value *VAR_5)
{
 struct hdsp *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_1(&VAR_5->value.iec958);
 FUNC_3(&VAR_6->lock);
 VAR_7 = VAR_8 != VAR_6->creg_spdif_stream;
 VAR_6->creg_spdif_stream = VAR_8;
 VAR_6->control_register &= ~(VAR_2 | VAR_1 | VAR_0);
 FUNC_0(VAR_6, VAR_3, VAR_6->control_register |= VAR_8);
 FUNC_4(&VAR_6->lock);
 return VAR_7;
}
