
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; int * lpVtbl; } ;
typedef scalar_t__ LPDIRECTSOUNDCAPTURE8 ;
typedef int LPDIRECTSOUND8 ;
typedef int LPCGUID ;
typedef TYPE_1__* LPCDirectSoundCaptureImpl ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;
typedef int CDirectSoundCaptureImpl ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;

HRESULT
FUNC_6(
    LPCGUID VAR_5,
    LPDIRECTSOUNDCAPTURE8 *VAR_6,
    IUnknown *VAR_7)
{
    LPCDirectSoundCaptureImpl VAR_8;
    HRESULT VAR_9;

    if (!VAR_6 || VAR_7 != ((void*)0))
    {

        return VAR_0;
    }


    VAR_8 = FUNC_2(FUNC_1(), VAR_3, sizeof(CDirectSoundCaptureImpl));
    if (!VAR_8)
    {

        return VAR_1;
    }


    VAR_8->ref = 1;
    VAR_8->lpVtbl = &VAR_4;



    VAR_9 = FUNC_3((LPDIRECTSOUNDCAPTURE8)&VAR_8->lpVtbl, VAR_5);


    if (!FUNC_5(VAR_9))
    {

        FUNC_0("Failed to initialize DirectSoundCapture object with %x\n", VAR_9);
        FUNC_4((LPDIRECTSOUND8)&VAR_8->lpVtbl);
        return VAR_9;
    }


    *VAR_6 = (LPDIRECTSOUNDCAPTURE8)&VAR_8->lpVtbl;
    FUNC_0("DirectSoundCapture object %p\n", *VAR_6);
    return VAR_2;
}
