
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlnx_pcm_drv_data {int mm2s_presence; int mm2s_irq; int s2mm_presence; int s2mm_irq; scalar_t__ axi_clk; scalar_t__ mmio; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,struct xlnx_pcm_drv_data*) ;
 scalar_t__ FUNC_6 (struct device*,char*) ;
 scalar_t__ FUNC_7 (struct device*,struct resource*) ;
 struct xlnx_pcm_drv_data* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int ,int ,char*,struct device*) ;
 int FUNC_10 (struct device*,int *,int *,int ) ;
 void* FUNC_11 (struct platform_device*,char*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (scalar_t__) ;
 int VAR_11 ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_14)
{
 int VAR_15;
 u32 VAR_16;
 struct xlnx_pcm_drv_data *VAR_17;
 struct resource *VAR_18;
 struct device *VAR_19 = &VAR_14->dev;

 VAR_17 = FUNC_8(VAR_19, sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->axi_clk = FUNC_6(VAR_19, "s_axi_lite_aclk");
 if (FUNC_0(VAR_17->axi_clk)) {
  VAR_15 = FUNC_1(VAR_17->axi_clk);
  FUNC_4(VAR_19, "failed to get s_axi_lite_aclk(%d)\n", VAR_15);
  return VAR_15;
 }
 VAR_15 = FUNC_3(VAR_17->axi_clk);
 if (VAR_15) {
  FUNC_4(VAR_19,
   "failed to enable s_axi_lite_aclk(%d)\n", VAR_15);
  return VAR_15;
 }

 VAR_18 = FUNC_12(VAR_14, VAR_5, 0);
 if (!VAR_18) {
  FUNC_4(VAR_19, "audio formatter node:addr to resource failed\n");
  VAR_15 = -VAR_3;
  goto clk_err;
 }
 VAR_17->mmio = FUNC_7(VAR_19, VAR_18);
 if (FUNC_0(VAR_17->mmio)) {
  FUNC_4(VAR_19, "audio formatter ioremap failed\n");
  VAR_15 = FUNC_1(VAR_17->mmio);
  goto clk_err;
 }

 VAR_16 = FUNC_13(VAR_17->mmio + VAR_8);
 if (VAR_16 & VAR_0) {
  VAR_17->mm2s_presence = 1;
  VAR_15 = FUNC_15(VAR_17->mmio +
            VAR_9);
  if (VAR_15) {
   FUNC_4(VAR_19, "audio formatter reset failed\n");
   goto clk_err;
  }
  FUNC_14(VAR_17->mmio +
         VAR_9,
         VAR_7);

  VAR_17->mm2s_irq = FUNC_11(VAR_14,
         "irq_mm2s");
  if (VAR_17->mm2s_irq < 0) {
   VAR_15 = VAR_17->mm2s_irq;
   goto clk_err;
  }
  VAR_15 = FUNC_9(VAR_19, VAR_17->mm2s_irq,
           VAR_12, 0,
           "xlnx_formatter_pcm_mm2s_irq", VAR_19);
  if (VAR_15) {
   FUNC_4(VAR_19, "xlnx audio mm2s irq request failed\n");
   goto clk_err;
  }
 }
 if (VAR_16 & VAR_1) {
  VAR_17->s2mm_presence = 1;
  VAR_15 = FUNC_15(VAR_17->mmio +
            VAR_10);
  if (VAR_15) {
   FUNC_4(VAR_19, "audio formatter reset failed\n");
   goto clk_err;
  }
  FUNC_14(VAR_17->mmio +
         VAR_10,
         VAR_6);

  VAR_17->s2mm_irq = FUNC_11(VAR_14,
         "irq_s2mm");
  if (VAR_17->s2mm_irq < 0) {
   VAR_15 = VAR_17->s2mm_irq;
   goto clk_err;
  }
  VAR_15 = FUNC_9(VAR_19, VAR_17->s2mm_irq,
           VAR_13, 0,
           "xlnx_formatter_pcm_s2mm_irq",
           VAR_19);
  if (VAR_15) {
   FUNC_4(VAR_19, "xlnx audio s2mm irq request failed\n");
   goto clk_err;
  }
 }

 FUNC_5(VAR_19, VAR_17);

 VAR_15 = FUNC_10(VAR_19, &VAR_11,
           ((void*)0), 0);
 if (VAR_15) {
  FUNC_4(VAR_19, "pcm platform device register failed\n");
  goto clk_err;
 }

 return 0;

clk_err:
 FUNC_2(VAR_17->axi_clk);
 return VAR_15;
}
