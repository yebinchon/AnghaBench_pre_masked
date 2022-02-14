
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; int id; } ;
struct omap_mcbsp_platform_data {int buffer_size; int reg_size; int force_ick_on; } ;
struct omap_mcbsp {struct omap_mcbsp_platform_data* pdata; TYPE_3__* dev; int id; } ;
struct of_device_id {int data; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {void* formats; } ;
struct TYPE_11__ {void* formats; } ;
struct TYPE_14__ {TYPE_2__ capture; TYPE_1__ playback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 struct omap_mcbsp_platform_data* FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_3__*,int *,TYPE_4__*,int) ;
 int FUNC_4 (struct omap_mcbsp_platform_data*,int ,int) ;
 struct of_device_id* FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (struct device_node*,char*,int*) ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_7 (struct platform_device*) ;
 int VAR_6 ;
 int FUNC_8 (struct platform_device*,struct omap_mcbsp*) ;
 int FUNC_9 (TYPE_3__*,char*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct omap_mcbsp_platform_data *VAR_8 = FUNC_1(&VAR_7->dev);
 struct omap_mcbsp *VAR_9;
 const struct of_device_id *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(VAR_6, &VAR_7->dev);
 if (VAR_10) {
  struct device_node *VAR_12 = VAR_7->dev.of_node;
  struct omap_mcbsp_platform_data *VAR_13 = VAR_8;
  int VAR_14;

  VAR_8 = FUNC_2(&VAR_7->dev,
         sizeof(struct omap_mcbsp_platform_data),
         VAR_2);
  if (!VAR_8)
   return -VAR_1;

  FUNC_4(VAR_8, VAR_10->data, sizeof(*VAR_8));
  if (!FUNC_6(VAR_12, "ti,buffer-size", &VAR_14))
   VAR_8->buffer_size = VAR_14;
  if (VAR_13)
   VAR_8->force_ick_on = VAR_13->force_ick_on;
 } else if (!VAR_8) {
  FUNC_0(&VAR_7->dev, "missing platform data.\n");
  return -VAR_0;
 }
 VAR_9 = FUNC_2(&VAR_7->dev, sizeof(struct omap_mcbsp), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->id = VAR_7->id;
 VAR_9->pdata = VAR_8;
 VAR_9->dev = &VAR_7->dev;
 FUNC_8(VAR_7, VAR_9);

 VAR_11 = FUNC_7(VAR_7);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->pdata->reg_size == 2) {
  VAR_5.playback.formats = VAR_3;
  VAR_5.capture.formats = VAR_3;
 }

 VAR_11 = FUNC_3(&VAR_7->dev,
           &VAR_4,
           &VAR_5, 1);
 if (VAR_11)
  return VAR_11;

 return FUNC_9(&VAR_7->dev, "tx", "rx");
}
