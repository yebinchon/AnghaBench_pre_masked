
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,char*,int *,unsigned long long*) ;

ACPI_STATUS FUNC_2(ACPI_HANDLE VAR_6,
           unsigned long long *VAR_7)
{
 ACPI_STATUS VAR_8;

 VAR_8 = FUNC_1(VAR_6, "_STA", ((void*)0), VAR_7);
 if (FUNC_0(VAR_8))
  return VAR_5;

 if (VAR_8 == VAR_4) {
  *VAR_7 = VAR_2 | VAR_0 |
         VAR_3 | VAR_1;
  return VAR_5;
 }
 return VAR_8;
}
