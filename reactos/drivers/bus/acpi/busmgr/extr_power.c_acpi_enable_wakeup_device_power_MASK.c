
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ valid; } ;
struct TYPE_4__ {unsigned int count; int * handles; } ;
struct TYPE_6__ {scalar_t__ prepare_count; TYPE_2__ flags; TYPE_1__ resources; } ;
struct acpi_device {TYPE_3__ wakeup; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct acpi_device*,int,int,int) ;
 int FUNC_2 (int ,struct acpi_device*) ;

int FUNC_3(struct acpi_device *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 int VAR_3 = 0;

 if (!VAR_0 || !VAR_0->wakeup.flags.valid)
  return -1;



 if (VAR_0->wakeup.prepare_count++)
  goto out;


 for (VAR_2 = 0; VAR_2 < VAR_0->wakeup.resources.count; VAR_2++) {
  int VAR_4 = FUNC_2(VAR_0->wakeup.resources.handles[VAR_2], VAR_0);
  if (VAR_4) {
   FUNC_0( "Transition power state\n");
   VAR_0->wakeup.flags.valid = 0;
   VAR_3 = -1;
   goto err_out;
  }
 }





 VAR_3 = FUNC_1(VAR_0, 1, VAR_1, 3);

 err_out:
 if (VAR_3)
  VAR_0->wakeup.prepare_count = 0;

 out:

 return VAR_3;
}
