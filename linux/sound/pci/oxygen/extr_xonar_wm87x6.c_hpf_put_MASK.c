
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xonar_wm87x6 {unsigned int* wm8776_regs; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct xonar_wm87x6* model_data; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,size_t,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct oxygen *VAR_4 = VAR_2->private_data;
 struct xonar_wm87x6 *VAR_5 = VAR_4->model_data;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_0(&VAR_4->mutex);
 VAR_6 = VAR_5->wm8776_regs[VAR_1] & ~VAR_0;
 if (!VAR_3->value.enumerated.item[0])
  VAR_6 |= VAR_0;
 VAR_7 = VAR_6 != VAR_5->wm8776_regs[VAR_1];
 if (VAR_7)
  FUNC_2(VAR_4, VAR_1, VAR_6);
 FUNC_1(&VAR_4->mutex);
 return VAR_7;
}
