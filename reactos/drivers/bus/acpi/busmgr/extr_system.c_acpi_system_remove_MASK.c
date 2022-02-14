
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_system {int dummy; } ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct acpi_system*,char) ;
 scalar_t__ FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4 (
 struct acpi_device *VAR_0,
 int VAR_1)
{
 struct acpi_system *VAR_2 = ((void*)0);

 FUNC_0("acpi_system_remove");

 if (!VAR_0 || !FUNC_2(VAR_0))
  FUNC_3(-1);

 VAR_2 = (struct acpi_system *) FUNC_2(VAR_0);
 FUNC_1(VAR_2, 'IPCA');

 return 0;
}
