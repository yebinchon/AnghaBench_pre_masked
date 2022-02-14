
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dev {struct platform_device* dmic_dev; } ;
struct platform_device {int dummy; } ;
struct hdac_bus {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (char*,int) ;
 int FUNC_3 (struct platform_device*) ;
 struct hdac_bus* FUNC_4 (struct skl_dev*) ;

__attribute__((used)) static int FUNC_5(struct skl_dev *VAR_1)
{
 struct hdac_bus *VAR_2 = FUNC_4(VAR_1);
 struct platform_device *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_2("dmic-codec", -1);
 if (!VAR_3) {
  FUNC_0(VAR_2->dev, "failed to allocate dmic device\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "failed to add dmic device: %d\n", VAR_4);
  FUNC_3(VAR_3);
  return VAR_4;
 }
 VAR_1->dmic_dev = VAR_3;

 return 0;
}
