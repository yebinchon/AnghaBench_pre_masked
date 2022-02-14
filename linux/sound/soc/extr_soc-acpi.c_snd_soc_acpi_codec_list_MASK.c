
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_acpi_mach {int * quirk_data; } ;
struct snd_soc_acpi_codecs {int num_codecs; int * codecs; } ;


 int FUNC_0 (int ,int *,int) ;

struct snd_soc_acpi_mach *FUNC_1(void *VAR_0)
{
 struct snd_soc_acpi_mach *VAR_1 = VAR_0;
 struct snd_soc_acpi_codecs *VAR_2 =
  (struct snd_soc_acpi_codecs *) VAR_1->quirk_data;
 int VAR_3;

 if (VAR_1->quirk_data == ((void*)0))
  return VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_codecs; VAR_3++) {
  if (!FUNC_0(VAR_2->codecs[VAR_3], ((void*)0), -1))
   return ((void*)0);
 }

 return VAR_1;
}
