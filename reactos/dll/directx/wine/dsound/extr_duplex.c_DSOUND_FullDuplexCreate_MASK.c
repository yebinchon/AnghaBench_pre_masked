
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; int * renderer_device; int * capture_device; int * lpVtbl; } ;
typedef int REFIID ;
typedef int * LPDIRECTSOUNDFULLDUPLEX ;
typedef TYPE_1__ IDirectSoundFullDuplexImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int ,int **) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 () ;

HRESULT FUNC_7(
    REFIID VAR_8,
    LPDIRECTSOUNDFULLDUPLEX* VAR_9)
{
    IDirectSoundFullDuplexImpl *VAR_10 = ((void*)0);
    FUNC_3("(%s, %p)\n", FUNC_5(VAR_8), VAR_9);

    if (VAR_9 == ((void*)0)) {
        FUNC_4("invalid parameter: ppDSFD == NULL\n");
        return VAR_0;
    }

    if (!FUNC_2(VAR_8, &VAR_6) &&
        !FUNC_2(VAR_8, &VAR_5)) {
        *VAR_9 = 0;
        return VAR_3;
    }


    FUNC_6();

    VAR_10 = FUNC_1(FUNC_0(),
        VAR_4, sizeof(IDirectSoundFullDuplexImpl));

    if (VAR_10 == ((void*)0)) {
        FUNC_4("out of memory\n");
        *VAR_9 = ((void*)0);
        return VAR_1;
    }

    VAR_10->lpVtbl = &VAR_7;
    VAR_10->ref = 1;
    VAR_10->capture_device = ((void*)0);
    VAR_10->renderer_device = ((void*)0);

    *VAR_9 = (LPDIRECTSOUNDFULLDUPLEX)VAR_10;

    return VAR_2;
}
