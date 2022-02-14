
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_4__ {unsigned int* item; } ;
struct TYPE_3__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct oxygen {int mutex; struct dg* model_data; } ;
struct dg {unsigned int output_sel; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*) ;
 int FUNC_3 (struct oxygen*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct oxygen *VAR_2 = VAR_0->private_data;
 struct dg *VAR_3 = VAR_2->model_data;
 unsigned int VAR_4 = VAR_1->value.enumerated.item[0];
 int VAR_5 = 0;
 int VAR_6;

 FUNC_0(&VAR_2->mutex);
 if (VAR_3->output_sel != VAR_4) {
  VAR_3->output_sel = VAR_4;
  VAR_6 = FUNC_2(VAR_2);
  VAR_5 = VAR_6 >= 0 ? 1 : VAR_6;
  FUNC_3(VAR_2);
 }
 FUNC_1(&VAR_2->mutex);

 return VAR_5;
}
