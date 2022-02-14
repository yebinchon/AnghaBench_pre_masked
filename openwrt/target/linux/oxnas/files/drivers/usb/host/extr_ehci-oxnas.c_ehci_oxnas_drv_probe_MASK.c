
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct usb_hcd {int has_tt; struct reset_control* regs; int rsrc_len; int rsrc_start; } ;
struct resource {int start; } ;
struct reset_control {int dummy; } ;
struct TYPE_6__ {scalar_t__ coherent_dma_mask; scalar_t__* dma_mask; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct oxnas_hcd {struct reset_control* clk; struct reset_control* refsrc; struct reset_control* phyref; struct reset_control* rst_phyb; struct reset_control* rst_phya; struct reset_control* rst_host; void* use_pllb; struct reset_control* syscon; void* use_phya; } ;
struct ehci_hcd {struct reset_control* caps; scalar_t__ priv; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct reset_control*) ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct reset_control* FUNC_6 (TYPE_1__*,struct resource*) ;
 struct reset_control* FUNC_7 (TYPE_1__*,char*) ;
 struct ehci_hcd* FUNC_8 (struct usb_hcd*) ;
 int FUNC_9 (struct device_node*,int ) ;
 int FUNC_10 (struct device_node*,int ,struct resource*) ;
 void* FUNC_11 (struct device_node*,char*) ;
 void* FUNC_12 (struct device_node*,char*) ;
 int VAR_4 ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (struct oxnas_hcd*) ;
 int FUNC_15 (struct oxnas_hcd*) ;
 struct reset_control* FUNC_16 (struct device_node*,char*) ;
 int FUNC_17 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_18 (int *,TYPE_1__*,int ) ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct usb_hcd *VAR_7;
 struct ehci_hcd *VAR_8;
 struct resource VAR_9;
 struct oxnas_hcd *VAR_10;
 int VAR_11, VAR_12;
 struct reset_control *VAR_13;

 if (FUNC_19())
  return -VAR_1;

 if (!VAR_5->dev.dma_mask)
  VAR_5->dev.dma_mask = &VAR_5->dev.coherent_dma_mask;
 if (!VAR_5->dev.coherent_dma_mask)
  VAR_5->dev.coherent_dma_mask = FUNC_0(32);

 VAR_7 = FUNC_18(&VAR_4, &VAR_5->dev,
     FUNC_5(&VAR_5->dev));
 if (!VAR_7)
  return -VAR_2;

 VAR_12 = FUNC_10(VAR_6, 0, &VAR_9);
 if (VAR_12)
  goto err_res;

 VAR_7->rsrc_start = VAR_9.start;
 VAR_7->rsrc_len = FUNC_13(&VAR_9);

 VAR_7->regs = FUNC_6(&VAR_5->dev, &VAR_9);
 if (FUNC_1(VAR_7->regs)) {
  FUNC_4(&VAR_5->dev, "devm_ioremap_resource failed\n");
  VAR_12 = FUNC_2(VAR_7->regs);
  goto err_ioremap;
 }

 VAR_10 = (struct oxnas_hcd *)FUNC_8(VAR_7)->priv;

 VAR_10->use_pllb = FUNC_12(VAR_6, "oxsemi,ehci_use_pllb");
 VAR_10->use_phya = FUNC_12(VAR_6, "oxsemi,ehci_use_phya");

 VAR_10->syscon = FUNC_16(VAR_6, "oxsemi,sys-ctrl");
 if (FUNC_1(VAR_10->syscon)) {
  VAR_12 = FUNC_2(VAR_10->syscon);
  goto err_syscon;
 }

 VAR_10->clk = FUNC_11(VAR_6, "usb");
 if (FUNC_1(VAR_10->clk)) {
  VAR_12 = FUNC_2(VAR_10->clk);
  goto err_clk;
 }

 if (VAR_10->use_pllb) {
  VAR_10->refsrc = FUNC_11(VAR_6, "refsrc");
  if (FUNC_1(VAR_10->refsrc)) {
   VAR_12 = FUNC_2(VAR_10->refsrc);
   goto err_refsrc;
  }
  VAR_10->phyref = FUNC_11(VAR_6, "phyref");
  if (FUNC_1(VAR_10->refsrc)) {
   VAR_12 = FUNC_2(VAR_10->refsrc);
   goto err_phyref;
  }

 } else {
  VAR_10->refsrc = ((void*)0);
  VAR_10->phyref = ((void*)0);
 }

 VAR_13 = FUNC_7(&VAR_5->dev, "host");
 if (FUNC_1(VAR_13)) {
  VAR_12 = FUNC_2(VAR_13);
  goto err_rst;
 }
 VAR_10->rst_host = VAR_13;

 VAR_13 = FUNC_7(&VAR_5->dev, "phya");
 if (FUNC_1(VAR_13)) {
  VAR_12 = FUNC_2(VAR_13);
  goto err_rst;
 }
 VAR_10->rst_phya = VAR_13;

 VAR_13 = FUNC_7(&VAR_5->dev, "phyb");
 if (FUNC_1(VAR_13)) {
  VAR_12 = FUNC_2(VAR_13);
  goto err_rst;
 }
 VAR_10->rst_phyb = VAR_13;

 VAR_11 = FUNC_9(VAR_6, 0);
 if (!VAR_11) {
  FUNC_4(&VAR_5->dev, "irq_of_parse_and_map failed\n");
  VAR_12 = -VAR_0;
  goto err_irq;
 }

 VAR_7->has_tt = 1;
 VAR_8 = FUNC_8(VAR_7);
 VAR_8->caps = VAR_7->regs;

 FUNC_14(VAR_10);

 VAR_12 = FUNC_17(VAR_7, VAR_11, VAR_3);
 if (VAR_12)
  goto err_hcd;

 return 0;

err_hcd:
 FUNC_15(VAR_10);
err_irq:
err_rst:
 if (VAR_10->phyref)
  FUNC_3(VAR_10->phyref);
err_phyref:
 if (VAR_10->refsrc)
  FUNC_3(VAR_10->refsrc);
err_refsrc:
 FUNC_3(VAR_10->clk);
err_syscon:
err_clk:
err_ioremap:
err_res:
 FUNC_20(VAR_7);

 return VAR_12;
}
