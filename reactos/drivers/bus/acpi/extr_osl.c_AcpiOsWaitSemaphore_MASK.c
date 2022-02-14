
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {scalar_t__ CurrentUnits; int Lock; int Event; } ;
typedef TYPE_1__* PACPI_SEM ;
typedef int KIRQL ;
typedef int ACPI_STATUS ;
typedef TYPE_1__* ACPI_SEMAPHORE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int *) ;
 int VAR_7 ;

ACPI_STATUS
FUNC_5(
    ACPI_SEMAPHORE VAR_8,
    UINT32 VAR_9,
    UINT16 VAR_10)
{
    PACPI_SEM VAR_11 = VAR_8;
    KIRQL VAR_12;

    if (!VAR_8)
    {
        FUNC_0("Bad parameter\n");
        return VAR_1;
    }

    FUNC_1(&VAR_11->Lock, &VAR_12);


    if ((VAR_10 == VAR_0) && (VAR_11->CurrentUnits < VAR_9))
    {

        FUNC_2(&VAR_11->Lock, VAR_12);
        return VAR_3;
    }


    while (VAR_11->CurrentUnits < VAR_9)
    {
        FUNC_2(&VAR_11->Lock, VAR_12);
        FUNC_4(&VAR_11->Event,
                              VAR_4,
                              VAR_7,
                              VAR_5,
                              ((void*)0));
        FUNC_1(&VAR_11->Lock, &VAR_12);
    }

    VAR_11->CurrentUnits -= VAR_9;

    if (VAR_11->CurrentUnits != 0) FUNC_3(&VAR_11->Event, VAR_6, VAR_5);

    FUNC_2(&VAR_11->Lock, VAR_12);

    return VAR_2;
}
