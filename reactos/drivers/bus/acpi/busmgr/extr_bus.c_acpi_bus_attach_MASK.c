
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_driver {int references; int name; } ;
struct TYPE_4__ {int bus_id; } ;
struct TYPE_3__ {int present; } ;
struct acpi_device {TYPE_2__ pnp; TYPE_1__ status; scalar_t__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct acpi_device*,struct acpi_driver*) ;
 int VAR_2 ;
 int FUNC_2 (struct acpi_device*,struct acpi_driver*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6 (
 struct acpi_device *VAR_3,
 int VAR_4,
 void *VAR_5)
{
 int VAR_6 = 0;
 struct acpi_driver *VAR_7 = ((void*)0);

 if (!VAR_3 || !VAR_5)
  FUNC_4(VAR_0);

 VAR_7 = (struct acpi_driver *) VAR_5;

 if (VAR_3->driver)
  FUNC_4(-9);

 if (!VAR_3->status.present)
  FUNC_4(VAR_1);

 VAR_6 = FUNC_2(VAR_3, VAR_7);
 if (VAR_6)
  FUNC_4(VAR_6);

 FUNC_0("Found driver [%s] for device [%s]\n",
  VAR_7->name, VAR_3->pnp.bus_id);

 VAR_6 = FUNC_1(VAR_3, VAR_7);
 if (VAR_6)
  FUNC_4(VAR_6);

 FUNC_3(&VAR_2);
 ++VAR_7->references;
 FUNC_5(&VAR_2);

 FUNC_4(0);
}
