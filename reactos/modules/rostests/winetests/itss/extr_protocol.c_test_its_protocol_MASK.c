
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ ULONG ;
typedef int IUnknown ;
typedef int IInternetProtocolInfo ;
typedef int IInternetProtocol ;
typedef int IClassFactory ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int *,void**) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char const*,int *,int *,int ,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,char*,...) ;
 int VAR_25 ;
 int FUNC_11 (int *) ;
 int VAR_26 ;
 int FUNC_12 (int *,char const*,int ) ;
 int FUNC_13 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_14(void)
{
    IInternetProtocolInfo *VAR_27;
    IClassFactory *VAR_28;
    IUnknown *VAR_29;
    ULONG VAR_30;
    HRESULT VAR_31;

    static const WCHAR VAR_32[] =
        {'i','t','s',':','t','e','s','t','.','c','h','m',':',':','/','b','l','a','n','.','h','t','m','l',0};
    static const WCHAR VAR_33[] =
        {'i','t','s',':','t','e','s','.','c','h','m',':',':','b','/','l','a','n','k','.','h','t','m','l',0};
    static const WCHAR VAR_34[] =
        {'i','t','s',':','t','e','s','t','.','c','h','m','/','b','l','a','n','k','.','h','t','m','l',0};
    static const WCHAR VAR_35[] = {'m','k',':','@','M','S','I','T','S','t','o','r',':',
         't','e','s','t','.','c','h','m',':',':','/','b','l','a','n','k','.','h','t','m','l',0};
    static const WCHAR VAR_36[] = {'f','i','l','e',':',
        't','e','s','.','c','h','m',':',':','/','b','l','a','n','k','.','h','t','m','l',0};

    VAR_26 = VAR_10;

    VAR_31 = FUNC_0(&VAR_3, VAR_2, ((void*)0), &VAR_8, (void**)&VAR_29);
    FUNC_10(VAR_31 == VAR_13 ||
       FUNC_9(VAR_31 == VAR_11),
       "CoGetClassObject failed: %08x\n", VAR_31);
    if(FUNC_1(VAR_31))
        return;

    VAR_31 = FUNC_6(VAR_29, &VAR_7, (void**)&VAR_27);
    FUNC_10(VAR_31 == VAR_4, "Could not get IInternetProtocolInfo: %08x\n", VAR_31);

    VAR_31 = FUNC_6(VAR_29, &VAR_5, (void**)&VAR_28);
    FUNC_10(VAR_31 == VAR_13, "Could not get IClassFactory interface\n");
    if(FUNC_8(VAR_31)) {
        IInternetProtocol *VAR_37;

        VAR_31 = FUNC_2(VAR_28, ((void*)0), &VAR_6, (void**)&VAR_37);
        FUNC_10(VAR_31 == VAR_13, "Could not get IInternetProtocol: %08x\n", VAR_31);
        if(FUNC_8(VAR_31)) {
            FUNC_11(VAR_37);

            FUNC_12(VAR_37, VAR_32, VAR_12);
            FUNC_12(VAR_37, VAR_33, VAR_12);
            FUNC_12(VAR_37, VAR_34, VAR_12);

            VAR_31 = FUNC_5(VAR_37, VAR_35, &VAR_25, &VAR_15, 0, 0);
            FUNC_10(VAR_31 == VAR_9,
               "Start failed: %08x, expected INET_E_USE_DEFAULT_PROTOCOLHANDLER\n", VAR_31);

            VAR_31 = FUNC_5(VAR_37, VAR_36, &VAR_25, &VAR_15, 0, 0);
            FUNC_10(VAR_31 == VAR_9,
               "Start failed: %08x, expected INET_E_USE_DEFAULT_PROTOCOLHANDLER\n", VAR_31);

            VAR_30 = FUNC_4(VAR_37);
            FUNC_10(!VAR_30, "protocol ref=%d\n", VAR_30);

            FUNC_13(VAR_28, VAR_17, VAR_14);
            FUNC_13(VAR_28, VAR_18, VAR_14);
            FUNC_13(VAR_28, VAR_19, VAR_14);
            FUNC_13(VAR_28, VAR_20, VAR_14);
            FUNC_13(VAR_28, VAR_21, VAR_14);
            FUNC_13(VAR_28, VAR_22, VAR_14);
            FUNC_13(VAR_28, VAR_23, VAR_14);
            FUNC_13(VAR_28, VAR_24, VAR_14);
            VAR_16 = VAR_0 | VAR_1;
            FUNC_13(VAR_28, VAR_17, VAR_14);
        }

        FUNC_3(VAR_28);
    }

    FUNC_7(VAR_29);
}
