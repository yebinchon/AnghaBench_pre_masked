
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {char* signature; int length; } ;


 int FUNC_0 (struct acpi_table_header*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct acpi_table_header*,int ,int ) ;
 struct acpi_table_header* FUNC_3 (char*,int*) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int FUNC_5(char *VAR_2)
{
 struct acpi_table_header *VAR_3;
 u32 VAR_4 = 0;
 int VAR_5 = -1;



 VAR_3 = FUNC_3(VAR_2, &VAR_4);
 if (!VAR_3) {
  return (-1);
 }

 if (!FUNC_1(VAR_3->signature)) {
  FUNC_4(VAR_1,
   "No valid ACPI signature was found in input file %s\n",
   VAR_2);
 }



 if (VAR_3->length > VAR_4) {
  FUNC_4(VAR_1,
   "Table length (0x%X) is too large for input file (0x%X) %s\n",
   VAR_3->length, VAR_4, VAR_2);
  goto exit;
 }

 if (VAR_0) {
  FUNC_4(VAR_1,
   "Input file:  %s contains table [%4.4s], 0x%X (%u) bytes\n",
   VAR_2, VAR_3->signature, VAR_4, VAR_4);
 }

 VAR_5 = FUNC_2(VAR_3, 0, 0);

exit:
 FUNC_0(VAR_3);
 return (VAR_5);
}
