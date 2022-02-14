
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * member_0; } ;
typedef TYPE_1__ IUnknown ;
typedef int IClassFactory ;
typedef scalar_t__ HRESULT ;


 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,void**) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,void**) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int,char*,...) ;
 int VAR_11 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void)
{
    IUnknown VAR_12 = { &VAR_11 };
    IClassFactory *VAR_13;
    IUnknown *VAR_14, *VAR_15;
    unsigned VAR_16;
    HRESULT VAR_17;


    VAR_17 = FUNC_1(&VAR_2, VAR_1, ((void*)0), &VAR_7, (void**)&VAR_14);
    FUNC_6(VAR_17 == VAR_8, "CoGetClassObject failed: %08x\n", VAR_17);

    VAR_17 = FUNC_4(VAR_14, &VAR_6, (void**)&VAR_15);
    FUNC_6(VAR_17 == VAR_3, "IInternetProtocolInfo supported\n");

    VAR_17 = FUNC_4(VAR_14, &VAR_4, (void**)&VAR_13);
    FUNC_6(VAR_17 == VAR_8, "Could not get IClassFactory iface: %08x\n", VAR_17);
    FUNC_5(VAR_14);

    VAR_17 = FUNC_2(VAR_13, &VAR_12, &VAR_7, (void**)&VAR_14);
    FUNC_6(VAR_17 == VAR_8, "CreateInstance returned: %08x\n", VAR_17);
    VAR_17 = FUNC_4(VAR_14, &VAR_5, (void**)&VAR_15);
    FUNC_6(VAR_17 == VAR_8, "Could not get IInternetProtocol iface: %08x\n", VAR_17);
    FUNC_5(VAR_15);
    FUNC_5(VAR_14);

    VAR_17 = FUNC_2(VAR_13, (IUnknown*)0xdeadbeef, &VAR_5, (void**)&VAR_15);
    FUNC_6(VAR_17 == VAR_0, "CreateInstance returned: %08x\n", VAR_17);

    FUNC_3(VAR_13);

    if(!VAR_10)
        FUNC_8();

    for(VAR_16 = 0; VAR_16 < FUNC_0(VAR_9); VAR_16++)
        FUNC_7(VAR_9 + VAR_16);
}
