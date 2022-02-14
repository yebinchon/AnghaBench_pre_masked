
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct acpi_device {TYPE_1__ performance; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0 (
 struct acpi_device *VAR_2)
{
 if (!VAR_2)
  return VAR_1;

 VAR_2->performance.state = VAR_0;

 return 0;
}
