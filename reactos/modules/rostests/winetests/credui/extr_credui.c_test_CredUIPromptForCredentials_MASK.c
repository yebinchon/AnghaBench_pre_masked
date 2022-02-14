
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int credui_info ;
typedef char WCHAR ;
struct TYPE_3__ {int cbSize; char const* pszCaptionText; int * hbmBanner; int * pszMessageText; int * hwndParent; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CREDUI_INFOW ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,int *,int ,char*,int ,char*,int ,int *,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void FUNC_4(void)
{
    static const WCHAR VAR_16[] = {'W','i','n','e','T','e','s','t',0};
    DWORD VAR_17;
    WCHAR VAR_18[256];
    WCHAR VAR_19[256];
    CREDUI_INFOW VAR_20;
    BOOL VAR_21 = VAR_13;

    VAR_20.cbSize = sizeof(VAR_20);
    VAR_20.hwndParent = ((void*)0);
    VAR_20.pszMessageText = ((void*)0);
    VAR_20.hbmBanner = ((void*)0);

    VAR_17 = FUNC_1(((void*)0), VAR_14);
    FUNC_3(VAR_17 == VAR_10 || VAR_17 == VAR_11 ,
        "CredUIConfirmCredentials should have returned ERROR_INVALID_PARAMETER or ERROR_NOT_FOUND instead of %d\n", VAR_17);

    VAR_17 = FUNC_1(VAR_16, VAR_14);
    FUNC_3(VAR_17 == VAR_11, "CredUIConfirmCredentials should have returned ERROR_NOT_FOUND instead of %d\n", VAR_17);

    VAR_18[0] = '\0';
    VAR_19[0] = '\0';
    VAR_17 = FUNC_2(((void*)0), ((void*)0), ((void*)0), 0, VAR_18,
                                      FUNC_0(VAR_18),
                                      VAR_19, FUNC_0(VAR_19),
                                      ((void*)0), VAR_0);
    FUNC_3(VAR_17 == VAR_9, "CredUIPromptForCredentials should have returned ERROR_INVALID_FLAGS instead of %d\n", VAR_17);

    VAR_17 = FUNC_2(((void*)0), ((void*)0), ((void*)0), 0, VAR_18,
                                      FUNC_0(VAR_18),
                                      VAR_19, FUNC_0(VAR_19),
                                      ((void*)0), VAR_0 | VAR_3);
    FUNC_3(VAR_17 == VAR_10, "CredUIPromptForCredentials should have returned ERROR_INVALID_PARAMETER instead of %d\n", VAR_17);

    VAR_17 = FUNC_2(((void*)0), VAR_16, ((void*)0), 0, VAR_18,
                                      FUNC_0(VAR_18),
                                      VAR_19, FUNC_0(VAR_19),
                                      ((void*)0), VAR_6);
    FUNC_3(VAR_17 == VAR_10, "CredUIPromptForCredentials should have returned ERROR_INVALID_PARAMETER instead of %d\n", VAR_17);

