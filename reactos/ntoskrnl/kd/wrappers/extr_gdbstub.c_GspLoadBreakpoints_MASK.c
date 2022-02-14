
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int Type; scalar_t__ Length; int Address; } ;
struct TYPE_5__ {int Dr7; } ;
typedef TYPE_1__* PKTRAP_FRAME ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;



 unsigned int VAR_17 ;
 TYPE_4__* VAR_18 ;
 int FUNC_2 (TYPE_1__*,unsigned int,int ,scalar_t__,int ) ;
 int FUNC_3 (unsigned int) ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void
FUNC_4(PKTRAP_FRAME VAR_23)
{
    unsigned VAR_24;
    ULONG VAR_25;

    FUNC_1("GspLoadBreakpoints\n");
    FUNC_1("DR7 on entry: 0x%08x\n", VAR_23->Dr7);


    VAR_23->Dr7 &= ~(VAR_4 | VAR_5 | VAR_6 | VAR_7 |
                        VAR_0 | VAR_1 | VAR_2 | VAR_3 |
                        VAR_12 | VAR_8 |
                        VAR_13 | VAR_9 |
                        VAR_14 | VAR_10 |
                        VAR_15 | VAR_11);

    for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++)
    {
        switch (VAR_18[VAR_24].Type)
        {
            case 129:
                VAR_25 = VAR_22;
                break;
            case 128:
                VAR_25 = VAR_21;
                break;
            case 130:
                VAR_25 = VAR_20;
                break;
            default:
                FUNC_0(VAR_16);
                VAR_25 = VAR_22;
                break;
        }

        FUNC_2(VAR_23, VAR_24, VAR_18[VAR_24].Address,
                            VAR_18[VAR_24].Length - 1, VAR_25);
    }

    for (VAR_24 = 0; VAR_24 < VAR_19; VAR_24++)
    {
        FUNC_1("Using real software breakpoint\n");
        FUNC_3(VAR_24);
    }

    FUNC_1("Final DR7 value 0x%08x\n", VAR_23->Dr7);
}
