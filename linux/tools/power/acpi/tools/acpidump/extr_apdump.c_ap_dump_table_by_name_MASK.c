
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_table_header*) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,scalar_t__,struct acpi_table_header**,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct acpi_table_header*,scalar_t__,int ) ;
 int FUNC_7 (int ,char*,char*,...) ;
 int VAR_5 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

int FUNC_10(char *VAR_6)
{
 char VAR_7[VAR_0 + 1];
 u32 VAR_8;
 struct acpi_table_header *VAR_9;
 acpi_physical_address VAR_10;
 acpi_status VAR_11;
 int VAR_12;

 if (FUNC_9(VAR_6) != VAR_0) {
  FUNC_7(VAR_5,
   "Invalid table signature [%s]: must be exactly 4 characters\n",
   VAR_6);
  return (-1);
 }



 FUNC_8(VAR_7, VAR_6);
 FUNC_5(VAR_7);



 if (FUNC_0(VAR_7, "FADT")) {
  FUNC_8(VAR_7, VAR_1);
 } else if (FUNC_0(VAR_7, "MADT")) {
  FUNC_8(VAR_7, VAR_2);
 }



 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_11 = FUNC_4(VAR_7, VAR_8,
         &VAR_9, &VAR_10);
  if (FUNC_1(VAR_11)) {



   if (VAR_11 == VAR_3) {
    return (0);
   }

   FUNC_7(VAR_5,
    "Could not get ACPI table with signature [%s], %s\n",
    VAR_7, FUNC_3(VAR_11));
   return (-1);
  }

  VAR_12 = FUNC_6(VAR_9, VAR_8, VAR_10);
  FUNC_2(VAR_9);

  if (VAR_12) {
   break;
  }
 }



 return (-1);
}
