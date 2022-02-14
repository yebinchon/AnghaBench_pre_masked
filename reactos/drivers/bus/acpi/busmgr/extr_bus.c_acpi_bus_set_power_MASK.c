
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int bus_id; } ;
struct TYPE_14__ {scalar_t__ power_resources; } ;
struct TYPE_15__ {int state; TYPE_6__ flags; TYPE_5__* states; } ;
struct TYPE_9__ {int force_power_state; int power_manageable; } ;
struct acpi_device {TYPE_8__ pnp; TYPE_7__ power; int handle; TYPE_3__* parent; TYPE_1__ flags; } ;
struct TYPE_12__ {scalar_t__ explicit_set; int valid; } ;
struct TYPE_13__ {TYPE_4__ flags; } ;
struct TYPE_10__ {int state; } ;
struct TYPE_11__ {TYPE_2__ power; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,struct acpi_device**) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (struct acpi_device*,int) ;
 int FUNC_7 (int) ;

int
FUNC_8 (
 ACPI_HANDLE VAR_5,
 int VAR_6)
{
 int VAR_7 = 0;
 ACPI_STATUS VAR_8 = VAR_4;
 struct acpi_device *VAR_9 = ((void*)0);
 char VAR_10[5] = {'_','P','S','0'+VAR_6,'\0'};


 VAR_7 = FUNC_4(VAR_5, &VAR_9);
 if (VAR_7)
  FUNC_7(VAR_7);

 if ((VAR_6 < VAR_0) || (VAR_6 > VAR_1))
  FUNC_7(VAR_2);



 if (!VAR_9->flags.power_manageable) {
  FUNC_3( "Device is not power manageable\n");
  FUNC_7(VAR_3);
 }
  FUNC_5(VAR_9->handle, &VAR_9->power.state);


 if ((VAR_6 == VAR_9->power.state) && !VAR_9->flags.force_power_state) {
  FUNC_3("Device is already at D%d\n", VAR_6);
  return 0;
 }
 if (!VAR_9->power.states[VAR_6].flags.valid) {
  FUNC_3( "Device does not support D%d\n", VAR_6);
  return VAR_3;
 }
 if (VAR_9->parent && (VAR_6 < VAR_9->parent->power.state)) {
  FUNC_3( "Cannot set device to a higher-powered state than parent\n");
  return VAR_3;
 }
 if (VAR_6 < VAR_9->power.state) {
  if (VAR_9->power.flags.power_resources) {
   VAR_7 = FUNC_6(VAR_9, VAR_6);
   if (VAR_7)
    goto end;
  }
  if (VAR_9->power.states[VAR_6].flags.explicit_set) {
   VAR_8 = FUNC_1(VAR_9->handle,
    VAR_10, ((void*)0), ((void*)0));
   if (FUNC_0(VAR_8)) {
    VAR_7 = VAR_3;
    goto end;
   }
  }
 }
 else {
  if (VAR_9->power.states[VAR_6].flags.explicit_set) {
   VAR_8 = FUNC_1(VAR_9->handle,
    VAR_10, ((void*)0), ((void*)0));
   if (FUNC_0(VAR_8)) {
    VAR_7 = VAR_3;
    goto end;
   }
  }
  if (VAR_9->power.flags.power_resources) {
   VAR_7 = FUNC_6(VAR_9, VAR_6);
   if (VAR_7)
    goto end;
  }
 }

end:
 if (VAR_7)
  FUNC_2( "Error transitioning device [%s] to D%d\n",
   VAR_9->pnp.bus_id, VAR_6);
 else
  FUNC_2("Device [%s] transitioned to D%d\n",
   VAR_9->pnp.bus_id, VAR_6);

 return VAR_7;
}
