
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,void**) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;

int FUNC_3(ACPI_HANDLE VAR_2, void **VAR_3)
{
 ACPI_STATUS VAR_4 = VAR_0;

 if (!*VAR_3)
  return -1;

 VAR_4 = FUNC_1(VAR_2, VAR_1, VAR_3);
 if (FUNC_0(VAR_4) || !*VAR_3) {
  FUNC_2("No context for object [%p]\n", VAR_2);
  return -1;
 }

 return 0;
}
