
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_table_header*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,struct acpi_table_header**,scalar_t__*,int *) ;
 int FUNC_4 (struct acpi_table_header*,scalar_t__,int ) ;
 int FUNC_5 (int ,char*,scalar_t__,...) ;
 int VAR_2 ;

int FUNC_6(void)
{
 struct acpi_table_header *VAR_3;
 u32 VAR_4 = 0;
 acpi_physical_address VAR_5;
 acpi_status VAR_6;
 int VAR_7;
 u32 VAR_8;



 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_6 =
      FUNC_3(VAR_8, &VAR_3, &VAR_4, &VAR_5);
  if (FUNC_0(VAR_6)) {



   if (VAR_6 == VAR_0) {
    return (0);
   } else if (VAR_8 == 0) {
    FUNC_5(VAR_2,
     "Could not get ACPI tables, %ld\n",
     FUNC_2(VAR_6));
    return (-1);
   } else {
    FUNC_5(VAR_2,
     "Could not get ACPI table at index %ld, %s\n",
     VAR_8, FUNC_2(VAR_6));
    continue;
   }
  }

  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5);
  FUNC_1(VAR_3);

  if (VAR_7) {
   break;
  }
 }



 return (-1);
}
