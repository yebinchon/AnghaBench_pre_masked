
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct acpi_device* hardware_id; struct acpi_device* cid_list; } ;
struct acpi_device {TYPE_1__ pnp; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device*,char) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (
 struct acpi_device *VAR_1,
 int VAR_2)
{

 if (!VAR_1)
  FUNC_2(VAR_0);

 FUNC_1(VAR_1);

 if (VAR_1->pnp.cid_list)
  FUNC_0(VAR_1->pnp.cid_list, 'DpcA');

 if (VAR_1->pnp.hardware_id)
  FUNC_0(VAR_1->pnp.hardware_id, 'DpcA');

 if (VAR_1)
  FUNC_0(VAR_1, 'DpcA');

 FUNC_2(0);
}
