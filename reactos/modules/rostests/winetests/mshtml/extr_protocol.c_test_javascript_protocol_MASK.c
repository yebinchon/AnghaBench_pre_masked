
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int WCHAR ;
typedef int IUnknown ;
typedef int IInternetProtocolInfo ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ,int *,int,int*,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int,int ,int *,int,int*,int ) ;
 int FUNC_6 (int *,int ,int const,int ,int *,int,int*,int ) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *,int *,void**) ;
 int FUNC_9 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 scalar_t__ FUNC_10 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int *,char,int) ;
 int FUNC_12 (int,char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    IInternetProtocolInfo *VAR_15;
    IUnknown *VAR_16;
    IClassFactory *VAR_17;
    HRESULT VAR_18;

    VAR_18 = FUNC_0(&VAR_1, VAR_0, ((void*)0), &VAR_6, (void**)&VAR_16);
    FUNC_12(VAR_18 == VAR_13, "CoGetClassObject failed: %08x\n", VAR_18);
    if(FUNC_1(VAR_18))
        return;

    VAR_18 = FUNC_8(VAR_16, &VAR_5, (void**)&VAR_15);
    FUNC_12(VAR_18 == VAR_13, "Could not get IInternetProtocolInfo interface: %08x\n", VAR_18);
    if(FUNC_10(VAR_18)) {
        WCHAR VAR_19[128];
        DWORD VAR_20;
        int VAR_21;

        for(VAR_21 = VAR_9; VAR_21 <= VAR_12; VAR_21++) {
            if(VAR_21 != VAR_11 && VAR_21 != VAR_10) {
                VAR_18 = FUNC_5(VAR_15, VAR_14, VAR_21, 0, VAR_19,
                        sizeof(VAR_19)/sizeof(VAR_19[0]), &VAR_20, 0);
                FUNC_12(VAR_18 == VAR_7,
                        "[%d] failed: %08x, expected INET_E_DEFAULT_ACTION\n", VAR_21, VAR_18);
            }
        }

        VAR_18 = FUNC_5(VAR_15, VAR_14, VAR_12+1, 0, VAR_19,
                sizeof(VAR_19)/sizeof(VAR_19[0]), &VAR_20, 0);
        FUNC_12(VAR_18 == VAR_7,
                "ParseUrl failed: %08x, expected INET_E_DEFAULT_ACTION\n", VAR_18);

        VAR_20 = 0xdeadbeef;
        VAR_18 = FUNC_3(VAR_15, VAR_14, VAR_14,
                0, VAR_19, sizeof(VAR_19)/sizeof(VAR_19[0]), &VAR_20, 0);
        FUNC_12(VAR_18 == VAR_8, "CombineUrl failed: %08x\n", VAR_18);
        FUNC_12(VAR_20 == 0xdeadbeef, "size=%d\n", VAR_20);

        VAR_18 = FUNC_4(VAR_15, VAR_14, VAR_14, 0);
        FUNC_12(VAR_18 == VAR_3, "CompareUrl failed: %08x\n", VAR_18);

        for(VAR_21=0; VAR_21<30; VAR_21++) {
            switch(VAR_21) {
            case 128:
            case 129:
                break;
            default:
                VAR_18 = FUNC_6(VAR_15, VAR_14, VAR_21, 0,
                                                       VAR_19, sizeof(VAR_19), &VAR_20, 0);
                FUNC_12(VAR_18 == VAR_8,
                   "QueryInfo(%d) returned: %08x, expected INET_E_USE_DEFAULT_PROTOCOLHANDLER\n", VAR_21, VAR_18);
            }
        }


        FUNC_11(VAR_19, '?', sizeof(VAR_19));
        VAR_18 = FUNC_6(VAR_15, VAR_14, 128, 0,
                                               VAR_19, sizeof(VAR_19), &VAR_20, 0);
        FUNC_12(VAR_18 == VAR_13, "QueryInfo(QUERY_USES_NETWORK) failed: %08x\n", VAR_18);
        FUNC_12(VAR_20 == sizeof(DWORD), "size=%d\n", VAR_20);
        FUNC_12(!*(DWORD*)VAR_19, "buf=%d\n", *(DWORD*)VAR_19);

        FUNC_11(VAR_19, '?', sizeof(VAR_19));
        VAR_18 = FUNC_6(VAR_15, VAR_14, 128, 0,
                                               VAR_19, sizeof(VAR_19), ((void*)0), 0);
        FUNC_12(VAR_18 == VAR_13, "QueryInfo(QUERY_USES_NETWORK) failed: %08x\n", VAR_18);
        FUNC_12(!*(DWORD*)VAR_19, "buf=%d\n", *(DWORD*)VAR_19);

        VAR_18 = FUNC_6(VAR_15, VAR_14, 128, 0,
                                               VAR_19, 3, &VAR_20, 0);
        FUNC_12(VAR_18 == VAR_2, "QueryInfo(QUERY_USES_NETWORK) failed: %08x, expected E_FAIL\n", VAR_18);

        VAR_18 = FUNC_6(VAR_15, VAR_14, 128, 0,
                                               ((void*)0), sizeof(VAR_19), &VAR_20, 0);
        FUNC_12(VAR_18 == VAR_2, "QueryInfo(QUERY_USES_NETWORK) failed: %08x, expected E_FAIL\n", VAR_18);

        VAR_18 = FUNC_6(VAR_15, VAR_14, 60, 0,
                                               ((void*)0), sizeof(VAR_19), &VAR_20, 0);
        FUNC_12(VAR_18 == VAR_8,
           "QueryInfo failed: %08x, expected INET_E_USE_DEFAULT_PROTOCOLHANDLER\n", VAR_18);



        FUNC_7(VAR_15);
    }

    VAR_18 = FUNC_8(VAR_16, &VAR_4, (void**)&VAR_17);
    FUNC_12(VAR_18 == VAR_13, "Could not get IClassFactory interface\n");
    if(FUNC_10(VAR_18))
        FUNC_2(VAR_17);

    FUNC_9(VAR_16);
}
