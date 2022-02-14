
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* add ) (struct acpi_device*) ;int (* start ) (struct acpi_device*) ;int (* scan ) (struct acpi_device*) ;int (* remove ) (struct acpi_device*,int ) ;} ;
struct acpi_driver {TYPE_1__ ops; } ;
struct acpi_device {struct acpi_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*,int ) ;
 int FUNC_5 (struct acpi_device*) ;

__attribute__((used)) static int
FUNC_6 (
 struct acpi_device *VAR_2,
 struct acpi_driver *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_2 || !VAR_3)
  FUNC_1(VAR_1);

 if (!VAR_3->ops.add)
  FUNC_1(-38);

 VAR_4 = VAR_3->ops.add(VAR_2);
 if (VAR_4) {
  VAR_2->driver = ((void*)0);

  FUNC_1(VAR_4);
 }

 VAR_2->driver = VAR_3;






 if (VAR_3->ops.start) {
  VAR_4 = VAR_3->ops.start(VAR_2);
  if (VAR_4 && VAR_3->ops.remove)
   VAR_3->ops.remove(VAR_2, VAR_0);
  FUNC_1(VAR_4);
 }

 FUNC_0("Driver successfully bound to device\n");

 if (VAR_3->ops.scan) {
  VAR_3->ops.scan(VAR_2);
 }

 FUNC_1(0);
}
