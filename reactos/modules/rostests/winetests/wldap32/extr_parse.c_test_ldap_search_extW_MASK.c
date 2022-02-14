
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ ULONG ;
typedef int LDAP ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,int ,char*,int *,int ,int *,int *,scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3( LDAP *VAR_3 )
{
    ULONG VAR_4, VAR_5, VAR_6;
    WCHAR VAR_7[] = {0}, VAR_8[] = {'o','u','=','*',0};

    VAR_6 = 20;
    VAR_4 = FUNC_0( VAR_3, VAR_7, VAR_0, VAR_8, ((void*)0), 0, ((void*)0), ((void*)0), VAR_6, 0, &VAR_5 );
    if (VAR_4 == VAR_1 || VAR_4 == VAR_2)
    {
        FUNC_2("test server can't be reached\n");
        return;
    }
    FUNC_1( !VAR_4, "ldap_search_extW failed 0x%08x\n", VAR_4 );

    VAR_6 = 0;
    VAR_4 = FUNC_0( VAR_3, VAR_7, VAR_0, VAR_8, ((void*)0), 0, ((void*)0), ((void*)0), VAR_6, 0, &VAR_5 );
    FUNC_1( !VAR_4, "ldap_search_extW failed 0x%08x\n", VAR_4 );
}
