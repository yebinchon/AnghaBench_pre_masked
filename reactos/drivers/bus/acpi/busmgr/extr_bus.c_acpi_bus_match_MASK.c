
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_driver {int ids; } ;
struct TYPE_6__ {TYPE_4__* cid_list; int hardware_id; } ;
struct TYPE_7__ {scalar_t__ compatible_ids; scalar_t__ hardware_id; } ;
struct acpi_device {TYPE_2__ pnp; TYPE_3__ flags; } ;
struct TYPE_8__ {int Count; TYPE_1__* Ids; } ;
struct TYPE_5__ {int String; } ;
typedef TYPE_4__ ACPI_PNP_DEVICE_ID_LIST ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (
 struct acpi_device *VAR_0,
 struct acpi_driver *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->flags.hardware_id)
  if (FUNC_0(VAR_1->ids, VAR_0->pnp.hardware_id))
   goto Done;

 if (VAR_0->flags.compatible_ids) {
  ACPI_PNP_DEVICE_ID_LIST *VAR_3 = VAR_0->pnp.cid_list;
  int VAR_4;


  for (VAR_4 = 0; VAR_4 < VAR_3->Count; VAR_4++)
  {
   if (FUNC_0(VAR_1->ids, VAR_3->Ids[VAR_4].String))
    goto Done;
  }
 }
 VAR_2 = -2;

 Done:

 return VAR_2;
}
