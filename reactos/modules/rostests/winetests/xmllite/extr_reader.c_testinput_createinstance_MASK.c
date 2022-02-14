
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_1__ IUnknown_iface; } ;
typedef TYPE_2__ testinput ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_1(void **VAR_3)
{
    testinput *VAR_4;

    VAR_4 = FUNC_0(sizeof(*VAR_4));
    if(!VAR_4) return VAR_0;

    VAR_4->IUnknown_iface.lpVtbl = &VAR_2;
    VAR_4->ref = 1;

    *VAR_3 = &VAR_4->IUnknown_iface;

    return VAR_1;
}
