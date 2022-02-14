
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IEnumMoniker_iface; int * moniker_list; int pos; } ;
typedef int InterfaceList ;
typedef TYPE_1__ IEnumMoniker ;
typedef int HRESULT ;
typedef TYPE_2__ EnumMonikerImpl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_3(InterfaceList *VAR_4,
                                                 ULONG VAR_5,
                                                 IEnumMoniker **VAR_6)
{
    EnumMonikerImpl* VAR_7 = ((void*)0);

    if (!VAR_6)
        return VAR_0;

    VAR_7 = FUNC_1(FUNC_0(), 0, sizeof(EnumMonikerImpl));
    if (!VAR_7) return VAR_1;

    FUNC_2("(%p)\n", VAR_7);


    VAR_7->IEnumMoniker_iface.lpVtbl = &VAR_3;


    VAR_7->ref = 1;
    VAR_7->pos = VAR_5;
    VAR_7->moniker_list = VAR_4;

    *VAR_6 = &VAR_7->IEnumMoniker_iface;

    return VAR_2;
}
