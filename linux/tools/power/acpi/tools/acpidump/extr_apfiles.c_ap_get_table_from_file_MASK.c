
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_size ;
typedef int ACPI_FILE ;


 struct acpi_table_header* FUNC_0 (int) ;
 int FUNC_1 (struct acpi_table_header*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct acpi_table_header*,int,int,int ) ;
 int VAR_1 ;

struct acpi_table_header *FUNC_7(char *VAR_2,
       u32 *VAR_3)
{
 struct acpi_table_header *VAR_4 = ((void*)0);
 ACPI_FILE VAR_5;
 u32 VAR_6;
 acpi_size VAR_7;



 VAR_5 = FUNC_4(VAR_2, "rb");
 if (!VAR_5) {
  FUNC_5(VAR_1, "Could not open input file: %s\n", VAR_2);
  return (((void*)0));
 }



 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 == VAR_0) {
  FUNC_5(VAR_1,
   "Could not get input file size: %s\n", VAR_2);
  goto cleanup;
 }



 VAR_4 = FUNC_0(VAR_6);
 if (!VAR_4) {
  FUNC_5(VAR_1,
   "Could not allocate file buffer of size: %u\n",
   VAR_6);
  goto cleanup;
 }



 VAR_7 = FUNC_6(VAR_4, 1, VAR_6, VAR_5);
 if (VAR_7 != VAR_6) {
  FUNC_5(VAR_1, "Could not read input file: %s\n", VAR_2);
  FUNC_1(VAR_4);
  VAR_4 = ((void*)0);
  goto cleanup;
 }

 *VAR_3 = VAR_6;

cleanup:
 FUNC_3(VAR_5);
 return (VAR_4);
}
