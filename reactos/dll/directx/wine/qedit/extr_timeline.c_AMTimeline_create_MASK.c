
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_12__ {int ref; TYPE_3__ IUnknown_inner; TYPE_3__* outer_unk; TYPE_1__ IAMTimeline_iface; } ;
typedef TYPE_2__ TimelineImpl ;
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

HRESULT FUNC_3(IUnknown *VAR_4, LPVOID *VAR_5)
{
    TimelineImpl* VAR_6 = ((void*)0);

    FUNC_1("(%p,%p)\n", VAR_4, VAR_5);

    VAR_6 = FUNC_0(sizeof(TimelineImpl));
    if (((void*)0) == VAR_6) {
        *VAR_5 = ((void*)0);
        return VAR_0;
    }
    FUNC_2(VAR_6, sizeof(TimelineImpl));

    VAR_6->ref = 1;
    VAR_6->IUnknown_inner.lpVtbl = &VAR_3;
    VAR_6->IAMTimeline_iface.lpVtbl = &VAR_1;

    if (VAR_4)
        VAR_6->outer_unk = VAR_4;
    else
        VAR_6->outer_unk = &VAR_6->IUnknown_inner;

    *VAR_5 = &VAR_6->IUnknown_inner;
    return VAR_2;
}
