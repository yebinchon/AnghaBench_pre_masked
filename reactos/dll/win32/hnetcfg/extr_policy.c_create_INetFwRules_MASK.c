
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int refs; TYPE_2__ INetFwRules_iface; } ;
typedef TYPE_1__ fw_rules ;
typedef TYPE_2__ INetFwRules ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3(INetFwRules **VAR_3)
{
    fw_rules *VAR_4;

    FUNC_2("(%p)\n", VAR_3);

    VAR_4 = FUNC_1( FUNC_0(), 0, sizeof(*VAR_4) );
    if (!VAR_4) return VAR_0;

    VAR_4->INetFwRules_iface.lpVtbl = &VAR_2;
    VAR_4->refs = 1;

    *VAR_3 = &VAR_4->INetFwRules_iface;

    FUNC_2("returning iface %p\n", *VAR_3);
    return VAR_1;
}
