
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_soc_card {TYPE_4__* dev; } ;
struct smdk_wm8994_data {int dummy; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {TYPE_2__* cpus; TYPE_1__* platforms; } ;
struct TYPE_9__ {scalar_t__ of_node; int * dai_name; } ;
struct TYPE_8__ {scalar_t__ of_node; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 struct smdk_wm8994_data* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (TYPE_4__*,struct snd_soc_card*) ;
 struct of_device_id* FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int ) ;
 int FUNC_6 (struct platform_device*,struct smdk_wm8994_data*) ;
 int VAR_3 ;
 struct snd_soc_card VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 int VAR_7;
 struct device_node *VAR_8 = VAR_6->dev.of_node;
 struct snd_soc_card *VAR_9 = &VAR_4;
 struct smdk_wm8994_data *VAR_10;
 const struct of_device_id *VAR_11;

 VAR_9->dev = &VAR_6->dev;

 VAR_10 = FUNC_1(&VAR_6->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_8) {
  VAR_5[0].cpus->dai_name = ((void*)0);
  VAR_5[0].cpus->of_node = FUNC_5(VAR_8,
    "samsung,i2s-controller", 0);
  if (!VAR_5[0].cpus->of_node) {
   FUNC_0(&VAR_6->dev,
      "Property 'samsung,i2s-controller' missing or invalid\n");
   VAR_7 = -VAR_0;
  }

  VAR_5[0].platforms->name = ((void*)0);
  VAR_5[0].platforms->of_node = VAR_5[0].cpus->of_node;
 }

 VAR_11 = FUNC_3(FUNC_4(VAR_3), &VAR_6->dev);
 if (VAR_11)
  *VAR_10 = *((struct smdk_wm8994_data *)VAR_11->data);

 FUNC_6(VAR_6, VAR_10);

 VAR_7 = FUNC_2(&VAR_6->dev, VAR_9);

 if (VAR_7)
  FUNC_0(&VAR_6->dev, "snd_soc_register_card() failed:%d\n", VAR_7);

 return VAR_7;
}
