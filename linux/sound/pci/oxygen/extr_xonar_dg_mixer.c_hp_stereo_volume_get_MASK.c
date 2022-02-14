
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; struct dg* model_data; } ;
struct dg {int* cs4245_shadow; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct oxygen *VAR_4 = VAR_2->private_data;
 struct dg *VAR_5 = VAR_4->model_data;
 unsigned int VAR_6;

 FUNC_0(&VAR_4->mutex);
 VAR_6 = (~VAR_5->cs4245_shadow[VAR_0]) & 255;
 VAR_3->value.integer.value[0] = VAR_6;
 VAR_6 = (~VAR_5->cs4245_shadow[VAR_1]) & 255;
 VAR_3->value.integer.value[1] = VAR_6;
 FUNC_1(&VAR_4->mutex);
 return 0;
}
