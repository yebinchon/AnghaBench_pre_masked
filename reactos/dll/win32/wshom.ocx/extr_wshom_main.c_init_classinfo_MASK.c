
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct provideclassinfo {int const* guid; int * outer; TYPE_1__ IProvideClassInfo_iface; } ;
typedef int IUnknown ;
typedef int GUID ;


 int VAR_0 ;

void FUNC_0(const GUID *VAR_1, IUnknown *VAR_2, struct provideclassinfo *VAR_3)
{
    VAR_3->IProvideClassInfo_iface.lpVtbl = &VAR_0;
    VAR_3->outer = VAR_2;
    VAR_3->guid = VAR_1;
}
