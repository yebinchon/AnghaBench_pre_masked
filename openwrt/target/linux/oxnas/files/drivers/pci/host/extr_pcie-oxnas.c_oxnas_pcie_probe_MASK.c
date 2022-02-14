
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct oxnas_pcie {int haslink; scalar_t__ card_reset; int sys_ctrl; int lock; struct platform_device* pdev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct oxnas_pcie* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int FUNC_8 (TYPE_1__*,struct oxnas_pcie*) ;
 int FUNC_9 (struct platform_device*,struct oxnas_pcie*) ;
 int FUNC_10 (struct platform_device*,struct oxnas_pcie*,struct device_node*) ;
 scalar_t__ FUNC_11 (struct oxnas_pcie*) ;
 int FUNC_12 (struct platform_device*,struct device_node*,struct oxnas_pcie*) ;
 int FUNC_13 (struct platform_device*,struct oxnas_pcie*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_3)
{
 struct oxnas_pcie *VAR_4;
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 int VAR_6;

 VAR_4 = FUNC_5(&VAR_3->dev, sizeof(struct oxnas_pcie),
       VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->pdev = VAR_3;
 VAR_4->haslink = 1;
 FUNC_14(&VAR_4->lock);

 VAR_4->sys_ctrl = FUNC_15("oxsemi,ox820-sys-ctrl");
 if (FUNC_0(VAR_4->sys_ctrl))
  return FUNC_1(VAR_4->sys_ctrl);

 VAR_6 = FUNC_10(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_4->card_reset >= 0) {
  VAR_6 = FUNC_7(VAR_4->card_reset, VAR_2,
           FUNC_4(&VAR_3->dev));
  if (VAR_6) {
   FUNC_2(&VAR_3->dev, "cannot request gpio pin %d\n",
    VAR_4->card_reset);
   return VAR_6;
  }
 }

 VAR_6 = FUNC_12(VAR_3, VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_2(&VAR_3->dev, "cannot map registers\n");
  goto err_free_gpio;
 }

 VAR_6 = FUNC_13(VAR_3, VAR_4);
 if (VAR_6)
  goto err_free_gpio;


 FUNC_9(VAR_3, VAR_4);

 if (VAR_4->haslink && FUNC_11(VAR_4)) {
  VAR_4->haslink = 1;
  FUNC_3(&VAR_3->dev, "link up\n");
 } else {
  VAR_4->haslink = 0;
  FUNC_3(&VAR_3->dev, "link down\n");
 }


 FUNC_8(&VAR_3->dev, VAR_4);

 return 0;

err_free_gpio:
 if (VAR_4->card_reset)
  FUNC_6(VAR_4->card_reset);

 return VAR_6;
}
