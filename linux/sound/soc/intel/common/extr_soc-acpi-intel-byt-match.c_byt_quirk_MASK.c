
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_acpi_mach {int dummy; } ;





 int VAR_0 ;
 struct snd_soc_acpi_mach VAR_1 ;
 int VAR_2 ;
 struct snd_soc_acpi_mach VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static struct snd_soc_acpi_mach *FUNC_1(void *VAR_4)
{
 struct snd_soc_acpi_mach *VAR_5 = VAR_4;

 FUNC_0(VAR_2);

 switch (VAR_0) {
 case 128:
 case 130:
  return &VAR_3;
 case 129:
  return &VAR_1;
 default:
  return VAR_5;
 }
}
