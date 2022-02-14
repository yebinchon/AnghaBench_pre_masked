
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct sti_sas_dev_data {int num_dapm_routes; int dapm_routes; int num_dapm_widgets; int dapm_widgets; int dac_ops; int regmap; } ;
struct TYPE_14__ {int regmap; int virt_regmap; } ;
struct TYPE_13__ {int regmap; } ;
struct sti_sas_data {struct sti_sas_dev_data* dev_data; TYPE_2__ dac; TYPE_1__ spdif; TYPE_5__* dev; } ;
struct TYPE_17__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct TYPE_16__ {int ops; } ;
struct TYPE_15__ {int num_dapm_routes; int dapm_routes; int num_dapm_widgets; int dapm_widgets; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t VAR_3 ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_5__*,struct sti_sas_data*) ;
 struct sti_sas_data* FUNC_5 (TYPE_5__*,int,int ) ;
 int FUNC_6 (TYPE_5__*,int *,struct sti_sas_data*,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_3__*,TYPE_4__*,int ) ;
 struct of_device_id* FUNC_8 (int ,struct device_node*) ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_9 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct sti_sas_data *VAR_9;
 const struct of_device_id *VAR_10;


 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(struct sti_sas_data),
          VAR_2);
 if (!VAR_9)
  return -VAR_1;


 VAR_10 = FUNC_8(VAR_5, VAR_8);
 if (!VAR_10->data) {
  FUNC_3(&VAR_7->dev, "data associated to device is missing\n");
  return -VAR_0;
 }

 VAR_9->dev_data = (struct sti_sas_dev_data *)VAR_10->data;


 VAR_9->dev = &VAR_7->dev;


 VAR_9->dac.virt_regmap = FUNC_6(&VAR_7->dev, ((void*)0), VAR_9,
          VAR_9->dev_data->regmap);
 if (FUNC_1(VAR_9->dac.virt_regmap)) {
  FUNC_3(&VAR_7->dev, "audio registers not enabled\n");
  return FUNC_2(VAR_9->dac.virt_regmap);
 }


 VAR_9->dac.regmap =
  FUNC_9(VAR_8, "st,syscfg");
 if (FUNC_1(VAR_9->dac.regmap)) {
  FUNC_3(&VAR_7->dev, "syscon registers not available\n");
  return FUNC_2(VAR_9->dac.regmap);
 }
 VAR_9->spdif.regmap = VAR_9->dac.regmap;

 VAR_4[VAR_3].ops = VAR_9->dev_data->dac_ops;


 VAR_6.dapm_widgets = VAR_9->dev_data->dapm_widgets;
 VAR_6.num_dapm_widgets = VAR_9->dev_data->num_dapm_widgets;

 VAR_6.dapm_routes = VAR_9->dev_data->dapm_routes;
 VAR_6.num_dapm_routes = VAR_9->dev_data->num_dapm_routes;


 FUNC_4(&VAR_7->dev, VAR_9);

 return FUNC_7(&VAR_7->dev, &VAR_6,
     VAR_4,
     FUNC_0(VAR_4));
}
