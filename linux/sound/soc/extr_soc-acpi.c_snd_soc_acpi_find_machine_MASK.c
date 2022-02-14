
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_acpi_mach {struct snd_soc_acpi_mach* (* machine_quirk ) (struct snd_soc_acpi_mach*) ;scalar_t__* id; } ;


 scalar_t__ FUNC_0 (scalar_t__*,int *,int) ;
 struct snd_soc_acpi_mach* FUNC_1 (struct snd_soc_acpi_mach*) ;

struct snd_soc_acpi_mach *
FUNC_2(struct snd_soc_acpi_mach *VAR_0)
{
 struct snd_soc_acpi_mach *VAR_1;
 struct snd_soc_acpi_mach *VAR_2;

 for (VAR_1 = VAR_0; VAR_1->id[0]; VAR_1++) {
  if (FUNC_0(VAR_1->id, ((void*)0), -1)) {
   if (VAR_1->machine_quirk) {
    VAR_2 = VAR_1->machine_quirk(VAR_1);
    if (!VAR_2)
     continue;
    VAR_1 = VAR_2;
   }

   return VAR_1;
  }
 }
 return ((void*)0);
}
