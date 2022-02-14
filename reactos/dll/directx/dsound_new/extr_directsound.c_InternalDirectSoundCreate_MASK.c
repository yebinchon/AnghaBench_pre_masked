
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; int * lpVtbl; int bDirectSound8; } ;
typedef scalar_t__ LPDIRECTSOUND8 ;
typedef int LPCGUID ;
typedef TYPE_1__* LPCDirectSoundImpl ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;
typedef int CDirectSoundImpl ;
typedef int BOOL ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;

HRESULT
FUNC_6(
    LPCGUID VAR_5,
    LPDIRECTSOUND8 *VAR_6,
    IUnknown *VAR_7,
    BOOL VAR_8)
{
    LPCDirectSoundImpl VAR_9;
    HRESULT VAR_10;

    if (!VAR_6 || VAR_7 != ((void*)0))
    {

        return VAR_0;
    }


    VAR_9 = FUNC_2(FUNC_1(), VAR_3, sizeof(CDirectSoundImpl));
    if (!VAR_9)
    {

        return VAR_1;
    }


    VAR_9->ref = 1;
    VAR_9->bDirectSound8 = VAR_8;
    VAR_9->lpVtbl = &VAR_4;



    VAR_10 = FUNC_3((LPDIRECTSOUND8)&VAR_9->lpVtbl, VAR_5);


    if (!FUNC_5(VAR_10))
    {

        FUNC_0("Failed to initialize DirectSound object with %x\n", VAR_10);
        FUNC_4((LPDIRECTSOUND8)&VAR_9->lpVtbl);
        return VAR_10;
    }


    *VAR_6 = (LPDIRECTSOUND8)&VAR_9->lpVtbl;
    FUNC_0("DirectSound object %p\n", *VAR_6);
    return VAR_2;
}
