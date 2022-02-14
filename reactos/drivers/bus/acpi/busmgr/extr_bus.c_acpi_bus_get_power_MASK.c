
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ power_resources; scalar_t__ explicit_get; } ;
struct TYPE_12__ {int state; TYPE_4__ flags; } ;
struct TYPE_11__ {int bus_id; } ;
struct TYPE_7__ {int power_manageable; } ;
struct acpi_device {TYPE_6__ power; TYPE_5__ pnp; int handle; TYPE_3__* parent; TYPE_1__ flags; } ;
struct TYPE_8__ {int state; } ;
struct TYPE_9__ {TYPE_2__ power; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,struct acpi_device**) ;
 int FUNC_3 (int ,char*,int *,unsigned long long*) ;
 int FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (int) ;

int
FUNC_6 (
 ACPI_HANDLE VAR_3,
 int *VAR_4)
{
 int VAR_5 = 0;
 ACPI_STATUS VAR_6 = 0;
 struct acpi_device *VAR_7 = ((void*)0);
 unsigned long long VAR_8 = 0;

 VAR_5 = FUNC_2(VAR_3, &VAR_7);
 if (VAR_5)
  FUNC_5(VAR_5);

 *VAR_4 = VAR_1;

 if (!VAR_7->flags.power_manageable) {

  if (VAR_7->parent)
   *VAR_4 = VAR_7->parent->power.state;
  else
   *VAR_4 = VAR_0;
 }
 else {




  if (VAR_7->power.flags.explicit_get) {
   VAR_6 = FUNC_3(VAR_7->handle, "_PSC",
    ((void*)0), &VAR_8);
   if (FUNC_0(VAR_6))
    FUNC_5(VAR_2);
   VAR_7->power.state = (int) VAR_8;
  }
  else if (VAR_7->power.flags.power_resources) {
   VAR_5 = FUNC_4(VAR_7);
   if (VAR_5)
    FUNC_5(VAR_5);
  }

  *VAR_4 = VAR_7->power.state;
 }

 FUNC_1("Device [%s] power state is D%d\n",
  VAR_7->pnp.bus_id, VAR_7->power.state);

 FUNC_5(0);
}
