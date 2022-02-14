
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int next; } ;
struct TYPE_6__ {int next; } ;
struct TYPE_5__ {scalar_t__ hardware_id; } ;
struct TYPE_8__ {scalar_t__ enabled; scalar_t__ present; } ;
struct acpi_device {TYPE_3__ node; struct acpi_device* parent; TYPE_2__ children; TYPE_1__ flags; TYPE_4__ status; } ;
typedef scalar_t__ ULONG ;
typedef int PFDO_DEVICE_DATA ;
typedef int NTSTATUS ;


 int FUNC_0 (struct acpi_device*,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct acpi_device*) ;
 scalar_t__ FUNC_3 (struct acpi_device*) ;
 struct acpi_device* FUNC_4 (int ) ;
 int VAR_0 ;
 struct acpi_device* VAR_1 ;

NTSTATUS
FUNC_5(PFDO_DEVICE_DATA VAR_2)
{
    ULONG VAR_3 = 0;
    struct acpi_device *VAR_4 = VAR_1;

    while(VAR_4)
    {
        if (VAR_4->status.present && VAR_4->status.enabled &&
            VAR_4->flags.hardware_id)
        {
            FUNC_0(VAR_4, VAR_2);
            VAR_3++;
        }

        if (FUNC_2(VAR_4)) {
            VAR_4 = FUNC_4(VAR_4->children.next);
            continue;
        }
        if (FUNC_3(VAR_4)) {
            VAR_4 = FUNC_4(VAR_4->node.next);
            continue;
        }
        while ((VAR_4 = VAR_4->parent)) {
            if (FUNC_3(VAR_4)) {
                VAR_4 = FUNC_4(VAR_4->node.next);
                break;
            }
        }
    }
    FUNC_1("acpi device count: %d\n", VAR_3);
    return VAR_0;
}
