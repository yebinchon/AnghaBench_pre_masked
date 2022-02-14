
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_power_resource {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct acpi_device**) ;
 scalar_t__ FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4 (
 ACPI_HANDLE VAR_1,
 struct acpi_power_resource **VAR_2)
{
 int VAR_3 = 0;
 struct acpi_device *VAR_4 = ((void*)0);

 if (!VAR_2)
  FUNC_3(-15);

 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_3) {
  FUNC_0((VAR_0, "Error getting context [%p]\n",
   VAR_1));
  FUNC_3(VAR_3);
 }

 *VAR_2 = (struct acpi_power_resource *) FUNC_2(VAR_4);
 if (!*VAR_2)
  FUNC_3(-15);

 return 0;
}
