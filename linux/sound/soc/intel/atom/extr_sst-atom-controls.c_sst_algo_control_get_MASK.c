
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_algo_control {int type; int max; int params; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct sst_algo_control *VAR_3 = (void *)VAR_1->private_value;
 struct snd_soc_component *VAR_4 = FUNC_2(VAR_1);

 switch (VAR_3->type) {
 case 128:
  FUNC_1(VAR_2->value.bytes.data, VAR_3->params, VAR_3->max);
  break;
 default:
  FUNC_0(VAR_4->dev, "Invalid Input- algo type:%d\n",
    VAR_3->type);
  return -VAR_0;

 }
 return 0;
}
