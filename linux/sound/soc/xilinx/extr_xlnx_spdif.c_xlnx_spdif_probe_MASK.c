
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spdif_dev_data {scalar_t__ axi_clk; scalar_t__ base; scalar_t__ aclk; int chsts_q; scalar_t__ mode; } ;
struct snd_soc_dai_driver {int name; } ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*,struct spdif_dev_data*) ;
 scalar_t__ FUNC_7 (struct device*,char*) ;
 struct spdif_dev_data* FUNC_8 (struct device*,int,int ) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct device*,int ,int ,int ,char*,struct spdif_dev_data*) ;
 int FUNC_11 (struct device*,int *,struct snd_soc_dai_driver*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct device_node*,char*,scalar_t__*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (int ,scalar_t__) ;
 int VAR_6 ;
 struct snd_soc_dai_driver VAR_7 ;
 struct snd_soc_dai_driver VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_10)
{
 int VAR_11;
 struct resource *VAR_12;
 struct snd_soc_dai_driver *VAR_13;
 struct spdif_dev_data *VAR_14;

 struct device *VAR_15 = &VAR_10->dev;
 struct device_node *VAR_16 = VAR_15->of_node;

 VAR_14 = FUNC_8(VAR_15, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->axi_clk = FUNC_7(VAR_15, "s_axi_aclk");
 if (FUNC_0(VAR_14->axi_clk)) {
  VAR_11 = FUNC_1(VAR_14->axi_clk);
  FUNC_4(VAR_15, "failed to get s_axi_aclk(%d)\n", VAR_11);
  return VAR_11;
 }
 VAR_11 = FUNC_3(VAR_14->axi_clk);
 if (VAR_11) {
  FUNC_4(VAR_15, "failed to enable s_axi_aclk(%d)\n", VAR_11);
  return VAR_11;
 }

 VAR_14->base = FUNC_9(VAR_10, 0);
 if (FUNC_0(VAR_14->base)) {
  VAR_11 = FUNC_1(VAR_14->base);
  goto clk_err;
 }
 VAR_11 = FUNC_13(VAR_16, "xlnx,spdif-mode", &VAR_14->mode);
 if (VAR_11 < 0) {
  FUNC_4(VAR_15, "cannot get SPDIF mode\n");
  goto clk_err;
 }
 if (VAR_14->mode) {
  VAR_13 = &VAR_8;
 } else {
  VAR_12 = FUNC_14(VAR_10, VAR_3, 0);
  if (!VAR_12) {
   FUNC_4(VAR_15, "No IRQ resource found\n");
   VAR_11 = -VAR_0;
   goto clk_err;
  }
  VAR_11 = FUNC_10(VAR_15, VAR_12->start,
           VAR_9,
           0, "XLNX_SPDIF_RX", VAR_14);
  if (VAR_11) {
   FUNC_4(VAR_15, "spdif rx irq request failed\n");
   VAR_11 = -VAR_0;
   goto clk_err;
  }

  FUNC_12(&VAR_14->chsts_q);
  VAR_13 = &VAR_7;
 }

 VAR_11 = FUNC_13(VAR_16, "xlnx,aud_clk_i", &VAR_14->aclk);
 if (VAR_11 < 0) {
  FUNC_4(VAR_15, "cannot get aud_clk_i value\n");
  goto clk_err;
 }

 FUNC_6(VAR_15, VAR_14);

 VAR_11 = FUNC_11(VAR_15, &VAR_6,
           VAR_13, 1);
 if (VAR_11) {
  FUNC_4(VAR_15, "SPDIF component registration failed\n");
  goto clk_err;
 }

 FUNC_15(VAR_5, VAR_14->base + VAR_4);
 FUNC_5(VAR_15, "%s DAI registered\n", VAR_13->name);

clk_err:
 FUNC_2(VAR_14->axi_clk);
 return VAR_11;
}
