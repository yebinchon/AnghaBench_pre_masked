
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_predefined_names {int dummy; } ;
typedef int * acpi_string ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;

acpi_status
FUNC_0(const struct acpi_predefined_names *VAR_2,
       acpi_string *VAR_3)
{

 if (!VAR_2 || !VAR_3) {
  return (VAR_0);
 }

 *VAR_3 = ((void*)0);
 return (VAR_1);
}
