
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
struct oxygen {int mutex; struct xonar_wm87x6* model_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct oxygen *VAR_2 = VAR_0->private_data;
 struct xonar_wm87x6 *VAR_3 = VAR_2->model_data;
 u16 VAR_4 = VAR_0->private_value & 0xffff;
 u16 VAR_5;
 unsigned int VAR_6 = (VAR_0->private_value >> 16) & 0xff;
 bool VAR_7 = (VAR_0->private_value >> 24) & 1;
 int VAR_8;

 FUNC_0(&VAR_2->mutex);
 VAR_5 = VAR_3->wm8776_regs[VAR_6] & ~VAR_4;
 if (VAR_1->value.integer.value[0] ^ VAR_7)
  VAR_5 |= VAR_4;
 VAR_8 = VAR_5 != VAR_3->wm8776_regs[VAR_6];
 if (VAR_8)
  FUNC_2(VAR_2, VAR_6, VAR_5);
 FUNC_1(&VAR_2->mutex);
 return VAR_8;
}
