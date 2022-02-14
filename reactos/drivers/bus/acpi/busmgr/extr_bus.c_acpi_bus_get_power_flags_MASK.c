
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int valid; int explicit_set; } ;
struct TYPE_10__ {scalar_t__ count; } ;
struct acpi_device_power_state {int power; int latency; TYPE_3__ flags; TYPE_5__ resources; } ;
struct TYPE_7__ {int explicit_get; int inrush_current; int power_resources; } ;
struct TYPE_9__ {int state; struct acpi_device_power_state* states; TYPE_2__ flags; } ;
struct TYPE_6__ {int wake_capable; } ;
struct acpi_device {TYPE_4__ power; int handle; TYPE_1__ flags; } ;
typedef size_t UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,char*,int *,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_3 (
 struct acpi_device *VAR_4)
{
 ACPI_STATUS VAR_5 = 0;
 ACPI_HANDLE VAR_6 = 0;
 UINT32 VAR_7 = 0;

 if (!VAR_4)
  return VAR_3;




 VAR_5 = FUNC_1(VAR_4->handle, "_PSC", &VAR_6);
 if (FUNC_0(VAR_5))
  VAR_4->power.flags.explicit_get = 1;
 VAR_5 = FUNC_1(VAR_4->handle, "_IRC", &VAR_6);
 if (FUNC_0(VAR_5))
  VAR_4->power.flags.inrush_current = 1;
 VAR_5 = FUNC_1(VAR_4->handle, "_PRW", &VAR_6);
 if (FUNC_0(VAR_5))
  VAR_4->flags.wake_capable = 1;




 for (VAR_7 = VAR_0; VAR_7 <= VAR_1; VAR_7++) {
  struct acpi_device_power_state *VAR_8 = &VAR_4->power.states[VAR_7];
  char VAR_9[5] = {'_','P','R','0'+VAR_7,'\0'};


  VAR_5 = FUNC_2(VAR_4->handle, VAR_9, ((void*)0),
   &VAR_8->resources);
  if (FUNC_0(VAR_5) && VAR_8->resources.count) {
   VAR_4->power.flags.power_resources = 1;
   VAR_8->flags.valid = 1;
  }


  VAR_9[2] = 'S';
  VAR_5 = FUNC_1(VAR_4->handle, VAR_9, &VAR_6);
  if (FUNC_0(VAR_5)) {
   VAR_8->flags.explicit_set = 1;
   VAR_8->flags.valid = 1;
  }


  if (VAR_8->resources.count || VAR_8->flags.explicit_set)
   VAR_8->flags.valid = 1;

  VAR_8->power = -1;
  VAR_8->latency = -1;
 }


 VAR_4->power.states[VAR_0].flags.valid = 1;
 VAR_4->power.states[VAR_0].power = 100;
 VAR_4->power.states[VAR_1].flags.valid = 1;
 VAR_4->power.states[VAR_1].power = 0;

 VAR_4->power.state = VAR_2;

 return 0;
}
