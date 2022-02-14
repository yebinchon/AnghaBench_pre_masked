
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acpi_table_header*,struct acpi_table_header**) ;

acpi_status
FUNC_1(struct acpi_table_header *VAR_3,
         struct acpi_table_header **VAR_4)
{

 if (!VAR_3 || !VAR_4) {
  return (VAR_0);
 }

 *VAR_4 = ((void*)0);







 return (VAR_1);

}
