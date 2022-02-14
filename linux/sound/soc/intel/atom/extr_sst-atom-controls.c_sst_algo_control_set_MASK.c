
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sst_data {int lock; } ;
struct sst_algo_control {int type; TYPE_4__* w; int max; int params; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_5__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; scalar_t__ private_value; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_7__ {TYPE_2__ bytes; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_8__ {scalar_t__ power; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sst_data* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (struct snd_kcontrol*) ;
 int FUNC_7 (struct sst_data*,struct sst_algo_control*) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 int VAR_3 = 0;
 struct snd_soc_component *VAR_4 = FUNC_6(VAR_1);
 struct sst_data *VAR_5 = FUNC_5(VAR_4);
 struct sst_algo_control *VAR_6 = (void *)VAR_1->private_value;

 FUNC_0(VAR_4->dev, "control_name=%s\n", VAR_1->id.name);
 FUNC_3(&VAR_5->lock);
 switch (VAR_6->type) {
 case 128:
  FUNC_2(VAR_6->params, VAR_2->value.bytes.data, VAR_6->max);
  break;
 default:
  FUNC_4(&VAR_5->lock);
  FUNC_1(VAR_4->dev, "Invalid Input- algo type:%d\n",
    VAR_6->type);
  return -VAR_0;
 }

 if (VAR_6->w && VAR_6->w->power)
  VAR_3 = FUNC_7(VAR_5, VAR_6);
 FUNC_4(&VAR_5->lock);

 return VAR_3;
}
