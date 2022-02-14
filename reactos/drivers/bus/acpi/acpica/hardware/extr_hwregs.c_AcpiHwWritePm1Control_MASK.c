
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {scalar_t__ Address; } ;
struct TYPE_4__ {TYPE_1__ XPm1bControlBlock; TYPE_1__ XPm1aControlBlock; } ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

ACPI_STATUS
FUNC_4 (
    UINT32 VAR_2,
    UINT32 VAR_3)
{
    ACPI_STATUS VAR_4;


    FUNC_1 (VAR_1);


    VAR_4 = FUNC_2 (VAR_2, &VAR_0.XPm1aControlBlock);
    if (FUNC_0 (VAR_4))
    {
        FUNC_3 (VAR_4);
    }

    if (VAR_0.XPm1bControlBlock.Address)
    {
        VAR_4 = FUNC_2 (VAR_3, &VAR_0.XPm1bControlBlock);
    }
    FUNC_3 (VAR_4);
}
