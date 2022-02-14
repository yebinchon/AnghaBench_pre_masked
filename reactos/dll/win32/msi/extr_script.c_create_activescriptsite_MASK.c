
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; int * session; int * installer; TYPE_1__ IActiveScriptSite_iface; } ;
typedef TYPE_2__ MsiActiveScriptSite ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__**) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static HRESULT FUNC_2(MsiActiveScriptSite **VAR_3)
{
    MsiActiveScriptSite* VAR_4;

    FUNC_0("(%p)\n", VAR_3);

    *VAR_3 = ((void*)0);

    VAR_4 = FUNC_1( sizeof(MsiActiveScriptSite) );
    if (!VAR_4)
        return VAR_0;

    VAR_4->IActiveScriptSite_iface.lpVtbl = &VAR_2;
    VAR_4->ref = 1;
    VAR_4->installer = ((void*)0);
    VAR_4->session = ((void*)0);

    *VAR_3 = VAR_4;

    return VAR_1;
}
