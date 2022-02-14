
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_1__ IMimeSecurity_iface; } ;
typedef TYPE_2__ MimeSecurity ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

HRESULT FUNC_2(IUnknown *VAR_4, void **VAR_5)
{
    MimeSecurity *VAR_6;

    *VAR_5 = ((void*)0);

    if (VAR_4) return VAR_0;

    VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_6));
    if (!VAR_6) return VAR_1;

    VAR_6->IMimeSecurity_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;

    *VAR_5 = &VAR_6->IMimeSecurity_iface;
    return VAR_3;
}
