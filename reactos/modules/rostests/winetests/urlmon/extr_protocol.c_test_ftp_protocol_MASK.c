
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef float WCHAR ;
typedef scalar_t__ ULONG ;
typedef int IUnknown ;
typedef int IInternetProtocolInfo ;
typedef int IInternetProtocolEx ;
typedef int IClassFactory ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,void**) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *,int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *,void**) ;
 scalar_t__ FUNC_7 (int ,int *,int,int*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,float const*,int *,int *,int ,int ) ;
 scalar_t__ FUNC_10 (int *,int *,void**) ;
 int FUNC_11 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (int ) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_13 (int ,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int,char*,...) ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void FUNC_20(void)
{
    IInternetProtocolInfo *VAR_33;
    IClassFactory *VAR_34;
    IUnknown *VAR_35;
    BYTE VAR_36[4096];
    ULONG VAR_37;
    DWORD VAR_38;
    HRESULT VAR_39;

    static const WCHAR VAR_40[] = {'f','t','p',':','/','/','f','t','p','.','w','i','n','e','h','q','.','o','r','g',
    '/','p','u','b','/','o','t','h','e','r','/',
    'w','i','n','e','l','o','g','o','.','x','c','f','.','t','a','r','.','b','z','2',0};

    FUNC_19("Testing ftp protocol...\n");

    FUNC_14(VAR_9, 0);

    VAR_27 = VAR_0 | VAR_1 | VAR_4 | VAR_2 | VAR_3;
    VAR_32 = VAR_20;
    VAR_29 = VAR_8;

    VAR_39 = FUNC_1(&VAR_6, VAR_5, ((void*)0), &VAR_15, (void**)&VAR_35);
    FUNC_15(VAR_39 == VAR_22, "CoGetClassObject failed: %08x\n", VAR_39);
    if(FUNC_2(VAR_39))
        return;

    VAR_39 = FUNC_10(VAR_35, &VAR_14, (void**)&VAR_33);
    FUNC_15(VAR_39 == VAR_7, "Could not get IInternetProtocolInfo interface: %08x, expected E_NOINTERFACE\n", VAR_39);

    VAR_39 = FUNC_10(VAR_35, &VAR_11, (void**)&VAR_34);
    FUNC_15(VAR_39 == VAR_22, "Could not get IClassFactory interface\n");
    FUNC_11(VAR_35);
    if(FUNC_2(VAR_39))
        return;

    VAR_39 = FUNC_3(VAR_34, ((void*)0), &VAR_12,
                                        (void**)&VAR_25);
    FUNC_4(VAR_34);
    FUNC_15(VAR_39 == VAR_22, "Could not get IInternetProtocol: %08x\n", VAR_39);

    FUNC_17(VAR_25);

    FUNC_12(VAR_10);
    FUNC_12(VAR_17);
    FUNC_12(VAR_16);
    FUNC_12(VAR_18);
    FUNC_12(VAR_23);

    VAR_39 = FUNC_9(VAR_25, VAR_40, &VAR_31, &VAR_26, 0, 0);
    FUNC_15(VAR_39 == VAR_22, "Start failed: %08x\n", VAR_39);
    FUNC_0(VAR_10);

    FUNC_12(VAR_19);

    VAR_39 = FUNC_7(VAR_25, VAR_36, 1, &VAR_38);
    FUNC_15((VAR_39 == VAR_8 && VAR_38==0) ||
       (VAR_39 == VAR_22 && VAR_38==1), "Read failed: %08x (%d bytes)\n", VAR_39, VAR_38);

    FUNC_15( FUNC_13(VAR_28, 90000) == VAR_24, "wait timed out\n" );

    while(1) {
        VAR_39 = FUNC_7(VAR_25, VAR_36, sizeof(VAR_36), &VAR_38);
        if(VAR_39 == VAR_8)
        {
            DWORD VAR_41 = FUNC_13(VAR_28, 90000);
            FUNC_15( VAR_41 == VAR_24, "wait timed out\n" );
            if (VAR_41 != VAR_24) break;
        }
        else
            if(VAR_38 == 0) break;
    }

    FUNC_15(VAR_39 == VAR_21, "Read failed: %08x\n", VAR_39);
    FUNC_0(VAR_19);
    FUNC_0(VAR_23);

    FUNC_18(VAR_25);

    if(VAR_30) {
        IInternetProtocolEx *VAR_42;

        VAR_39 = FUNC_6(VAR_25, &VAR_13, (void**)&VAR_42);
        FUNC_15(VAR_39 == VAR_22, "Could not get IInternetProtocolEx iface: %08x\n", VAR_39);
        FUNC_5(VAR_42);
    }

    VAR_37 = FUNC_8(VAR_25);
    FUNC_15(!VAR_37, "ref=%d\n", VAR_37);

    FUNC_16(&VAR_6);
}
