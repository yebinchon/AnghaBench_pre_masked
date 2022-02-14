
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* protocol; int clsid; int callback; int mime; } ;
struct TYPE_6__ {int IInternetProtocolEx_iface; } ;
typedef int * LPWSTR ;
typedef int HRESULT ;
typedef int CLSID ;
typedef TYPE_2__ Binding ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int *,int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static void FUNC_9(Binding *VAR_5)
{
    LPWSTR VAR_6;
    CLSID VAR_7;
    HRESULT VAR_8;

    if(!VAR_5->mime) {
        FUNC_1("MIME not available\n");
        return;
    }

    if((VAR_6 = FUNC_6(VAR_5->mime, &VAR_7)))
        FUNC_2(VAR_5->callback, 0, 0, VAR_1, VAR_6);

    FUNC_2(VAR_5->callback, 0, 0, VAR_0, ((void*)0));

    if(VAR_6) {
        VAR_8 = FUNC_4(VAR_5, &VAR_7, VAR_6);
        FUNC_7(VAR_6);
    }else {
        FUNC_1("Could not find object for MIME %s\n", FUNC_5(VAR_5->mime));
        VAR_8 = VAR_4;
    }

    FUNC_2(VAR_5->callback, 0, 0, VAR_2, ((void*)0));
    VAR_5->clsid = VAR_3;

    FUNC_8(VAR_5, VAR_8, ((void*)0));
    if(FUNC_0(VAR_8))
        FUNC_3(&VAR_5->protocol->IInternetProtocolEx_iface, 0);
}
