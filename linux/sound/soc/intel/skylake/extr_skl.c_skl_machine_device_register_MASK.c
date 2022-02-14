
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int codec_mask; int platform; } ;
struct snd_soc_acpi_mach {TYPE_1__ mach_params; int drv_name; } ;
struct skl_dev {struct platform_device* i2s_dev; struct snd_soc_acpi_mach* mach; } ;
struct platform_device {int dummy; } ;
struct hdac_bus {int dev; int codec_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,void const*,int) ;
 struct platform_device* FUNC_4 (int ,int) ;
 int FUNC_5 (struct platform_device*) ;
 struct hdac_bus* FUNC_6 (struct skl_dev*) ;

__attribute__((used)) static int FUNC_7(struct skl_dev *VAR_1)
{
 struct snd_soc_acpi_mach *VAR_2 = VAR_1->mach;
 struct hdac_bus *VAR_3 = FUNC_6(VAR_1);
 struct platform_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_2->drv_name, -1);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3->dev, "platform device alloc failed\n");
  return -VAR_0;
 }

 VAR_2->mach_params.platform = FUNC_1(VAR_3->dev);
 VAR_2->mach_params.codec_mask = VAR_3->codec_mask;

 VAR_5 = FUNC_3(VAR_4, (const void *)VAR_2, sizeof(*VAR_2));
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "failed to add machine device platform data\n");
  FUNC_5(VAR_4);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "failed to add machine device\n");
  FUNC_5(VAR_4);
  return -VAR_0;
 }


 VAR_1->i2s_dev = VAR_4;

 return 0;
}
