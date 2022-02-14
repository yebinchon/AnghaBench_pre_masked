
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int valid; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;
struct acpi_device {TYPE_2__ wakeup; } ;
typedef int BOOLEAN ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ,struct acpi_device**) ;

BOOLEAN FUNC_1(ACPI_HANDLE VAR_0)
{
 struct acpi_device *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1);
 return VAR_2 ? 0 : VAR_1->wakeup.flags.valid;
}
