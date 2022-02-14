
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_handle_list {unsigned int count; int * handles; } ;
struct TYPE_4__ {int state; TYPE_1__* states; } ;
struct acpi_device {TYPE_2__ power; } ;
struct TYPE_3__ {struct acpi_handle_list resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct acpi_device*) ;
 int FUNC_1 (int ,struct acpi_device*) ;
 int FUNC_2 (int) ;

int
FUNC_3 (
 struct acpi_device *VAR_3,
 int VAR_4)
{
 int VAR_5 = 0;
 struct acpi_handle_list *VAR_6 = ((void*)0);
 struct acpi_handle_list *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0;

 if (!VAR_3 || (VAR_4 < VAR_0) || (VAR_4 > VAR_1))
  FUNC_2(-1);

 if ((VAR_3->power.state < VAR_0) || (VAR_3->power.state > VAR_1))
  FUNC_2(-15);

 VAR_6 = &VAR_3->power.states[VAR_3->power.state].resources;
 VAR_7 = &VAR_3->power.states[VAR_4].resources;







 for (VAR_8 = 0; VAR_8 < VAR_7->count; VAR_8++) {
  VAR_5 = FUNC_1(VAR_7->handles[VAR_8], VAR_3);
  if (VAR_5)
   goto end;
 }

 if (VAR_3->power.state == VAR_4) {
  goto end;
 }




 for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
  VAR_5 = FUNC_0(VAR_6->handles[VAR_8], VAR_3);
  if (VAR_5)
   goto end;
 }

     end:
 if (VAR_5)
  VAR_3->power.state = VAR_2;
 else {

  VAR_3->power.state = VAR_4;
 }

 return VAR_5;
}
