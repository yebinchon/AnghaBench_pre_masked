
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {scalar_t__ CurrentUnits; int Lock; int Event; } ;
typedef TYPE_1__* PACPI_SEM ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SEMAPHORE ;
typedef int ACPI_SEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ,int,char) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

ACPI_STATUS
FUNC_4(
    UINT32 VAR_5,
    UINT32 VAR_6,
    ACPI_SEMAPHORE *VAR_7)
{
    PACPI_SEM VAR_8;

    if (!VAR_7)
    {
        FUNC_0("Bad parameter\n");
        return VAR_0;
    }

    VAR_8 = FUNC_1(VAR_3, sizeof(ACPI_SEM), 'LpcA');
    if (!VAR_8) return VAR_1;

    VAR_8->CurrentUnits = VAR_6;
    FUNC_2(&VAR_8->Event, VAR_4, VAR_8->CurrentUnits != 0);
    FUNC_3(&VAR_8->Lock);

    *VAR_7 = (ACPI_SEMAPHORE)VAR_8;

    return VAR_2;
}
