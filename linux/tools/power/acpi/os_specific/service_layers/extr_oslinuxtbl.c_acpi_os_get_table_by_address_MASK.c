
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct acpi_table_header*) ;
 struct acpi_table_header* FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct acpi_table_header*,struct acpi_table_header*,scalar_t__) ;
 int FUNC_4 (int ,int *,struct acpi_table_header**) ;
 int FUNC_5 () ;
 int FUNC_6 (struct acpi_table_header*) ;

acpi_status
FUNC_7(acpi_physical_address VAR_3,
        struct acpi_table_header **VAR_4)
{
 u32 VAR_5;
 struct acpi_table_header *VAR_6;
 struct acpi_table_header *VAR_7 = ((void*)0);
 acpi_status VAR_8 = VAR_2;



 VAR_8 = FUNC_5();
 if (FUNC_0(VAR_8)) {
  return (VAR_8);
 }



 VAR_8 = FUNC_4(VAR_3, ((void*)0), &VAR_6);
 if (FUNC_0(VAR_8)) {
  return (VAR_8);
 }



 VAR_5 = FUNC_1(VAR_6);
 if (VAR_5 == 0) {
  VAR_8 = VAR_0;
  goto exit;
 }

 VAR_7 = FUNC_2(1, VAR_5);
 if (!VAR_7) {
  VAR_8 = VAR_1;
  goto exit;
 }

 FUNC_3(VAR_7, VAR_6, VAR_5);

exit:
 FUNC_6(VAR_6);
 *VAR_4 = VAR_7;
 return (VAR_8);
}
