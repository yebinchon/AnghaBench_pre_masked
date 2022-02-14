
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int ULONG ;
typedef int LPCWSTR ;
typedef int IInternetProtocol ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,void**) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *,int ,int ) ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_10(IClassFactory *VAR_8, LPCWSTR VAR_9, BOOL VAR_10)
{
    IInternetProtocol *VAR_11;
    BYTE VAR_12[512];
    ULONG VAR_13, VAR_14;
    HRESULT VAR_15;

    VAR_15 = FUNC_1(VAR_8, ((void*)0), &VAR_1, (void**)&VAR_11);
    FUNC_8(VAR_15 == VAR_5, "Could not get IInternetProtocol: %08x\n", VAR_15);
    if(FUNC_0(VAR_15))
        return;

    VAR_15 = FUNC_9(VAR_11, VAR_9, VAR_10);
    if(FUNC_0(VAR_15)) {
        FUNC_4(VAR_11);
        return;
    }

    VAR_15 = FUNC_3(VAR_11, VAR_12, sizeof(VAR_12), &VAR_13);
    FUNC_8(VAR_15 == VAR_5, "Read failed: %08x\n", VAR_15);
    FUNC_8(VAR_13 == 13, "cb=%u expected 13\n", VAR_13);
    FUNC_8(!FUNC_7(VAR_12, "<html></html>", 13), "unexpected data\n");
    VAR_14 = FUNC_4(VAR_11);
    FUNC_8(!VAR_14, "protocol ref=%d\n", VAR_14);

    VAR_15 = FUNC_1(VAR_8, ((void*)0), &VAR_1, (void**)&VAR_11);
    FUNC_8(VAR_15 == VAR_5, "Could not get IInternetProtocol: %08x\n", VAR_15);
    if(FUNC_0(VAR_15))
        return;

    VAR_13 = 0xdeadbeef;
    VAR_15 = FUNC_3(VAR_11, VAR_12, sizeof(VAR_12), &VAR_13);
    FUNC_8(VAR_15 == (VAR_7 == VAR_3 ? VAR_2 : VAR_0),
       "Read returned %08x\n", VAR_15);
    FUNC_8(VAR_13 == 0xdeadbeef, "cb=%u expected 0xdeadbeef\n", VAR_13);

    FUNC_9(VAR_11, VAR_9, VAR_10);
    VAR_15 = FUNC_3(VAR_11, VAR_12, 2, &VAR_13);
    FUNC_8(VAR_15 == VAR_5, "Read failed: %08x\n", VAR_15);
    FUNC_8(VAR_13 == 2, "cb=%u expected 2\n", VAR_13);
    VAR_15 = FUNC_3(VAR_11, VAR_12, sizeof(VAR_12), &VAR_13);
    FUNC_8(VAR_15 == VAR_5, "Read failed: %08x\n", VAR_15);
    FUNC_8(VAR_13 == 11, "cb=%u, expected 11\n", VAR_13);
    VAR_15 = FUNC_3(VAR_11, VAR_12, sizeof(VAR_12), &VAR_13);
    FUNC_8(VAR_15 == VAR_4, "Read failed: %08x expected S_FALSE\n", VAR_15);
    FUNC_8(VAR_13 == 0, "cb=%u expected 0\n", VAR_13);
    VAR_15 = FUNC_6(VAR_11);
    FUNC_8(VAR_15 == VAR_5, "UnlockRequest failed: %08x\n", VAR_15);
    VAR_14 = FUNC_4(VAR_11);
    FUNC_8(!VAR_14, "protocol ref=%d\n", VAR_14);

    VAR_15 = FUNC_1(VAR_8, ((void*)0), &VAR_1, (void**)&VAR_11);
    FUNC_8(VAR_15 == VAR_5, "Could not get IInternetProtocol: %08x\n", VAR_15);
    if(FUNC_0(VAR_15))
        return;

    FUNC_9(VAR_11, VAR_9, VAR_10);
    VAR_15 = FUNC_3(VAR_11, VAR_12, 2, &VAR_13);
    FUNC_8(VAR_15 == VAR_5, "Read failed: %08x\n", VAR_15);
    VAR_15 = FUNC_2(VAR_11, 0);
    FUNC_8(VAR_15 == VAR_5, "LockRequest failed: %08x\n", VAR_15);
    VAR_15 = FUNC_6(VAR_11);
    FUNC_8(VAR_15 == VAR_5, "UnlockRequest failed: %08x\n", VAR_15);
    VAR_15 = FUNC_3(VAR_11, VAR_12, sizeof(VAR_12), &VAR_13);
    FUNC_8(VAR_15 == VAR_5, "Read failed: %08x\n", VAR_15);
    FUNC_8(VAR_13 == 11, "cb=%u, expected 11\n", VAR_13);
    VAR_14 = FUNC_4(VAR_11);
    FUNC_8(!VAR_14, "protocol ref=%d\n", VAR_14);

    VAR_15 = FUNC_1(VAR_8, ((void*)0), &VAR_1, (void**)&VAR_11);
    FUNC_8(VAR_15 == VAR_5, "Could not get IInternetProtocol: %08x\n", VAR_15);
    if(FUNC_0(VAR_15))
        return;

    FUNC_9(VAR_11, VAR_9, VAR_10);
    VAR_15 = FUNC_2(VAR_11, 0);
    FUNC_8(VAR_15 == VAR_5, "LockRequest failed: %08x\n", VAR_15);
    VAR_15 = FUNC_5(VAR_11, 0);
    FUNC_8(VAR_15 == VAR_5, "Terminate failed: %08x\n", VAR_15);
    VAR_15 = FUNC_3(VAR_11, VAR_12, 2, &VAR_13);
    FUNC_8(VAR_15 == VAR_5, "Read failed: %08x\n", VAR_15);
    FUNC_8(VAR_13 == 2, "cb=%u, expected 2\n", VAR_13);
    VAR_15 = FUNC_6(VAR_11);
    FUNC_8(VAR_15 == VAR_5, "UnlockRequest failed: %08x\n", VAR_15);
    VAR_15 = FUNC_3(VAR_11, VAR_12, 2, &VAR_13);
    FUNC_8(VAR_15 == VAR_5, "Read failed: %08x\n", VAR_15);
    FUNC_8(VAR_13 == 2, "cb=%u, expected 2\n", VAR_13);
    VAR_15 = FUNC_5(VAR_11, 0);
    FUNC_8(VAR_15 == VAR_5, "Terminate failed: %08x\n", VAR_15);
    VAR_15 = FUNC_3(VAR_11, VAR_12, 2, &VAR_13);
    FUNC_8(VAR_15 == VAR_5, "Read failed: %08x\n", VAR_15);
    FUNC_8(VAR_13 == 2, "cb=%u expected 2\n", VAR_13);
    VAR_14 = FUNC_4(VAR_11);
    FUNC_8(!VAR_14, "protocol ref=%d\n", VAR_14);

    VAR_15 = FUNC_1(VAR_8, ((void*)0), &VAR_1, (void**)&VAR_6);
    FUNC_8(VAR_15 == VAR_5, "Could not get IInternetProtocol: %08x\n", VAR_15);
    if(FUNC_0(VAR_15))
        return;

    FUNC_9(VAR_6, VAR_9, VAR_10);
    VAR_14 = FUNC_4(VAR_6);
    FUNC_8(!VAR_14, "protocol ref=%d\n", VAR_14);
    VAR_6 = ((void*)0);
}
