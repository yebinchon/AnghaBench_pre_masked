
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mxs_saif {int id; int master_id; TYPE_1__* dev; int base; int clk; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct mxs_saif**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 struct mxs_saif* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (TYPE_1__*,int,int ,int ,int ,struct mxs_saif*) ;
 int FUNC_10 (TYPE_1__*,int *,int *,int) ;
 int FUNC_11 (TYPE_1__*) ;
 struct mxs_saif** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (struct device_node*,char*) ;
 struct device_node* FUNC_14 (struct device_node*,char*,int ) ;
 int FUNC_15 (struct platform_device*,int ) ;
 int FUNC_16 (struct platform_device*,struct mxs_saif*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct mxs_saif *VAR_9;
 int VAR_10, VAR_11 = 0;
 struct device_node *VAR_12;

 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_7(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_13(VAR_8, "saif");
 if (VAR_11 < 0)
  return VAR_11;
 else
  VAR_9->id = VAR_11;

 if (VAR_9->id >= FUNC_0(VAR_3)) {
  FUNC_3(&VAR_7->dev, "get wrong saif id\n");
  return -VAR_0;
 }






 VAR_12 = FUNC_14(VAR_8, "fsl,saif-master", 0);
 if (!VAR_12) {
  VAR_9->master_id = VAR_9->id;
 } else {
  VAR_11 = FUNC_13(VAR_12, "saif");
  if (VAR_11 < 0)
   return VAR_11;
  else
   VAR_9->master_id = VAR_11;

  if (VAR_9->master_id >= FUNC_0(VAR_3)) {
   FUNC_3(&VAR_7->dev, "get wrong master id\n");
   return -VAR_0;
  }
 }

 VAR_3[VAR_9->id] = VAR_9;

 VAR_9->clk = FUNC_6(&VAR_7->dev, ((void*)0));
 if (FUNC_1(VAR_9->clk)) {
  VAR_11 = FUNC_2(VAR_9->clk);
  FUNC_3(&VAR_7->dev, "Cannot get the clock: %d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_9->base = FUNC_8(VAR_7, 0);
 if (FUNC_1(VAR_9->base))
  return FUNC_2(VAR_9->base);

 VAR_10 = FUNC_15(VAR_7, 0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->dev = &VAR_7->dev;
 VAR_11 = FUNC_9(&VAR_7->dev, VAR_10, VAR_6, 0,
          FUNC_4(&VAR_7->dev), VAR_9);
 if (VAR_11) {
  FUNC_3(&VAR_7->dev, "failed to request irq\n");
  return VAR_11;
 }

 FUNC_16(VAR_7, VAR_9);


 if (VAR_9->id == 0) {
  VAR_11 = FUNC_12(VAR_7);
  if (VAR_11)
   FUNC_5(&VAR_7->dev, "failed to init clocks\n");
 }

 VAR_11 = FUNC_10(&VAR_7->dev, &VAR_4,
           &VAR_5, 1);
 if (VAR_11) {
  FUNC_3(&VAR_7->dev, "register DAI failed\n");
  return VAR_11;
 }

 VAR_11 = FUNC_11(&VAR_7->dev);
 if (VAR_11) {
  FUNC_3(&VAR_7->dev, "register PCM failed: %d\n", VAR_11);
  return VAR_11;
 }

 return 0;
}
