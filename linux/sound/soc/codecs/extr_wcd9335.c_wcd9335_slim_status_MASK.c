
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {void* if_regmap; struct slim_device* slim_ifc_dev; void* regmap; struct slim_device* slim; } ;
struct device {int of_node; } ;
struct slim_device {int ctrl; struct device dev; } ;
struct device_node {int dummy; } ;
typedef enum slim_device_status { ____Placeholder_slim_device_status } slim_device_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 struct wcd9335_codec* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (int ,char*,int ) ;
 struct slim_device* FUNC_6 (int ,struct device_node*) ;
 void* FUNC_7 (struct slim_device*,int *) ;
 int FUNC_8 (struct slim_device*) ;
 int FUNC_9 (struct wcd9335_codec*) ;
 int VAR_1 ;
 int FUNC_10 (struct wcd9335_codec*) ;
 int FUNC_11 (struct wcd9335_codec*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_12(struct slim_device *VAR_3,
          enum slim_device_status VAR_4)
{
 struct device *VAR_5 = &VAR_3->dev;
 struct device_node *VAR_6;
 struct wcd9335_codec *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_5);

 VAR_6 = FUNC_5(VAR_5->of_node, "slim-ifc-dev", 0);
 if (!VAR_6) {
  FUNC_2(VAR_5, "No Interface device found\n");
  return -VAR_0;
 }

 VAR_7->slim = VAR_3;
 VAR_7->slim_ifc_dev = FUNC_6(VAR_3->ctrl, VAR_6);
 FUNC_4(VAR_6);
 if (!VAR_7->slim_ifc_dev) {
  FUNC_2(VAR_5, "Unable to get SLIM Interface device\n");
  return -VAR_0;
 }

 FUNC_8(VAR_7->slim_ifc_dev);

 VAR_7->regmap = FUNC_7(VAR_3, &VAR_2);
 if (FUNC_0(VAR_7->regmap)) {
  FUNC_2(VAR_5, "Failed to allocate slim register map\n");
  return FUNC_1(VAR_7->regmap);
 }

 VAR_7->if_regmap = FUNC_7(VAR_7->slim_ifc_dev,
        &VAR_1);
 if (FUNC_0(VAR_7->if_regmap)) {
  FUNC_2(VAR_5, "Failed to allocate ifc register map\n");
  return FUNC_1(VAR_7->if_regmap);
 }

 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_5, "Failed to bringup WCD9335\n");
  return VAR_8;
 }

 VAR_8 = FUNC_10(VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_11(VAR_7);

 return VAR_8;
}
