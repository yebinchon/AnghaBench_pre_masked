
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* iks; } ;
struct TYPE_8__ {int * lpVtbl; TYPE_2__* dsb; scalar_t__ ref; } ;
typedef int LPDIRECTSOUNDBUFFER ;
typedef TYPE_1__ IKsBufferPropertySetImpl ;
typedef TYPE_2__ IDirectSoundBufferImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_2__*,TYPE_1__**) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;

HRESULT FUNC_5(
    IDirectSoundBufferImpl *VAR_4,
    IKsBufferPropertySetImpl **VAR_5)
{
    IKsBufferPropertySetImpl *VAR_6;
    FUNC_3("(%p,%p)\n",VAR_4,VAR_5);
    *VAR_5 = ((void*)0);

    VAR_6 = FUNC_1(FUNC_0(),VAR_1,sizeof(*VAR_6));
    if (VAR_6 == 0) {
        FUNC_4("out of memory\n");
        *VAR_5 = ((void*)0);
        return VAR_0;
    }

    VAR_6->ref = 0;
    VAR_6->dsb = VAR_4;
    VAR_4->iks = VAR_6;
    VAR_6->lpVtbl = &VAR_3;

    FUNC_2((LPDIRECTSOUNDBUFFER)VAR_4);

    *VAR_5 = VAR_6;
    return VAR_2;
}
