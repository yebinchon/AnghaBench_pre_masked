
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pds; scalar_t__ ref; int * lpVtbl; } ;
typedef int * LPUNKNOWN ;
typedef int * LPDIRECTSOUND8 ;
typedef TYPE_1__ IDirectSound_IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int *,int **) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static HRESULT FUNC_6(
    LPDIRECTSOUND8 VAR_4,
    LPUNKNOWN * VAR_5)
{
    IDirectSound_IUnknown * VAR_6;
    FUNC_4("(%p,%p)\n",VAR_4,VAR_5);

    if (VAR_5 == ((void*)0)) {
        FUNC_0("invalid parameter: ppunk == NULL\n");
        return VAR_0;
    }

    if (VAR_4 == ((void*)0)) {
        FUNC_0("invalid parameter: pds == NULL\n");
        *VAR_5 = ((void*)0);
        return VAR_0;
    }

    VAR_6 = FUNC_2(FUNC_1(),0,sizeof(*VAR_6));
    if (VAR_6 == ((void*)0)) {
        FUNC_5("out of memory\n");
        *VAR_5 = ((void*)0);
        return VAR_1;
    }

    VAR_6->lpVtbl = &VAR_3;
    VAR_6->ref = 0;
    VAR_6->pds = VAR_4;

    FUNC_3(VAR_4);
    *VAR_5 = (LPUNKNOWN)VAR_6;

    return VAR_2;
}
