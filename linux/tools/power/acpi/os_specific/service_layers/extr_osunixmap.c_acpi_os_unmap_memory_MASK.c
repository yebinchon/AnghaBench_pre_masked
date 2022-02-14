
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int acpi_size ;
typedef int acpi_physical_address ;


 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;

void FUNC_3(void *VAR_0, acpi_size VAR_1)
{
 acpi_physical_address VAR_2;
 acpi_size VAR_3;

 VAR_3 = FUNC_1();
 VAR_2 = FUNC_0(VAR_0) % VAR_3;
 FUNC_2((u8 *)VAR_0 - VAR_2, (VAR_1 + VAR_2));
}
