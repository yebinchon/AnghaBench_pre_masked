
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_12__ {int ref; int num_streams; TYPE_3__ IUnknown_inner; TYPE_3__* outer_unk; scalar_t__ cur_stream; int * cur_pin; int * splitter; int * source; int * graph; TYPE_1__ IMediaDet_iface; } ;
typedef TYPE_2__ MediaDetImpl ;
typedef TYPE_3__* LPVOID ;
typedef TYPE_3__ IUnknown ;
typedef int HRESULT ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,TYPE_3__*,TYPE_3__**) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_3 ;

HRESULT FUNC_3(IUnknown * VAR_4, LPVOID * VAR_5) {
    MediaDetImpl* VAR_6 = ((void*)0);

    FUNC_1("(%p,%p)\n", VAR_4, VAR_5);

    VAR_6 = FUNC_0(sizeof(MediaDetImpl));
    if (((void*)0) == VAR_6) {
        *VAR_5 = ((void*)0);
        return VAR_0;
    }
    FUNC_2(VAR_6, sizeof(MediaDetImpl));

    VAR_6->ref = 1;
    VAR_6->IUnknown_inner.lpVtbl = &VAR_3;
    VAR_6->IMediaDet_iface.lpVtbl = &VAR_1;
    VAR_6->graph = ((void*)0);
    VAR_6->source = ((void*)0);
    VAR_6->splitter = ((void*)0);
    VAR_6->cur_pin = ((void*)0);
    VAR_6->num_streams = -1;
    VAR_6->cur_stream = 0;

    if (VAR_4)
        VAR_6->outer_unk = VAR_4;
    else
        VAR_6->outer_unk = &VAR_6->IUnknown_inner;

    *VAR_5 = &VAR_6->IUnknown_inner;
    return VAR_2;
}
