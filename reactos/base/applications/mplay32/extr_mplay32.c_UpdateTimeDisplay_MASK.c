
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int szTime ;
struct TYPE_2__ {int dwReturn; int dwItem; } ;
typedef int TCHAR ;
typedef TYPE_1__ MCI_STATUS_PARMS ;
typedef int HWND ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int,int *,int,...) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_5 ;

void FUNC_4(HWND VAR_6)
{
    MCI_STATUS_PARMS VAR_7;
    TCHAR VAR_8[VAR_0];
    DWORD VAR_9;

    if (!VAR_5)
    {
        FUNC_0(VAR_6, FUNC_2(""));
        return;
    }

    VAR_7.dwItem = VAR_4;
    VAR_7.dwReturn = 0;
    FUNC_3(VAR_5, VAR_1, VAR_2, (DWORD_PTR)&VAR_7);
    VAR_9 = VAR_7.dwReturn;

    VAR_7.dwItem = VAR_3;
    VAR_7.dwReturn = 0;
    FUNC_3(VAR_5, VAR_1, VAR_2, (DWORD_PTR)&VAR_7);

    switch(VAR_9)
    {
        case 128:
        {
            int VAR_10, VAR_11, VAR_12;

            VAR_10 = (VAR_7.dwReturn / 1000) % 60;
            VAR_11 = ((VAR_7.dwReturn / (1000*60)) % 60);
            VAR_12 = ((VAR_7.dwReturn / (1000*60*60)) % 24);
            FUNC_1(VAR_8, sizeof(VAR_8), FUNC_2("%02lu:%02lu:%02lu"), VAR_12, VAR_11, VAR_10);
            break;
        }


        default:
        {
            FUNC_1(VAR_8, sizeof(VAR_8), FUNC_2("%lu"), VAR_7.dwReturn);
            break;
        }
    }

    FUNC_0(VAR_6, VAR_8);
}
