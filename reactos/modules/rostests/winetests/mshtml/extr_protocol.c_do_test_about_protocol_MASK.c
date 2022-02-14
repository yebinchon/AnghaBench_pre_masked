
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_html ;
typedef int buf ;
typedef int blank_html ;
typedef int WCHAR ;
typedef int ULONG ;
typedef int IInternetProtocol ;
typedef int IInternetPriority ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *,int *,int,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *,int const*,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(IClassFactory *VAR_8, DWORD VAR_9)
{
    IInternetProtocol *VAR_10;
    IInternetPriority *VAR_11;
    BYTE VAR_12[512];
    ULONG VAR_13;
    HRESULT VAR_14;

    static const WCHAR VAR_15[] = {0xfeff,'<','H','T','M','L','>','<','/','H','T','M','L','>',0};
    static const WCHAR VAR_16[] =
        {0xfeff,'<','H','T','M','L','>','t','e','s','t','<','/','H','T','M','L','>',0};

    VAR_7 = VAR_9;

    VAR_14 = FUNC_1(VAR_8, ((void*)0), &VAR_2, (void**)&VAR_10);
    FUNC_8(VAR_14 == VAR_3, "Could not get IInternetProtocol: %08x\n", VAR_14);
    if(FUNC_0(VAR_14))
        return;

    VAR_14 = FUNC_3(VAR_10, &VAR_1, (void**)&VAR_11);
    FUNC_8(VAR_14 == VAR_0,
       "QueryInterface(IInternetPriority) returned %08x, expected E_NOINTEFACE\n", VAR_14);

    FUNC_9(VAR_10, VAR_4);
    VAR_14 = FUNC_2(VAR_10, 0);
    FUNC_8(VAR_14 == VAR_3, "LockRequest failed: %08x\n", VAR_14);
    VAR_14 = FUNC_4(VAR_10, VAR_12, sizeof(VAR_12), &VAR_13);
    FUNC_8(VAR_14 == VAR_3, "Read failed: %08x\n", VAR_14);
    FUNC_8(VAR_13 == sizeof(VAR_15), "cb=%d\n", VAR_13);
    FUNC_8(!FUNC_7(VAR_12, VAR_15, VAR_13), "Readed wrong data\n");
    VAR_14 = FUNC_6(VAR_10);
    FUNC_8(VAR_14 == VAR_3, "UnlockRequest failed: %08x\n", VAR_14);

    FUNC_9(VAR_10, VAR_6);
    VAR_14 = FUNC_2(VAR_10, 0);
    FUNC_8(VAR_14 == VAR_3, "LockRequest failed: %08x\n", VAR_14);
    VAR_14 = FUNC_4(VAR_10, VAR_12, sizeof(VAR_12), &VAR_13);
    FUNC_8(VAR_14 == VAR_3, "Read failed: %08x\n", VAR_14);
    FUNC_8(VAR_13 == sizeof(VAR_16), "cb=%d\n", VAR_13);
    FUNC_8(!FUNC_7(VAR_12, VAR_16, VAR_13), "Readed wrong data\n");
    VAR_14 = FUNC_6(VAR_10);
    FUNC_8(VAR_14 == VAR_3, "UnlockRequest failed: %08x\n", VAR_14);

    FUNC_9(VAR_10, VAR_5);
    VAR_14 = FUNC_2(VAR_10, 0);
    FUNC_8(VAR_14 == VAR_3, "LockRequest failed: %08x\n", VAR_14);
    VAR_14 = FUNC_4(VAR_10, VAR_12, sizeof(VAR_12), &VAR_13);
    FUNC_8(VAR_14 == VAR_3, "Read failed: %08x\n", VAR_14);
    FUNC_8(VAR_13 == sizeof(VAR_15), "cb=%d\n", VAR_13);
    FUNC_8(!FUNC_7(VAR_12, VAR_15, VAR_13), "Readed wrong data\n");
    VAR_14 = FUNC_6(VAR_10);
    FUNC_8(VAR_14 == VAR_3, "UnlockRequest failed: %08x\n", VAR_14);

    FUNC_5(VAR_10);
}