    if (VAR_15)
    {
        static const WCHAR VAR_22[] = {'C','R','E','D','U','I','_','F','L','A','G','S','_','E','X','P','E','C','T','_','C','O','N','F','I','R','M','A','T','I','O','N',0};
        static const WCHAR VAR_23[] = {'C','R','E','D','U','I','_','F','L','A','G','S','_','I','N','C','O','R','R','E','C','T','_','P','A','S','S','W','O','R','D','|',
            'C','R','E','D','U','I','_','F','L','A','G','S','_','E','X','P','E','C','T','_','C','O','N','F','I','R','M','A','T','I','O','N',0};
        static const WCHAR VAR_24[] = {'C','R','E','D','U','I','_','F','L','A','G','S','_','D','O','_','N','O','T','_','P','E','R','S','I','S','T','|',
            'C','R','E','D','U','I','_','F','L','A','G','S','_','E','X','P','E','C','T','_','C','O','N','F','I','R','M','A','T','I','O','N',0};
        static const WCHAR VAR_25[] = {'C','R','E','D','U','I','_','F','L','A','G','S','_','P','E','R','S','I','S','T','|',
            'C','R','E','D','U','I','_','F','L','A','G','S','_','E','X','P','E','C','T','_','C','O','N','F','I','R','M','A','T','I','O','N',0};

        VAR_17 = FUNC_2(((void*)0), VAR_16, ((void*)0), 0, VAR_18,
                                          FUNC_0(VAR_18),
                                          VAR_19, FUNC_0(VAR_19),
                                          &VAR_21, VAR_2);
        FUNC_3(VAR_17 == VAR_12 || VAR_17 == VAR_8, "CredUIPromptForCredentials failed with error %d\n", VAR_17);
        if (VAR_17 == VAR_12)
        {
            VAR_17 = FUNC_1(VAR_16, VAR_13);
            FUNC_3(VAR_17 == VAR_12, "CredUIConfirmCredentials failed with error %d\n", VAR_17);
        }

        VAR_20.pszCaptionText = VAR_22;
        VAR_17 = FUNC_2(&VAR_20, VAR_16, ((void*)0), VAR_7,
                                          VAR_18, FUNC_0(VAR_18),
                                          VAR_19, FUNC_0(VAR_19),
                                          &VAR_21, VAR_2);
        FUNC_3(VAR_17 == VAR_12 || VAR_17 == VAR_8, "CredUIPromptForCredentials failed with error %d\n", VAR_17);
        if (VAR_17 == VAR_12)
        {
            VAR_17 = FUNC_1(VAR_16, VAR_13);
            FUNC_3(VAR_17 == VAR_12, "CredUIConfirmCredentials failed with error %d\n", VAR_17);
        }

        VAR_20.pszCaptionText = VAR_23;
        VAR_17 = FUNC_2(&VAR_20, VAR_16, ((void*)0), 0,
                                          VAR_18, FUNC_0(VAR_18),
                                          VAR_19, FUNC_0(VAR_19),
                                          ((void*)0), VAR_4|VAR_2);
        FUNC_3(VAR_17 == VAR_12 || VAR_17 == VAR_8, "CredUIPromptForCredentials failed with error %d\n", VAR_17);
        if (VAR_17 == VAR_12)
        {
            VAR_17 = FUNC_1(VAR_16, VAR_13);
            FUNC_3(VAR_17 == VAR_12, "CredUIConfirmCredentials failed with error %d\n", VAR_17);
        }


        VAR_21 = VAR_14;
        VAR_20.pszCaptionText = VAR_24;
        VAR_17 = FUNC_2(&VAR_20, VAR_16, ((void*)0), 0,
                                          VAR_18, FUNC_0(VAR_18),
                                          VAR_19, FUNC_0(VAR_19),
                                          &VAR_21, VAR_1|VAR_2);
        FUNC_3(VAR_17 == VAR_12 || VAR_17 == VAR_8, "CredUIPromptForCredentials failed with error %d\n", VAR_17);
        FUNC_3(VAR_21, "save flag should have been untouched\n");

        VAR_21 = VAR_13;
        VAR_20.pszCaptionText = VAR_25;
        VAR_17 = FUNC_2(&VAR_20, VAR_16, ((void*)0), 0,
                                          VAR_18, FUNC_0(VAR_18),
                                          VAR_19, FUNC_0(VAR_19),
                                          &VAR_21, VAR_5|VAR_2);
        FUNC_3(VAR_17 == VAR_12 || VAR_17 == VAR_8, "CredUIPromptForCredentials failed with error %d\n", VAR_17);
        FUNC_3(!VAR_21, "save flag should have been untouched\n");
        if (VAR_17 == VAR_12)
        {
            VAR_17 = FUNC_1(VAR_16, VAR_13);
            FUNC_3(VAR_17 == VAR_12, "CredUIConfirmCredentials failed with error %d\n", VAR_17);
        }

    }
}
