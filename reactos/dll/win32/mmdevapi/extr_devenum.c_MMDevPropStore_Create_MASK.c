
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; scalar_t__ access; int * parent; TYPE_2__ IPropertyStore_iface; } ;
typedef int MMDevice ;
typedef TYPE_1__ MMDevPropStore ;
typedef TYPE_2__ IPropertyStore ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_3(MMDevice *VAR_7, DWORD VAR_8, IPropertyStore **VAR_9)
{
    MMDevPropStore *VAR_10;
    if (VAR_8 != VAR_3
        && VAR_8 != VAR_5
        && VAR_8 != VAR_4)
    {
        FUNC_2("Invalid access %08x\n", VAR_8);
        return VAR_0;
    }
    VAR_10 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_10));
    *VAR_9 = &VAR_10->IPropertyStore_iface;
    if (!VAR_10)
        return VAR_1;
    VAR_10->IPropertyStore_iface.lpVtbl = &VAR_2;
    VAR_10->ref = 1;
    VAR_10->parent = VAR_7;
    VAR_10->access = VAR_8;
    return VAR_6;
}
