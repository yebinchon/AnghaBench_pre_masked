
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int LDAP ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int ,void*) ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( LDAP *VAR_5 )
{
    ULONG VAR_6, VAR_7;

    VAR_6 = FUNC_1( VAR_5, VAR_1, &VAR_7 );
    if (VAR_6 == VAR_3 || VAR_6 == VAR_4)
    {
        FUNC_4("test server can't be reached\n");
        return;
    }

    VAR_6 = FUNC_2( VAR_5, VAR_1, VAR_0 );
    FUNC_3( !VAR_6 || FUNC_0(VAR_6 == VAR_2) , "ldap_set_optionW failed 0x%08x\n", VAR_6 );

    VAR_6 = FUNC_2( VAR_5, VAR_1, (void *)&VAR_7 );
    FUNC_3( !VAR_6, "ldap_set_optionW failed 0x%08x\n", VAR_6 );
}
