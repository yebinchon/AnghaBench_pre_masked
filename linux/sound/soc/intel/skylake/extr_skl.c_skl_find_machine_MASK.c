
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dmic_num; } ;
struct snd_soc_acpi_mach {TYPE_1__ mach_params; struct skl_machine_pdata* pdata; int fw_filename; } ;
struct skl_machine_pdata {int use_tplg_pcm; } ;
struct skl_dev {int nhlt; TYPE_2__* pci; int use_tplg_pcm; int fw_name; struct snd_soc_acpi_mach* mach; } ;
struct hdac_bus {int dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 struct snd_soc_acpi_mach* FUNC_3 (struct skl_dev*,void*) ;
 struct hdac_bus* FUNC_4 (struct skl_dev*) ;
 struct snd_soc_acpi_mach* FUNC_5 (struct snd_soc_acpi_mach*) ;

__attribute__((used)) static int FUNC_6(struct skl_dev *VAR_1, void *VAR_2)
{
 struct hdac_bus *VAR_3 = FUNC_4(VAR_1);
 struct snd_soc_acpi_mach *VAR_4 = VAR_2;
 struct skl_machine_pdata *VAR_5;

 VAR_4 = FUNC_5(VAR_4);
 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "No matching I2S machine driver found\n");
  VAR_4 = FUNC_3(VAR_1, VAR_2);
  if (!VAR_4) {
   FUNC_1(VAR_3->dev, "No matching machine driver found\n");
   return -VAR_0;
  }
 }

 VAR_1->mach = VAR_4;
 VAR_1->fw_name = VAR_4->fw_filename;
 VAR_5 = VAR_4->pdata;

 if (VAR_5) {
  VAR_1->use_tplg_pcm = VAR_5->use_tplg_pcm;
  VAR_4->mach_params.dmic_num =
   FUNC_2(&VAR_1->pci->dev,
      VAR_1->nhlt);
 }

 return 0;
}
