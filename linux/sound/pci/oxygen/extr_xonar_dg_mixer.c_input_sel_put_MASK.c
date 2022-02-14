
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct dg* model_data; } ;
struct dg {size_t input_sel; int ** input_vol; } ;


 int VAR_0 ;
 int FUNC_0 (struct oxygen*) ;
 int FUNC_1 (struct oxygen*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct oxygen *VAR_3 = VAR_1->private_data;
 struct dg *VAR_4 = VAR_3->model_data;
 int VAR_5;
 int VAR_6;

 if (VAR_2->value.enumerated.item[0] > 3)
  return -VAR_0;

 FUNC_2(&VAR_3->mutex);
 VAR_5 = VAR_2->value.enumerated.item[0] != VAR_4->input_sel;
 if (VAR_5) {
  VAR_4->input_sel = VAR_2->value.enumerated.item[0];

  VAR_6 = FUNC_0(VAR_3);
  if (VAR_6 >= 0)
   VAR_6 = FUNC_1(VAR_3,
    VAR_4->input_vol[VAR_4->input_sel][0],
    VAR_4->input_vol[VAR_4->input_sel][1]);
  VAR_5 = VAR_6 >= 0 ? 1 : VAR_6;
 }
 FUNC_3(&VAR_3->mutex);
 return VAR_5;
}
