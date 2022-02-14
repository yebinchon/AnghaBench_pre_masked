
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int* FileName; } ;
typedef TYPE_1__* PDIRENTRY ;
typedef char* PCHAR ;


 int FUNC_0 (char*,int) ;

void FUNC_1(PCHAR VAR_0, PDIRENTRY VAR_1)
{
    ULONG VAR_2;

    VAR_2 = 0;
    FUNC_0(VAR_0, 13);




    if (VAR_1->FileName[0] == 0x05)
    {
        VAR_1->FileName[0] = 0xE5;
    }




    while (VAR_2 < 8)
    {
        if (VAR_1->FileName[VAR_2] == ' ')
        {
            break;
        }

        VAR_0[VAR_2] = VAR_1->FileName[VAR_2];
        VAR_2++;
    }




    if ((VAR_1->FileName[8] != ' '))
    {
        VAR_0[VAR_2++] = '.';
        VAR_0[VAR_2++] = (VAR_1->FileName[8] == ' ') ? '\0' : VAR_1->FileName[8];
        VAR_0[VAR_2++] = (VAR_1->FileName[9] == ' ') ? '\0' : VAR_1->FileName[9];
        VAR_0[VAR_2++] = (VAR_1->FileName[10] == ' ') ? '\0' : VAR_1->FileName[10];
    }


}
