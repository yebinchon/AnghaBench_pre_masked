
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dispex_static_data_t ;
struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int * dynamic_data; int * data; int * outer; TYPE_1__ IDispatchEx_iface; } ;
typedef int IUnknown ;
typedef TYPE_2__ DispatchEx ;


 int VAR_0 ;

void FUNC_0(DispatchEx *VAR_1, IUnknown *VAR_2, dispex_static_data_t *VAR_3)
{
    VAR_1->IDispatchEx_iface.lpVtbl = &VAR_0;
    VAR_1->outer = VAR_2;
    VAR_1->data = VAR_3;
    VAR_1->dynamic_data = ((void*)0);
}
