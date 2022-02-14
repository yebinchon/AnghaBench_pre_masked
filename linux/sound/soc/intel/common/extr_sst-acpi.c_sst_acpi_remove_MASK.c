
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_pdata {int fw; } ;
struct sst_acpi_priv {int pdev_pcm; int pdev_mach; struct sst_pdata sst_pdata; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sst_acpi_priv* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct sst_acpi_priv *VAR_1 = FUNC_2(VAR_0);
 struct sst_pdata *VAR_2 = &VAR_1->sst_pdata;

 FUNC_1(VAR_1->pdev_mach);
 if (!FUNC_0(VAR_1->pdev_pcm))
  FUNC_1(VAR_1->pdev_pcm);
 FUNC_3(VAR_2->fw);

 return 0;
}
