
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct platform_device {int dev; } ;
struct oxnas_pcie {scalar_t__ card_reset; int pcie_ctrl_offset; int sys_ctrl; scalar_t__ haslink; scalar_t__ base; int clk; int hcsl_en; int busclk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct platform_device *VAR_7,
          struct oxnas_pcie *VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 FUNC_1(VAR_8->busclk);


 if (VAR_8->card_reset >= 0 &&
     !FUNC_6(VAR_8->card_reset, 0)) {
  FUNC_11();
  FUNC_7(10);

  FUNC_5(VAR_8->card_reset);
  FUNC_11();
  FUNC_7(100);
 }


 FUNC_9(VAR_8->sys_ctrl, VAR_5,
                    FUNC_0(VAR_8->hcsl_en), FUNC_0(VAR_8->hcsl_en));


 VAR_10 = FUNC_4(&VAR_7->dev);
 if (VAR_10) {
  FUNC_2(&VAR_7->dev, "core reset failed %d\n", VAR_10);
  return;
 }


 FUNC_1(VAR_8->clk);

 VAR_9 = FUNC_8(VAR_8->base + VAR_4);
 FUNC_3(&VAR_7->dev, "PCIe version/deviceID 0x%x\n", VAR_9);

 if (VAR_9 != VAR_6) {
  FUNC_3(&VAR_7->dev, "PCIe controller not found\n");
  VAR_8->haslink = 0;
  return;
 }


 FUNC_10(VAR_8->sys_ctrl, VAR_8->pcie_ctrl_offset,
                   VAR_3, VAR_3);


 FUNC_10(VAR_8->sys_ctrl, VAR_8->pcie_ctrl_offset,
                   VAR_0, VAR_1);
 FUNC_11();


 FUNC_10(VAR_8->sys_ctrl, VAR_8->pcie_ctrl_offset,
                   VAR_2, VAR_2);
 FUNC_11();
}
