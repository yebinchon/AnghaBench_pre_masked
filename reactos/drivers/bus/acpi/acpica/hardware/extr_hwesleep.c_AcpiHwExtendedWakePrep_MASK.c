
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT64 ;
struct TYPE_2__ {int SleepControl; } ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int*,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    UINT8 VAR_9)
{
    ACPI_STATUS VAR_10;
    UINT8 VAR_11;


    FUNC_0 (VAR_8);


    VAR_10 = FUNC_2 (VAR_0,
        &VAR_6, &VAR_7);
    if (FUNC_1 (VAR_10))
    {
        VAR_11 = ((VAR_6 << VAR_3) &
            VAR_2);

        (void) FUNC_3 ((UINT64) (VAR_11 | VAR_1),
            &VAR_5.SleepControl);
    }

    FUNC_4 (VAR_4);
}
