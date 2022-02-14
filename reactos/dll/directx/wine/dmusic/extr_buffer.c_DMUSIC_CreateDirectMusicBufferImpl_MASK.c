
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; int size; TYPE_1__ IDirectMusicBuffer_iface; void* data; int format; } ;
struct TYPE_10__ {int cbBuffer; int guidBufferFormat; } ;
typedef TYPE_1__* LPVOID ;
typedef TYPE_2__* LPDMUS_BUFFERDESC ;
typedef TYPE_3__ IDirectMusicBufferImpl ;
typedef int HRESULT ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,TYPE_2__*,TYPE_1__**) ;

HRESULT FUNC_6(LPDMUS_BUFFERDESC VAR_6, LPVOID* VAR_7)
{
    IDirectMusicBufferImpl* VAR_8;

    FUNC_5("(%p, %p)\n", VAR_6, VAR_7);

    *VAR_7 = ((void*)0);

    VAR_8 = FUNC_2(FUNC_1(), VAR_3, sizeof(IDirectMusicBufferImpl));
    if (!VAR_8)
        return VAR_1;

    VAR_8->IDirectMusicBuffer_iface.lpVtbl = &VAR_0;
    VAR_8->ref = 1;

    if (FUNC_4(&VAR_6->guidBufferFormat, &VAR_2))
        VAR_8->format = VAR_4;
    else
        VAR_8->format = VAR_6->guidBufferFormat;
    VAR_8->size = (VAR_6->cbBuffer + 3) & ~3;

    VAR_8->data = FUNC_2(FUNC_1(), 0, VAR_8->size);
    if (!VAR_8->data) {
        FUNC_3(FUNC_1(), 0, VAR_8);
        return VAR_1;
    }

    FUNC_0();
    *VAR_7 = &VAR_8->IDirectMusicBuffer_iface;

    return VAR_5;
}
