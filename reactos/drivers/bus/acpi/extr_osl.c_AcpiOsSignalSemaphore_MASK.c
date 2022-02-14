
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {int Lock; int Event; int CurrentUnits; } ;
typedef TYPE_1__* PACPI_SEM ;
typedef int KIRQL ;
typedef int ACPI_STATUS ;
typedef TYPE_1__* ACPI_SEMAPHORE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;

ACPI_STATUS
FUNC_4(
    ACPI_SEMAPHORE VAR_4,
    UINT32 VAR_5)
{
    PACPI_SEM VAR_6 = VAR_4;
    KIRQL VAR_7;

    if (!VAR_4)
    {
        FUNC_0("Bad parameter\n");
        return VAR_0;
    }

    FUNC_1(&VAR_6->Lock, &VAR_7);

    VAR_6->CurrentUnits += VAR_5;
    FUNC_3(&VAR_6->Event, VAR_3, VAR_2);

    FUNC_2(&VAR_6->Lock, VAR_7);

    return VAR_1;
}
