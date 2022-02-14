
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct aic32x4_setup_data {int gpio_func; } ;
struct aic32x4_priv {int swapdacs; struct aic32x4_setup_data* setup; int rstn_gpio; scalar_t__ micpga_routing; int mclk_name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aic32x4_setup_data* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct device_node*,int) ;
 int FUNC_2 (struct device_node*,char*,int ) ;
 int FUNC_3 (struct device_node*,char*,char*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct aic32x4_priv *VAR_3,
  struct device_node *VAR_4)
{
 struct aic32x4_setup_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3->dev, sizeof(*VAR_5),
       VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_4, "clock-names", "mclk");
 if (VAR_6 < 0)
  return -VAR_0;
 VAR_3->mclk_name = FUNC_1(VAR_4, VAR_6);

 VAR_3->swapdacs = 0;
 VAR_3->micpga_routing = 0;
 VAR_3->rstn_gpio = FUNC_2(VAR_4, "reset-gpios", 0);

 if (FUNC_4(VAR_4, "aic32x4-gpio-func",
    VAR_5->gpio_func, 5) >= 0)
  VAR_3->setup = VAR_5;
 return 0;
}
