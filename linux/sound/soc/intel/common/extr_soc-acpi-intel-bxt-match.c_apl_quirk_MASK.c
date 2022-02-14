
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_acpi_mach {int dummy; } ;
struct dmi_system_id {scalar_t__ driver_data; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct dmi_system_id* FUNC_0 (int ) ;

__attribute__((used)) static struct snd_soc_acpi_mach *FUNC_1(void *VAR_2)
{
 struct snd_soc_acpi_mach *VAR_3 = VAR_2;
 const struct dmi_system_id *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4) {
  VAR_5 = (unsigned long)VAR_4->driver_data;
  if (VAR_5 == VAR_0)
   return ((void*)0);
 }

 return VAR_3;
}
