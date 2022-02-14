
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
typedef int ACPI_OWNER_ID ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

ACPI_STATUS
FUNC_8 (
    UINT32 VAR_5)
{
    ACPI_OWNER_ID VAR_6;
    ACPI_STATUS VAR_7;


    FUNC_1 (VAR_4);


    VAR_7 = FUNC_3 (VAR_0);
    if (FUNC_0 (VAR_7))
    {
        FUNC_7 (VAR_7);
    }

    if (VAR_5 >= VAR_3.CurrentTableCount)
    {


        (void) FUNC_5 (VAR_0);
        FUNC_7 (VAR_1);
    }



    VAR_6 = VAR_3.Tables[VAR_5].OwnerId;
    (void) FUNC_5 (VAR_0);
    VAR_7 = FUNC_4 (&VAR_2);
    if (FUNC_0 (VAR_7))
    {
        FUNC_7 (VAR_7);
    }

    FUNC_2 (VAR_6);
    FUNC_6 (&VAR_2);
    FUNC_7 (VAR_7);
}
