
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_6__ {TYPE_1__* RegisterInfo; int Flags; } ;
struct TYPE_5__ {int EnableForRun; int MaskForRun; int EnableForWake; int StatusAddress; int EnableAddress; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GPE_REGISTER_INFO ;
typedef TYPE_2__ ACPI_GPE_EVENT_INFO ;
typedef int ACPI_EVENT_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int*,int *) ;

ACPI_STATUS
FUNC_5 (
    ACPI_GPE_EVENT_INFO *VAR_9,
    ACPI_EVENT_STATUS *VAR_10)
{
    UINT64 VAR_11;
    UINT32 VAR_12;
    ACPI_GPE_REGISTER_INFO *VAR_13;
    ACPI_EVENT_STATUS VAR_14 = 0;
    ACPI_STATUS VAR_15;


    FUNC_1 ();


    if (!VAR_10)
    {
        return (VAR_7);
    }



    if (FUNC_2 (VAR_9->Flags) !=
        VAR_6)
    {
        VAR_14 |= VAR_2;
    }



    VAR_13 = VAR_9->RegisterInfo;



    VAR_12 = FUNC_3 (VAR_9);



    if (VAR_12 & VAR_13->EnableForRun)
    {
        VAR_14 |= VAR_0;
    }



    if (VAR_12 & VAR_13->MaskForRun)
    {
        VAR_14 |= VAR_3;
    }



    if (VAR_12 & VAR_13->EnableForWake)
    {
        VAR_14 |= VAR_5;
    }



    VAR_15 = FUNC_4 (&VAR_11, &VAR_13->EnableAddress);
    if (FUNC_0 (VAR_15))
    {
        return (VAR_15);
    }

    if (VAR_12 & VAR_11)
    {
        VAR_14 |= VAR_1;
    }



    VAR_15 = FUNC_4 (&VAR_11, &VAR_13->StatusAddress);
    if (FUNC_0 (VAR_15))
    {
        return (VAR_15);
    }

    if (VAR_12 & VAR_11)
    {
        VAR_14 |= VAR_4;
    }



    (*VAR_10) = VAR_14;
    return (VAR_8);
}
