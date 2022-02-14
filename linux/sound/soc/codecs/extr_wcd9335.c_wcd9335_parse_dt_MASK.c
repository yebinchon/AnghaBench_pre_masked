
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wcd9335_codec {int reset_gpio; TYPE_1__* supplies; void* native_clk; void* mclk; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {char* supply; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device_node*,char*,int ) ;
 int FUNC_5 (struct device*,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct wcd9335_codec *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct device_node *VAR_3 = VAR_2->of_node;
 int VAR_4;

 VAR_1->reset_gpio = FUNC_4(VAR_3, "reset-gpios", 0);
 if (VAR_1->reset_gpio < 0) {
  FUNC_2(VAR_2, "Reset GPIO missing from DT\n");
  return VAR_1->reset_gpio;
 }

 VAR_1->mclk = FUNC_3(VAR_2, "mclk");
 if (FUNC_0(VAR_1->mclk)) {
  FUNC_2(VAR_2, "mclk not found\n");
  return FUNC_1(VAR_1->mclk);
 }

 VAR_1->native_clk = FUNC_3(VAR_2, "slimbus");
 if (FUNC_0(VAR_1->native_clk)) {
  FUNC_2(VAR_2, "slimbus clock not found\n");
  return FUNC_1(VAR_1->native_clk);
 }

 VAR_1->supplies[0].supply = "vdd-buck";
 VAR_1->supplies[1].supply = "vdd-buck-sido";
 VAR_1->supplies[2].supply = "vdd-tx";
 VAR_1->supplies[3].supply = "vdd-rx";
 VAR_1->supplies[4].supply = "vdd-io";

 VAR_4 = FUNC_5(VAR_2, VAR_0, VAR_1->supplies);
 if (VAR_4) {
  FUNC_2(VAR_2, "Failed to get supplies: err = %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
