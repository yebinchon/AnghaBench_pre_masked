
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Value; } ;
union acpi_object {TYPE_1__ Integer; void* Type; } ;
struct acpi_object_list {int member_0; int Count; union acpi_object* member_1; } ;
struct TYPE_5__ {scalar_t__ valid; } ;
struct TYPE_6__ {TYPE_2__ flags; } ;
struct acpi_device {TYPE_3__ wakeup; int handle; } ;
typedef scalar_t__ ACPI_STATUS ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ,char*,struct acpi_object_list*,int *) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct acpi_device *VAR_3,
                           int VAR_4, int VAR_5, int VAR_6)
{
 union acpi_object VAR_7[3];
 struct acpi_object_list VAR_8 = { 3, VAR_7 };
 ACPI_STATUS VAR_9 = VAR_2;
 VAR_7[0].Type = VAR_0;
 VAR_7[0].Integer.Value = VAR_4;
 VAR_7[1].Type = VAR_0;
 VAR_7[1].Integer.Value = VAR_5;
 VAR_7[2].Type = VAR_0;
 VAR_7[2].Integer.Value = VAR_6;
 VAR_9 = FUNC_2(VAR_3->handle, "_DSW", &VAR_8, ((void*)0));
 if (FUNC_1(VAR_9)) {
  return 0;
 } else if (VAR_9 != VAR_1) {
  FUNC_3("_DSW execution failed\n");
  VAR_3->wakeup.flags.valid = 0;
  return -1;
 }


 VAR_8.Count = 1;
 VAR_7[0].Integer.Value = VAR_4;
 VAR_9 = FUNC_2(VAR_3->handle, "_PSW", &VAR_8, ((void*)0));
 if (FUNC_0(VAR_9) && (VAR_9 != VAR_1)) {
  FUNC_3("_PSW execution failed\n");
  VAR_3->wakeup.flags.valid = 0;
  return -1;
 }

 return 0;
}
