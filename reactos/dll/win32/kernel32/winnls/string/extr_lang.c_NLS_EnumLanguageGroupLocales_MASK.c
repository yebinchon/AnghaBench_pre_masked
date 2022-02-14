
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szValue ;
typedef int szNumberA ;
typedef int szNumber ;
typedef char WCHAR ;
typedef int ULONG ;
struct TYPE_3__ {scalar_t__ lgrpid; int lParam; scalar_t__ (* procA ) (scalar_t__,void*,char*,int ) ;scalar_t__ (* procW ) (scalar_t__,void*,char*,int ) ;scalar_t__ dwFlags; } ;
typedef scalar_t__ LGRPID ;
typedef void* LCID ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ ENUMLANGUAGEGROUPLOCALE_CALLBACKS ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,int,char*,int,char*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,char const*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,scalar_t__,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,char*,int,char*,int,int ,int ) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (char*,int *,int) ;
 scalar_t__ FUNC_9 (scalar_t__,void*,char*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,void*,char*,int ) ;
 char const* VAR_6 ;

__attribute__((used)) static BOOL FUNC_11(ENUMLANGUAGEGROUPLOCALE_CALLBACKS *VAR_7)
{
    static const WCHAR VAR_8[] = {
      'A','l','t','e','r','n','a','t','e',' ','S','o','r','t','s','\0'
    };
    WCHAR VAR_9[10], VAR_10[4];
    HANDLE VAR_11;
    BOOL VAR_12 = VAR_5, VAR_13 = VAR_3;
    LGRPID VAR_14;
    ULONG VAR_15 = 1;

    if (!VAR_7 || !VAR_7->lgrpid || VAR_7->lgrpid > VAR_4)
    {
        FUNC_3(VAR_2);
        return VAR_3;
    }

    if (VAR_7->dwFlags)
    {
        FUNC_3(VAR_1);
        return VAR_3;
    }

    VAR_11 = FUNC_1( 0, VAR_6 );

    if (!VAR_11)
        FUNC_5("NLS registry key not found. Please apply the default registry file 'wine.inf'\n");

    while (VAR_12)
    {
        if (FUNC_0( VAR_11, VAR_15, VAR_9, sizeof(VAR_9),
                              VAR_10, sizeof(VAR_10) ))
        {
            VAR_14 = FUNC_8( VAR_10, ((void*)0), 16 );

            FUNC_4("lcid %s, grpid %d (%smatched)\n", FUNC_7(VAR_9),
                   VAR_14, VAR_14 == VAR_7->lgrpid ? "" : "not ");

            if (VAR_14 == VAR_7->lgrpid)
            {
                LCID VAR_16;

                VAR_16 = FUNC_8( VAR_9, ((void*)0), 16 );






                if (VAR_7->procW)
                    VAR_12 = VAR_7->procW( VAR_14, VAR_16, VAR_9, VAR_7->lParam );
                else
                {
                    char VAR_17[sizeof(VAR_9)/sizeof(WCHAR)];

                    FUNC_6(VAR_0, 0, VAR_9, -1, VAR_17, sizeof(VAR_17), 0, 0);

                    VAR_12 = VAR_7->procA( VAR_14, VAR_16, VAR_17, VAR_7->lParam );
                }
            }

            VAR_15++;
        }
        else
        {

            if (!VAR_13)
            {

                VAR_11 = FUNC_1( VAR_11, VAR_8 );
                VAR_13 = VAR_5;
                VAR_15 = 0;
            }
            else
                VAR_12 = VAR_3;
        }

        if (!VAR_12)
            break;
    }

    if (VAR_11)
        FUNC_2( VAR_11 );

    return VAR_5;
}
