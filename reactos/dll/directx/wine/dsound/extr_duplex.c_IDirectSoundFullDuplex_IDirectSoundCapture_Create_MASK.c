
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * capture_device; } ;
struct TYPE_4__ {TYPE_2__* pdsfd; scalar_t__ ref; int * lpVtbl; } ;
typedef int * LPDIRECTSOUNDFULLDUPLEX ;
typedef int * LPDIRECTSOUNDCAPTURE8 ;
typedef int * LPDIRECTSOUNDCAPTURE ;
typedef TYPE_1__ IDirectSoundFullDuplex_IDirectSoundCapture ;
typedef TYPE_2__ IDirectSoundFullDuplexImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int *,int **) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static HRESULT FUNC_5(
    LPDIRECTSOUNDFULLDUPLEX VAR_5,
    LPDIRECTSOUNDCAPTURE8 * VAR_6)
{
    IDirectSoundFullDuplex_IDirectSoundCapture * VAR_7;
    FUNC_3("(%p,%p)\n",VAR_5,VAR_6);

    if (VAR_5 == ((void*)0)) {
        FUNC_0("invalid parameter: pdsfd == NULL\n");
        return VAR_0;
    }

    if (VAR_6 == ((void*)0)) {
        FUNC_0("invalid parameter: ppdsc8 == NULL\n");
        return VAR_0;
    }

    if (((IDirectSoundFullDuplexImpl*)VAR_5)->capture_device == ((void*)0)) {
        FUNC_4("not initialized\n");
        *VAR_6 = ((void*)0);
        return VAR_2;
    }

    VAR_7 = FUNC_2(FUNC_1(),0,sizeof(*VAR_7));
    if (VAR_7 == ((void*)0)) {
        FUNC_4("out of memory\n");
        *VAR_6 = ((void*)0);
        return VAR_1;
    }

    VAR_7->lpVtbl = &VAR_4;
    VAR_7->ref = 0;
    VAR_7->pdsfd = (IDirectSoundFullDuplexImpl *)VAR_5;

    *VAR_6 = (LPDIRECTSOUNDCAPTURE)VAR_7;

    return VAR_3;
}
