
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_2__ {int SmiCommand; int XPmTimerBlock; int XPm2ControlBlock; int XPm1bControlBlock; int XPm1aControlBlock; } ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int*,int *,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int,int *,int *) ;
 int FUNC_8 (int ,int,int) ;
 int VAR_10 ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    UINT32 VAR_11,
    UINT32 VAR_12)
{
    ACPI_STATUS VAR_13;
    UINT32 VAR_14;
    UINT64 VAR_15;


    FUNC_2 (VAR_10);


    switch (VAR_11)
    {
    case 131:
        VAR_12 &= ~VAR_1;

        VAR_13 = FUNC_7 (VAR_12,
            &VAR_7,
            &VAR_9);
        break;

    case 132:

        VAR_13 = FUNC_7 (VAR_12,
            &VAR_6,
            &VAR_8);
        break;

    case 133:




        VAR_13 = FUNC_5 (&VAR_14,
            &VAR_5.XPm1aControlBlock,
            &VAR_5.XPm1bControlBlock);
        if (FUNC_1 (VAR_13))
        {
            goto Exit;
        }



        FUNC_3 (VAR_12, VAR_0, VAR_14);



        VAR_13 = FUNC_7 (VAR_12,
            &VAR_5.XPm1aControlBlock,
            &VAR_5.XPm1bControlBlock);
        break;

    case 130:




        VAR_13 = FUNC_4 (&VAR_15, &VAR_5.XPm2ControlBlock);
        if (FUNC_1 (VAR_13))
        {
            goto Exit;
        }
        VAR_14 = (UINT32) VAR_15;



        FUNC_3 (VAR_12, VAR_2, VAR_14);

        VAR_13 = FUNC_6 (VAR_12, &VAR_5.XPm2ControlBlock);
        break;

    case 129:

        VAR_13 = FUNC_6 (VAR_12, &VAR_5.XPmTimerBlock);
        break;

    case 128:



        VAR_13 = FUNC_8 (VAR_5.SmiCommand, VAR_12, 8);
        break;

    default:

        FUNC_0 ((VAR_4, "Unknown Register ID: 0x%X",
            VAR_11));
        VAR_13 = VAR_3;
        break;
    }

Exit:
    FUNC_9 (VAR_13);
}
