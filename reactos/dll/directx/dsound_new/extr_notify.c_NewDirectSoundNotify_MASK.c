
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; int * lpVtbl; int BufferSize; int * EventListHead; int hPin; void* bMix; void* bLoop; } ;
typedef scalar_t__ LPDIRECTSOUNDNOTIFY ;
typedef TYPE_1__* LPCDirectSoundNotifyImpl ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int CDirectSoundNotifyImpl ;
typedef void* BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;

HRESULT
FUNC_2(
    LPDIRECTSOUNDNOTIFY * VAR_3,
    BOOL VAR_4,
    BOOL VAR_5,
    HANDLE VAR_6,
    DWORD VAR_7)
{
    LPCDirectSoundNotifyImpl VAR_8 = FUNC_1(FUNC_0(), 0, sizeof(CDirectSoundNotifyImpl));

    if (!VAR_8)
        return VAR_0;

    VAR_8->lpVtbl = &VAR_2;
    VAR_8->bLoop = VAR_4;
    VAR_8->bMix = VAR_5;
    VAR_8->hPin = VAR_6;
    VAR_8->ref = 1;
    VAR_8->EventListHead = ((void*)0);
    VAR_8->BufferSize = VAR_7;

    *VAR_3 = (LPDIRECTSOUNDNOTIFY)&VAR_8->lpVtbl;
    return VAR_1;

}
