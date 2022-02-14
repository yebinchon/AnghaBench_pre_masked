
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int refCount; TYPE_1__ ITfTextInputProcessor_iface; } ;
typedef TYPE_2__ TextService ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static HRESULT FUNC_2(IUnknown *VAR_5, IUnknown **VAR_6)
{
    TextService *VAR_7;
    if (VAR_5)
        return VAR_0;

    VAR_7 = FUNC_1(FUNC_0(),VAR_2,sizeof(TextService));
    if (VAR_7 == ((void*)0))
        return VAR_1;

    VAR_7->ITfTextInputProcessor_iface.lpVtbl = &VAR_4;
    VAR_7->refCount = 1;

    *VAR_6 = (IUnknown*)&VAR_7->ITfTextInputProcessor_iface;
    return VAR_3;
}
