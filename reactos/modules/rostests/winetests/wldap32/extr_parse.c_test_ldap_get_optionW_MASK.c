
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int LDAP ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,scalar_t__*) ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2( LDAP *VAR_2 )
{
    ULONG VAR_3, VAR_4;

    VAR_3 = FUNC_0( VAR_2, VAR_0, &VAR_4 );
    FUNC_1( !VAR_3, "ldap_get_optionW failed 0x%08x\n", VAR_3 );
    FUNC_1( VAR_4 == VAR_1, "got %u\n", VAR_4 );
}
