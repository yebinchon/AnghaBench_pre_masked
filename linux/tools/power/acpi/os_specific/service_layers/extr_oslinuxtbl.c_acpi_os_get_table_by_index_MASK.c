
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct osl_table_info {scalar_t__ instance; int signature; struct osl_table_info* next; } ;
struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__,struct acpi_table_header**,int *) ;
 scalar_t__ VAR_1 ;
 struct osl_table_info* VAR_2 ;
 int FUNC_3 () ;

acpi_status
FUNC_4(u32 VAR_3,
      struct acpi_table_header **VAR_4,
      u32 *VAR_5, acpi_physical_address *VAR_6)
{
 struct osl_table_info *VAR_7;
 acpi_status VAR_8;
 u32 VAR_9;



 VAR_8 = FUNC_3();
 if (FUNC_0(VAR_8)) {
  return (VAR_8);
 }



 if (VAR_3 >= VAR_1) {
  return (VAR_0);
 }



 VAR_7 = VAR_2;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7 = VAR_7->next;
 }



 VAR_8 = FUNC_2(VAR_7->signature, VAR_7->instance,
        VAR_4, VAR_6);

 if (FUNC_1(VAR_8)) {
  *VAR_5 = VAR_7->instance;
 }
 return (VAR_8);
}
