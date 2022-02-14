
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
typedef char WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int cbSize; char const* pszMessageText; char const* pszCaptionText; int * hbmBanner; int * hwndParent; } ;
typedef int SECURITY_STATUS ;
typedef int * PSEC_WINNT_AUTH_IDENTITY_OPAQUE ;
typedef TYPE_1__ CREDUI_INFOW ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *,char const**,char const**,char const**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,TYPE_1__*,int ,char const*,int *,int **,int*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_5(void)
{
    static const WCHAR VAR_8[] = {'S','s','p','i','T','e','s','t',0};
    static const WCHAR VAR_9[] = {'b','a','s','i','c',0};
    ULONG VAR_10;
    SECURITY_STATUS VAR_11;
    CREDUI_INFOW VAR_12;
    PSEC_WINNT_AUTH_IDENTITY_OPAQUE VAR_13;
    const WCHAR *VAR_14, *VAR_15, *VAR_16;
    int VAR_17;

    if (!&FUNC_3 || !&FUNC_2)
    {
        FUNC_4( "SspiPromptForCredentialsW is missing\n" );
        return;
    }

    VAR_12.cbSize = sizeof(VAR_12);
    VAR_12.hwndParent = ((void*)0);
    VAR_12.pszMessageText = VAR_8;
    VAR_12.pszCaptionText = VAR_9;
    VAR_12.hbmBanner = ((void*)0);
    VAR_10 = FUNC_3( ((void*)0), &VAR_12, 0, VAR_9, ((void*)0), &VAR_13, &VAR_17, 0 );
    FUNC_0( VAR_10 == VAR_1, "got %u\n", VAR_10 );

    VAR_10 = FUNC_3( VAR_8, &VAR_12, 0, ((void*)0), ((void*)0), &VAR_13, &VAR_17, 0 );
    FUNC_0( VAR_10 == VAR_2, "got %u\n", VAR_10 );

    if (VAR_7)
    {
        VAR_13 = ((void*)0);
        VAR_17 = -1;
        VAR_10 = FUNC_3( VAR_8, &VAR_12, 0, VAR_9, ((void*)0), &VAR_13, &VAR_17, 0 );
        FUNC_0( VAR_10 == VAR_3 || VAR_10 == VAR_0, "got %u\n", VAR_10 );
        if (VAR_10 == VAR_3)
        {
            FUNC_0( VAR_13 != ((void*)0), "id not set\n" );
            FUNC_0( VAR_17 == VAR_6 || VAR_17 == VAR_4, "got %d\n", VAR_17 );

            VAR_14 = VAR_16 = ((void*)0);
            VAR_15 = (const WCHAR *)0xdeadbeef;
            VAR_11 = FUNC_1( VAR_13, &VAR_14, &VAR_15, &VAR_16 );
            FUNC_0( VAR_11 == VAR_5, "got %u\n", VAR_11 );
            FUNC_0( VAR_14 != ((void*)0), "username not set\n" );
            FUNC_0( VAR_15 == ((void*)0), "domain not set\n" );
            FUNC_0( VAR_16 != ((void*)0), "creds not set\n" );
            FUNC_2( VAR_13 );
        }
    }
}
