
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_acpi_mach {int fw_filename; } ;
struct skl_dev {int dummy; } ;
struct hdac_bus {scalar_t__ codec_mask; } ;


 struct hdac_bus* FUNC_0 (struct skl_dev*) ;
 struct snd_soc_acpi_mach* VAR_0 ;

__attribute__((used)) static struct snd_soc_acpi_mach *FUNC_1(struct skl_dev *VAR_1,
     struct snd_soc_acpi_mach *VAR_2)
{
 struct hdac_bus *VAR_3 = FUNC_0(VAR_1);
 struct snd_soc_acpi_mach *VAR_4;


 if (VAR_3->codec_mask == 0)
  return ((void*)0);


 VAR_4 = VAR_0;


 VAR_4->fw_filename = VAR_2->fw_filename;

 return VAR_4;
}
