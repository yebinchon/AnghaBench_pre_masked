
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; struct aic32x4_pdata* platform_data; } ;
struct aic32x4_priv {int swapdacs; int rstn_gpio; char* mclk_name; scalar_t__ micpga_routing; scalar_t__ power_cfg; struct device* dev; } ;
struct aic32x4_pdata {int swapdacs; int rstn_gpio; scalar_t__ micpga_routing; scalar_t__ power_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 int FUNC_2 (struct aic32x4_priv*) ;
 int FUNC_3 (struct aic32x4_priv*,struct device_node*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct aic32x4_priv*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,struct aic32x4_priv*) ;
 int FUNC_8 (struct device*,int,int ,char*) ;
 struct aic32x4_priv* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int *,int *,int) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_4 ;

int FUNC_12(struct device *VAR_5, struct regmap *VAR_6)
{
 struct aic32x4_priv *VAR_7;
 struct aic32x4_pdata *VAR_8 = VAR_5->platform_data;
 struct device_node *VAR_9 = VAR_5->of_node;
 int VAR_10;

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = FUNC_9(VAR_5, sizeof(struct aic32x4_priv),
       VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->dev = VAR_5;
 FUNC_7(VAR_5, VAR_7);

 if (VAR_8) {
  VAR_7->power_cfg = VAR_8->power_cfg;
  VAR_7->swapdacs = VAR_8->swapdacs;
  VAR_7->micpga_routing = VAR_8->micpga_routing;
  VAR_7->rstn_gpio = VAR_8->rstn_gpio;
  VAR_7->mclk_name = "mclk";
 } else if (VAR_9) {
  VAR_10 = FUNC_3(VAR_7, VAR_9);
  if (VAR_10) {
   FUNC_6(VAR_5, "Failed to parse DT node\n");
   return VAR_10;
  }
 } else {
  VAR_7->power_cfg = 0;
  VAR_7->swapdacs = 0;
  VAR_7->micpga_routing = 0;
  VAR_7->rstn_gpio = -1;
  VAR_7->mclk_name = "mclk";
 }

 VAR_10 = FUNC_4(VAR_5, VAR_7->mclk_name);
 if (VAR_10)
  return VAR_10;

 if (FUNC_11(VAR_7->rstn_gpio)) {
  VAR_10 = FUNC_8(VAR_5, VAR_7->rstn_gpio,
    VAR_2, "tlv320aic32x4 rstn");
  if (VAR_10 != 0)
   return VAR_10;
 }

 VAR_10 = FUNC_5(VAR_5, VAR_7);
 if (VAR_10) {
  FUNC_6(VAR_5, "Failed to setup regulators\n");
  return VAR_10;
 }

 VAR_10 = FUNC_10(VAR_5,
   &VAR_4, &VAR_3, 1);
 if (VAR_10) {
  FUNC_6(VAR_5, "Failed to register component\n");
  FUNC_2(VAR_7);
  return VAR_10;
 }

 return 0;
}
