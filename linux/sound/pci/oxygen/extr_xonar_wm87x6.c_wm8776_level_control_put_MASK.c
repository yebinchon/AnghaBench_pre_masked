
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct xonar_wm87x6 {int* wm8776_regs; int * lc_controls; } ;
struct snd_kcontrol {int private_value; struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct xonar_wm87x6* model_data; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct oxygen*,int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct oxygen*,size_t,int) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_9,
        struct snd_ctl_elem_value *VAR_10)
{
 struct oxygen *VAR_11 = VAR_9->private_data;
 struct xonar_wm87x6 *VAR_12 = VAR_11->model_data;
 unsigned int VAR_13 = 0, VAR_14;
 u16 VAR_15, VAR_16;
 int VAR_17;

 if (VAR_10->value.enumerated.item[0] >= 3)
  return -VAR_0;
 FUNC_2(&VAR_11->mutex);
 VAR_17 = VAR_10->value.enumerated.item[0] != VAR_9->private_value;
 if (VAR_17) {
  VAR_9->private_value = VAR_10->value.enumerated.item[0];
  VAR_15 = VAR_12->wm8776_regs[VAR_3];
  VAR_16 = VAR_12->wm8776_regs[VAR_4];
  switch (VAR_10->value.enumerated.item[0]) {
  default:
   FUNC_4(VAR_11, VAR_4,
         VAR_16 & ~VAR_5);
   break;
  case 1:
   FUNC_4(VAR_11, VAR_3,
         (VAR_15 & ~VAR_8) |
         VAR_7);
   FUNC_4(VAR_11, VAR_4,
         VAR_16 | VAR_5);
   VAR_13 = VAR_2;
   break;
  case 2:
   FUNC_4(VAR_11, VAR_3,
         (VAR_15 & ~VAR_8) |
         VAR_6);
   FUNC_4(VAR_11, VAR_4,
         VAR_16 | VAR_5);
   VAR_13 = VAR_1;
   break;
  }
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_12->lc_controls); ++VAR_14)
   FUNC_1(VAR_11, VAR_12->lc_controls[VAR_14], VAR_13);
 }
 FUNC_3(&VAR_11->mutex);
 return VAR_17;
}
