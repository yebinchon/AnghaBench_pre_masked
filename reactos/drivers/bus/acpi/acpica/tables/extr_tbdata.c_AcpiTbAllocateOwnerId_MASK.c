
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_4__ {size_t CurrentTableCount; TYPE_1__* Tables; } ;
struct TYPE_3__ {int OwnerId; } ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    UINT32 VAR_4)
{
    ACPI_STATUS VAR_5 = VAR_1;


    FUNC_0 (VAR_3);


    (void) FUNC_1 (VAR_0);
    if (VAR_4 < VAR_2.CurrentTableCount)
    {
        VAR_5 = FUNC_2 (
            &(VAR_2.Tables[VAR_4].OwnerId));
    }

    (void) FUNC_3 (VAR_0);
    FUNC_4 (VAR_5);
}
