
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_14__ {int ref; TYPE_4__ IUnknown_inner; TYPE_4__* outer_unk; TYPE_3__ IAMFilterData_iface; TYPE_2__ IFilterMapper_iface; TYPE_1__ IFilterMapper3_iface; } ;
typedef TYPE_4__* LPVOID ;
typedef TYPE_4__ IUnknown ;
typedef int HRESULT ;
typedef TYPE_6__ FilterMapper3Impl ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;

HRESULT FUNC_2(IUnknown *VAR_6, LPVOID *VAR_7)
{
    FilterMapper3Impl * VAR_8;

    FUNC_1("(%p, %p)\n", VAR_6, VAR_7);

    VAR_8 = FUNC_0(sizeof(*VAR_8));
    if (!VAR_8)
        return VAR_1;

    VAR_8->IUnknown_inner.lpVtbl = &VAR_2;
    VAR_8->IFilterMapper3_iface.lpVtbl = &VAR_4;
    VAR_8->IFilterMapper_iface.lpVtbl = &VAR_5;
    VAR_8->IAMFilterData_iface.lpVtbl = &VAR_0;
    VAR_8->ref = 1;

    if (VAR_6)
        VAR_8->outer_unk = VAR_6;
    else
        VAR_8->outer_unk = &VAR_8->IUnknown_inner;

    *VAR_7 = &VAR_8->IUnknown_inner;

    FUNC_1("-- created at %p\n", VAR_8);

    return VAR_3;
}
