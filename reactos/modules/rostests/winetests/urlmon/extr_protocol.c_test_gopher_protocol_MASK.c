
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IInternetProtocolInfo ;
typedef int IClassFactory ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int *,void**) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    IInternetProtocolInfo *VAR_11;
    IClassFactory *VAR_12;
    IUnknown *VAR_13;
    HRESULT VAR_14;

    FUNC_11("Testing gopher protocol...\n");

    VAR_14 = FUNC_0(&VAR_2, VAR_1, ((void*)0), &VAR_7, (void**)&VAR_13);
    FUNC_8(VAR_14 == VAR_9 ||
       FUNC_7(VAR_14 == VAR_8 || VAR_14 == VAR_0),
       "CoGetClassObject failed: %08x\n", VAR_14);
    if(FUNC_1(VAR_14))
        return;

    VAR_14 = FUNC_5(VAR_13, &VAR_6, (void**)&VAR_11);
    FUNC_8(VAR_14 == VAR_3, "Could not get IInternetProtocolInfo interface: %08x, expected E_NOINTERFACE\n", VAR_14);

    VAR_14 = FUNC_5(VAR_13, &VAR_4, (void**)&VAR_12);
    FUNC_8(VAR_14 == VAR_9, "Could not get IClassFactory interface\n");
    FUNC_6(VAR_13);
    if(FUNC_1(VAR_14))
        return;

    VAR_14 = FUNC_2(VAR_12, ((void*)0), &VAR_5,
                                        (void**)&VAR_10);
    FUNC_3(VAR_12);
    FUNC_8(VAR_14 == VAR_9, "Could not get IInternetProtocol: %08x\n", VAR_14);

    FUNC_10(VAR_10);

    FUNC_4(VAR_10);

    FUNC_9(&VAR_2);
}
