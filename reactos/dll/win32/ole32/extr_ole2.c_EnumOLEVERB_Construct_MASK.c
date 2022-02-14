
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IEnumOLEVERB_iface; int hkeyVerb; int index; } ;
typedef TYPE_1__ IEnumOLEVERB ;
typedef int HRESULT ;
typedef int HKEY ;
typedef TYPE_2__ EnumOLEVERB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3(HKEY VAR_3, ULONG VAR_4, IEnumOLEVERB **VAR_5)
{
    EnumOLEVERB *VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_6));
    if (!VAR_6)
    {
        FUNC_2(VAR_3);
        return VAR_0;
    }
    VAR_6->IEnumOLEVERB_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;
    VAR_6->index = VAR_4;
    VAR_6->hkeyVerb = VAR_3;
    *VAR_5 = &VAR_6->IEnumOLEVERB_iface;
    return VAR_2;
}
