
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_7__ {int DisableForDispatch; scalar_t__ RuntimeCount; TYPE_1__* RegisterInfo; } ;
struct TYPE_6__ {int MaskForRun; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GPE_REGISTER_INFO ;
typedef TYPE_2__ ACPI_GPE_EVENT_INFO ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;

ACPI_STATUS
FUNC_6 (
    ACPI_GPE_EVENT_INFO *VAR_6,
    BOOLEAN VAR_7)
{
    ACPI_GPE_REGISTER_INFO *VAR_8;
    UINT32 VAR_9;


    FUNC_1 (VAR_5);


    VAR_8 = VAR_6->RegisterInfo;
    if (!VAR_8)
    {
        FUNC_5 (VAR_3);
    }

    VAR_9 = FUNC_3 (VAR_6);



    if (VAR_7)
    {
        if (VAR_9 & VAR_8->MaskForRun)
        {
            FUNC_5 (VAR_2);
        }

        (void) FUNC_4 (VAR_6, VAR_0);
        FUNC_2 (VAR_8->MaskForRun, (UINT8) VAR_9);
    }
    else
    {
        if (!(VAR_9 & VAR_8->MaskForRun))
        {
            FUNC_5 (VAR_2);
        }

        FUNC_0 (VAR_8->MaskForRun, (UINT8) VAR_9);
        if (VAR_6->RuntimeCount &&
            !VAR_6->DisableForDispatch)
        {
            (void) FUNC_4 (VAR_6, VAR_1);
        }
    }

    FUNC_5 (VAR_4);
}
