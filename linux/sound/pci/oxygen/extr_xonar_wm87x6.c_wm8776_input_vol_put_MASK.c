
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xonar_wm87x6 {int* wm8776_regs; } ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct xonar_wm87x6* model_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,size_t,int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_4,
    struct snd_ctl_elem_value *VAR_5)
{
 struct oxygen *VAR_6 = VAR_4->private_data;
 struct xonar_wm87x6 *VAR_7 = VAR_6->model_data;
 int VAR_8 = 0;

 FUNC_0(&VAR_6->mutex);
 VAR_8 = (VAR_5->value.integer.value[0] !=
     (VAR_7->wm8776_regs[VAR_0] & VAR_2)) ||
    (VAR_5->value.integer.value[1] !=
     (VAR_7->wm8776_regs[VAR_1] & VAR_2));
 FUNC_2(VAR_6, VAR_0,
       VAR_5->value.integer.value[0] | VAR_3);
 FUNC_2(VAR_6, VAR_1,
       VAR_5->value.integer.value[1] | VAR_3);
 FUNC_1(&VAR_6->mutex);
 return VAR_8;
}
