
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pdsfd; scalar_t__ ref; int * lpVtbl; } ;
typedef int * LPUNKNOWN ;
typedef int * LPDIRECTSOUNDFULLDUPLEX ;
typedef TYPE_1__ IDirectSoundFullDuplex_IUnknown ;
typedef int IDirectSoundFullDuplexImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int *,int **) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static HRESULT FUNC_5(
    LPDIRECTSOUNDFULLDUPLEX VAR_4,
    LPUNKNOWN * VAR_5)
{
    IDirectSoundFullDuplex_IUnknown * VAR_6;
    FUNC_3("(%p,%p)\n",VAR_4,VAR_5);

    if (VAR_4 == ((void*)0)) {
        FUNC_0("invalid parameter: pdsfd == NULL\n");
        return VAR_0;
    }

    if (VAR_5 == ((void*)0)) {
        FUNC_0("invalid parameter: ppunk == NULL\n");
        return VAR_0;
    }

    VAR_6 = FUNC_2(FUNC_1(),0,sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
        FUNC_4("out of memory\n");
        *VAR_5 = ((void*)0);
        return VAR_1;
    }

    VAR_6->lpVtbl = &VAR_3;
    VAR_6->ref = 0;
    VAR_6->pdsfd = (IDirectSoundFullDuplexImpl *)VAR_4;

    *VAR_5 = (LPUNKNOWN)VAR_6;

    return VAR_2;
}
