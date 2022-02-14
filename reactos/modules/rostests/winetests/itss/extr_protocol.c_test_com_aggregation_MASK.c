
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * member_0; } ;
typedef TYPE_1__ IUnknown ;
typedef int IClassFactory ;
typedef scalar_t__ HRESULT ;
typedef int CLSID ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int const*,int ,int *,int *,void**) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,void**) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_8(const CLSID *VAR_9)
{
    IUnknown VAR_10 = { &VAR_8 };
    IClassFactory *VAR_11;
    IUnknown *VAR_12, *VAR_13, *VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_1(VAR_9, VAR_1, ((void*)0), &VAR_2, (void**)&VAR_11);
    FUNC_7(VAR_15 == VAR_5, "CoGetClassObject failed: %08x\n", VAR_15);

    VAR_15 = FUNC_2(VAR_11, &VAR_10, &VAR_4, (void**)&VAR_12);
    FUNC_7(VAR_15 == VAR_5, "CreateInstance returned: %08x\n", VAR_15);

    VAR_15 = FUNC_4(VAR_12, &VAR_3, (void**)&VAR_13);
    FUNC_7(VAR_15 == VAR_5, "Could not get IInternetProtocol iface: %08x\n", VAR_15);

    FUNC_6(VAR_6);
    VAR_15 = FUNC_4(VAR_13, &VAR_7, (void**)&VAR_14);
    FUNC_0(VAR_6);
    FUNC_7(VAR_15 == VAR_5, "Could not get IInternetProtocol iface: %08x\n", VAR_15);
    FUNC_7(VAR_14 == (IUnknown*)0xdeadbeef, "unexpected unk2\n");

    FUNC_5(VAR_13);
    FUNC_5(VAR_12);

    VAR_12 = (void*)0xdeadbeef;
    VAR_15 = FUNC_2(VAR_11, &VAR_10, &VAR_3, (void**)&VAR_12);
    FUNC_7(VAR_15 == VAR_0, "CreateInstance returned: %08x\n", VAR_15);
    FUNC_7(!VAR_12, "unk = %p\n", VAR_12);

    FUNC_3(VAR_11);
}
