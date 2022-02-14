
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_handle_list {int count; } ;
struct TYPE_4__ {int state; TYPE_1__* states; } ;
struct acpi_device {TYPE_2__ power; } ;
struct TYPE_3__ {struct acpi_handle_list resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acpi_handle_list*,int*) ;
 int FUNC_1 (int) ;

int
FUNC_2 (
 struct acpi_device *VAR_4)
{
 int VAR_5 = 0;
 struct acpi_handle_list *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8 = 0;


 if (!VAR_4)
  FUNC_1(-1);

 VAR_4->power.state = VAR_3;





 for (VAR_8=VAR_1; VAR_8<VAR_2; VAR_8++) {
  VAR_6 = &VAR_4->power.states[VAR_8].resources;
  if (VAR_6->count < 1)
   continue;

  VAR_5 = FUNC_0(VAR_6, &VAR_7);
  if (VAR_5)
   FUNC_1(VAR_5);

  if (VAR_7 == VAR_0) {
   VAR_4->power.state = VAR_8;
   FUNC_1(0);
  }
 }

 VAR_4->power.state = VAR_2;

 FUNC_1(0);
}
