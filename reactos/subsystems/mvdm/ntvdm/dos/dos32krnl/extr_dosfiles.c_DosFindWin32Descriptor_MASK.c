
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {int FirstSft; } ;
struct TYPE_5__ {size_t NumDescriptors; int Link; TYPE_1__* FileDescriptors; } ;
struct TYPE_4__ {scalar_t__ RefCount; int DeviceInfo; scalar_t__ Win32Handle; } ;
typedef TYPE_2__* PDOS_SFT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_1 ;

BYTE FUNC_2(HANDLE VAR_2)
{
    UINT VAR_3;
    BYTE VAR_4 = 0;
    DWORD VAR_5 = VAR_1->FirstSft;

    while (FUNC_1(VAR_5) != 0xFFFF)
    {
        PDOS_SFT VAR_6 = (PDOS_SFT)FUNC_0(VAR_5);

        for (VAR_3 = 0; VAR_3 < VAR_6->NumDescriptors; VAR_3++)
        {
            if ((VAR_6->FileDescriptors[VAR_3].RefCount > 0)
                && !(VAR_6->FileDescriptors[VAR_3].DeviceInfo & VAR_0)
                && (VAR_6->FileDescriptors[VAR_3].Win32Handle == VAR_2))
            {
                return VAR_4;
            }

            VAR_4++;
        }


        VAR_5 = VAR_6->Link;
    }


    return 0xFF;
}
