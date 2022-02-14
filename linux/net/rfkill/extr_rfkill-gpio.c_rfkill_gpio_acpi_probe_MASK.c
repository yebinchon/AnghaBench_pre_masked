
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rfkill_gpio_data {unsigned int type; } ;
struct device {TYPE_1__* driver; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct TYPE_2__ {int acpi_match_table; } ;


 int VAR_0 ;
 struct acpi_device_id* FUNC_0 (int ,struct device*) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2,
      struct rfkill_gpio_data *VAR_3)
{
 const struct acpi_device_id *VAR_4;

 VAR_4 = FUNC_0(VAR_2->driver->acpi_match_table, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->type = (unsigned)VAR_4->driver_data;

 return FUNC_1(VAR_2, VAR_1);
}
