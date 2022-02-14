
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_button {int handle; } ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct acpi_button*) ;
 int FUNC_2 (int ) ;

ACPI_STATUS
FUNC_3 (
 void *VAR_3)
{
 struct acpi_button *VAR_4 = (struct acpi_button *) VAR_3;

 FUNC_0("acpi_button_notify_fixed");

 if (!VAR_4)
  FUNC_2(VAR_1);

 FUNC_1(VAR_4->handle, VAR_0, VAR_4);

 FUNC_2(VAR_2);
}
