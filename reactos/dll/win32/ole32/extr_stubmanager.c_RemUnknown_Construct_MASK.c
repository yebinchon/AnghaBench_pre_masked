
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int refs; TYPE_2__ IRemUnknown_iface; } ;
typedef TYPE_1__ RemUnknown ;
typedef TYPE_2__ IRemUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_2(IRemUnknown **VAR_3)
{
    RemUnknown *VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_4));

    if (!VAR_4) return VAR_0;

    VAR_4->IRemUnknown_iface.lpVtbl = &VAR_1;
    VAR_4->refs = 1;

    *VAR_3 = &VAR_4->IRemUnknown_iface;
    return VAR_2;
}
