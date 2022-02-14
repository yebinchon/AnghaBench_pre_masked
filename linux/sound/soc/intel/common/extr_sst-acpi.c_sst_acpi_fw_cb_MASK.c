
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_pdata {struct firmware const* fw; } ;
struct sst_acpi_priv {int pdev_pcm; struct snd_soc_acpi_mach* mach; struct sst_acpi_desc* desc; struct sst_pdata sst_pdata; } ;
struct sst_acpi_desc {int drv_name; } ;
struct snd_soc_acpi_mach {int fw_filename; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct firmware {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ,...) ;
 int FUNC_3 (struct device*,int ,int,struct sst_pdata*,int) ;
 struct sst_acpi_priv* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static void FUNC_5(const struct firmware *VAR_0, void *VAR_1)
{
 struct platform_device *VAR_2 = VAR_1;
 struct device *VAR_3 = &VAR_2->dev;
 struct sst_acpi_priv *VAR_4 = FUNC_4(VAR_2);
 struct sst_pdata *VAR_5 = &VAR_4->sst_pdata;
 struct sst_acpi_desc *VAR_6 = VAR_4->desc;
 struct snd_soc_acpi_mach *VAR_7 = VAR_4->mach;

 VAR_5->fw = VAR_0;
 if (!VAR_0) {
  FUNC_2(VAR_3, "Cannot load firmware %s\n", VAR_7->fw_filename);
  return;
 }


 VAR_4->pdev_pcm =
  FUNC_3(VAR_3, VAR_6->drv_name, -1,
           VAR_5, sizeof(*VAR_5));
 if (FUNC_0(VAR_4->pdev_pcm)) {
  FUNC_2(VAR_3, "Cannot register device %s. Error %d\n",
   VAR_6->drv_name, (int)FUNC_1(VAR_4->pdev_pcm));
 }

 return;
}
