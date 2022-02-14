
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct xonar_wm87x6 {int* wm8776_regs; } ;
struct snd_kcontrol {int private_value; struct oxygen* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {struct xonar_wm87x6* model_data; } ;



__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct oxygen *VAR_2 = VAR_0->private_data;
 struct xonar_wm87x6 *VAR_3 = VAR_2->model_data;
 u16 VAR_4 = VAR_0->private_value & 0xffff;
 unsigned int VAR_5 = (VAR_0->private_value >> 16) & 0xff;
 bool VAR_6 = (VAR_0->private_value >> 24) & 1;

 VAR_1->value.integer.value[0] =
  ((VAR_3->wm8776_regs[VAR_5] & VAR_4) != 0) ^ VAR_6;
 return 0;
}
