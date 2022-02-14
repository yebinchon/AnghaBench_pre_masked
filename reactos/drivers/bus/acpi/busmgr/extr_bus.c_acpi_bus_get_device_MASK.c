
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,void**) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

int
FUNC_4 (
 ACPI_HANDLE VAR_4,
 struct acpi_device **VAR_5)
{
 ACPI_STATUS VAR_6 = VAR_2;

 if (!VAR_5)
  FUNC_3(VAR_0);



 VAR_6 = FUNC_1(VAR_4, VAR_3, (void**)VAR_5);
 if (FUNC_0(VAR_6) || !*VAR_5) {
  FUNC_2( "Error getting context for object [%p]\n",
   VAR_4);
  FUNC_3(VAR_1);
 }

 return 0;
}
