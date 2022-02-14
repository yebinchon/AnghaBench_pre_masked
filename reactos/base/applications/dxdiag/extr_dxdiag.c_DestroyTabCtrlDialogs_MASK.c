
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_3__ {int NumDisplayAdapter; int NumSoundAdapter; scalar_t__* hSoundWnd; scalar_t__* hDisplayWnd; scalar_t__* hDialogs; } ;
typedef TYPE_1__* PDXDIAG_CONTEXT ;
typedef int HWND ;


 int FUNC_0 (scalar_t__) ;

VOID
FUNC_1(PDXDIAG_CONTEXT VAR_0)
{
    UINT VAR_1;


    for(VAR_1 = 0; VAR_1 < sizeof(VAR_0->hDialogs) / sizeof(HWND); VAR_1++)
    {
       if (VAR_0->hDialogs[VAR_1])
           FUNC_0(VAR_0->hDialogs[VAR_1]);
    }


    for(VAR_1 = 0; VAR_1 < VAR_0->NumDisplayAdapter; VAR_1++)
    {
       if (VAR_0->hDisplayWnd[VAR_1])
           FUNC_0(VAR_0->hDisplayWnd[VAR_1]);
    }


    for(VAR_1 = 0; VAR_1 < VAR_0->NumSoundAdapter; VAR_1++)
    {
       if (VAR_0->hSoundWnd[VAR_1])
           FUNC_0(VAR_0->hSoundWnd[VAR_1]);
    }

}
