
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int si ;
typedef char WCHAR ;
struct TYPE_7__ {int hThread; int hProcess; } ;
struct TYPE_6__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef char* LPWSTR ;
typedef int LONG ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*,int *,int *,scalar_t__,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,int) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (void**) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_14( const WCHAR *VAR_3 )
{
    static const WCHAR VAR_4[] = {'\\','w','i','n','e','m','e','n','u','b','u','i','l','d','e','r','.','e','x','e',0};
    LONG VAR_5;
    LPWSTR VAR_6;
    STARTUPINFOW VAR_7;
    PROCESS_INFORMATION VAR_8;
    BOOL VAR_9;
    WCHAR VAR_10[VAR_2];
    void *VAR_11;

    FUNC_3( VAR_10, VAR_2 - FUNC_0( VAR_4 ));
    FUNC_10( VAR_10, VAR_4 );

    VAR_5 = (FUNC_12( VAR_10 ) + FUNC_12( VAR_3 ) + 1) * sizeof(WCHAR);
    VAR_6 = FUNC_8( VAR_5 );
    if( !VAR_6 )
        return VAR_1;

    FUNC_11( VAR_6, VAR_10 );
    FUNC_10( VAR_6, VAR_3 );

    FUNC_4("starting %s\n",FUNC_7(VAR_6));

    FUNC_13(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.cb = sizeof(VAR_7);

    FUNC_5( &VAR_11 );
    VAR_9 = FUNC_2( VAR_10, VAR_6, ((void*)0), ((void*)0), VAR_1, VAR_0, ((void*)0), ((void*)0), &VAR_7, &VAR_8 );
    FUNC_6( VAR_11 );

    FUNC_9( VAR_6 );

    if (VAR_9)
    {
        FUNC_1( VAR_8.hProcess );
        FUNC_1( VAR_8.hThread );
    }

    return VAR_9;
}
