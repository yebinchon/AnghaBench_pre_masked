
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int WriteStatus; int ReadWriteMode; int CountRegister; int ReloadValue; int CurrentValue; scalar_t__ Bcd; } ;
typedef int* LPBYTE ;
typedef size_t BYTE ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__,int) ;

__attribute__((used)) static VOID FUNC_2(BYTE VAR_1, BYTE VAR_2)
{
    LPBYTE VAR_3 = ((void*)0);

    if (VAR_0[VAR_1].WriteStatus == 0x00)
    {
        VAR_0[VAR_1].WriteStatus = VAR_0[VAR_1].ReadWriteMode;
    }

    FUNC_0(VAR_0[VAR_1].WriteStatus != 0);

    VAR_3 = &VAR_0[VAR_1].WriteStatus;

    if (*VAR_3 & 1)
    {

        *VAR_3 &= ~1;
        VAR_0[VAR_1].CountRegister &= 0xFF00;
        VAR_0[VAR_1].CountRegister |= VAR_2;
    }
    else if (*VAR_3 & 2)
    {

        *VAR_3 &= ~2;
        VAR_0[VAR_1].CountRegister &= 0x00FF;
        VAR_0[VAR_1].CountRegister |= VAR_2 << 8;
    }


    if (*VAR_3 == 0x00)
    {
        if (VAR_0[VAR_1].CountRegister == 0x0000)
        {

            if (VAR_0[VAR_1].Bcd)
                VAR_0[VAR_1].CountRegister = 9999;
            else
                VAR_0[VAR_1].CountRegister = 0xFFFF;
        }


        VAR_0[VAR_1].CountRegister =
            FUNC_1(VAR_0[VAR_1], VAR_0[VAR_1].CountRegister);
        VAR_0[VAR_1].ReloadValue = VAR_0[VAR_1].CountRegister;


        VAR_0[VAR_1].CurrentValue = VAR_0[VAR_1].ReloadValue;
    }
}
