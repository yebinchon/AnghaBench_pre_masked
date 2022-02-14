
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szValue ;
typedef int szNumberA ;
typedef int szNumber ;
typedef int szGrpNameA ;
typedef int szGrpName ;
typedef char WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int dwFlags; int (* procW ) (int ,char*,char*,int const,int ) ;int (* procA ) (int ,char*,char*,int const,int ) ;int lParam; } ;
typedef int LGRPID ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ ENUMLANGUAGEGROUP_CALLBACKS ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;


 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,char*,int,char*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,char*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,char*,int,char*,int,int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int *,int) ;
 int FUNC_10 (int ,char*,char*,int const,int ) ;
 int FUNC_11 (int ,char*,char*,int const,int ) ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_12(ENUMLANGUAGEGROUP_CALLBACKS *VAR_6)
{
    WCHAR VAR_7[10], VAR_8[4];
    HANDLE VAR_9;
    BOOL VAR_10 = VAR_4;
    ULONG VAR_11 = 0;

    if (!VAR_6)
    {
        FUNC_5(VAR_2);
        return VAR_3;
    }

    switch (VAR_6->dwFlags)
    {
    case 0:

        VAR_6->dwFlags = 129;

    case 129:
    case 128:
        break;
    default:
        FUNC_5(VAR_1);
        return VAR_3;
    }

    VAR_9 = FUNC_3( 0, VAR_5 );

    if (!VAR_9)
        FUNC_0("NLS registry key not found. Please apply the default registry file 'wine.inf'\n");

    while (VAR_10)
    {
        if (FUNC_2( VAR_9, VAR_11, VAR_7, sizeof(VAR_7),
                              VAR_8, sizeof(VAR_8) ))
        {
            BOOL VAR_12 = VAR_8[0] == '1';
            LGRPID VAR_13 = FUNC_9( VAR_7, ((void*)0), 16 );

            FUNC_6("grpid %s (%sinstalled)\n", FUNC_8(VAR_7),
                   VAR_12 ? "" : "not ");

            if (VAR_6->dwFlags == 128 || VAR_12)
            {
                WCHAR VAR_14[48];

                if (!FUNC_1( VAR_13, VAR_14, sizeof(VAR_14) / sizeof(WCHAR) ))
                    VAR_14[0] = '\0';

                if (VAR_6->procW)
                    VAR_10 = VAR_6->procW( VAR_13, VAR_7, VAR_14, VAR_6->dwFlags,
                                                VAR_6->lParam );
                else
                {
                    char VAR_15[sizeof(VAR_7)/sizeof(WCHAR)];
                    char VAR_16[48];





                    FUNC_7(VAR_0, 0, VAR_7, -1, VAR_15, sizeof(VAR_15), 0, 0);
                    FUNC_7(VAR_0, 0, VAR_14, -1, VAR_16, sizeof(VAR_16), 0, 0);

                    VAR_10 = VAR_6->procA( VAR_13, VAR_15, VAR_16, VAR_6->dwFlags,
                                                VAR_6->lParam );
                }
            }

            VAR_11++;
        }
        else
            VAR_10 = VAR_3;

        if (!VAR_10)
            break;
    }

    if (VAR_9)
        FUNC_4( VAR_9 );

    return VAR_4;
}
