
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int state; int callback; int hres; TYPE_1__* protocol; } ;
struct TYPE_4__ {int IInternetProtocolEx_iface; } ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef TYPE_2__ Binding ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(Binding *VAR_2, HRESULT VAR_3, LPCWSTR VAR_4)
{
    if(VAR_2->state & VAR_0) {
        FUNC_1(&VAR_2->protocol->IInternetProtocolEx_iface);
        VAR_2->state &= ~VAR_0;
    }

    if(!(VAR_2->state & VAR_1)) {
        VAR_2->state |= VAR_1;

        VAR_2->hres = VAR_3;
        FUNC_0(VAR_2->callback, VAR_3, VAR_4);
    }
}
