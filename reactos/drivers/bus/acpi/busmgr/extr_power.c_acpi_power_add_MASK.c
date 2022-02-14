
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ResourceOrder; int SystemLevel; } ;
union acpi_object {TYPE_2__ PowerResource; } ;
struct acpi_power_resource {int order; int system_level; int name; int reference; struct acpi_device* device; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_6__ {int bus_id; } ;
struct acpi_device {TYPE_3__ power; int handle; struct acpi_power_resource* driver_data; TYPE_1__ pnp; } ;
struct TYPE_9__ {int member_0; union acpi_object* member_1; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_OBJECT ;
typedef TYPE_4__ ACPI_BUFFER ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int *,TYPE_4__*) ;
 int FUNC_2 (char*,int ,int ,char*) ;
 struct acpi_power_resource* FUNC_3 (int ,int,char) ;
 int FUNC_4 (struct acpi_power_resource*) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (struct acpi_device*) ;
 int FUNC_7 (struct acpi_device*) ;
 int FUNC_8 (struct acpi_device*) ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;

int
FUNC_12 (
 struct acpi_device *VAR_7)
{
 int VAR_8 = 0, VAR_9;
 ACPI_STATUS VAR_10 = VAR_5;
 struct acpi_power_resource *VAR_11 = ((void*)0);
 union acpi_object VAR_12;
 ACPI_BUFFER VAR_13 = {sizeof(ACPI_OBJECT), &VAR_12};


 if (!VAR_7)
  FUNC_10(-1);

 VAR_11 = FUNC_3(VAR_6,sizeof(struct acpi_power_resource),'IPCA');
 if (!VAR_11)
  FUNC_10(-4);

 VAR_11->device = VAR_7;

 FUNC_5(&VAR_11->reference);

 FUNC_11(VAR_11->name, VAR_7->pnp.bus_id);
 FUNC_11(FUNC_8(VAR_7), VAR_1);
 FUNC_11(FUNC_7(VAR_7), VAR_0);
 VAR_7->driver_data = VAR_11;


 VAR_10 = FUNC_1(VAR_7->handle, ((void*)0), ((void*)0), &VAR_13);
 if (FUNC_0(VAR_10)) {
  VAR_8 = -15;
  goto end;
 }
 VAR_11->system_level = VAR_12.PowerResource.SystemLevel;
 VAR_11->order = VAR_12.PowerResource.ResourceOrder;

 VAR_8 = FUNC_9(VAR_7->handle, &VAR_9);
 if (VAR_8)
  goto end;

 switch (VAR_9) {
 case 128:
  VAR_7->power.state = VAR_2;
  break;
 case 129:
  VAR_7->power.state = VAR_3;
  break;
 default:
  VAR_7->power.state = VAR_4;
  break;
 }


 FUNC_2("%s [%s] (%s)\n", FUNC_8(VAR_7),
  FUNC_6(VAR_7), VAR_9?"on":"off");

end:
 if (VAR_8)
  FUNC_4(VAR_11);

 return VAR_8;
}
