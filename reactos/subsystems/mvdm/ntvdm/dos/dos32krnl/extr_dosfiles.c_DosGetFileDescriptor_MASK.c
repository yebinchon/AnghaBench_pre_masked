
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int FirstSft; } ;
struct TYPE_3__ {size_t NumDescriptors; int Link; int * FileDescriptors; } ;
typedef TYPE_1__* PDOS_SFT ;
typedef int * PDOS_FILE_DESCRIPTOR ;
typedef int DWORD ;
typedef size_t BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;

PDOS_FILE_DESCRIPTOR FUNC_2(BYTE VAR_1)
{
    DWORD VAR_2 = VAR_0->FirstSft;

    while (FUNC_1(VAR_2) != 0xFFFF)
    {
        PDOS_SFT VAR_3 = (PDOS_SFT)FUNC_0(VAR_2);


        if (VAR_1 <= VAR_3->NumDescriptors) return &VAR_3->FileDescriptors[VAR_1];


        VAR_1 -= VAR_3->NumDescriptors;
        VAR_2 = VAR_3->Link;
    }


    return ((void*)0);
}
