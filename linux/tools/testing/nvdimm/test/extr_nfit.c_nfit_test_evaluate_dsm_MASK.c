
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
typedef int u64 ;
typedef int guid_t ;
typedef int * acpi_handle ;


 int VAR_0 ;
 union acpi_object* FUNC_0 (int ) ;
 int VAR_1 ;
 union acpi_object* VAR_2 ;

__attribute__((used)) static union acpi_object *FUNC_1(acpi_handle VAR_3,
  const guid_t *VAR_4, u64 VAR_5, u64 VAR_6, union acpi_object *VAR_7)
{
 if (VAR_3 != &VAR_1)
  return FUNC_0(-VAR_0);

 return VAR_2;
}
