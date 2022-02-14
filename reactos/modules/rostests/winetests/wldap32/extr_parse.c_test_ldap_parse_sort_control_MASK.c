
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct l_timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef unsigned int ULONG ;
struct TYPE_3__ {char* sk_attrtype; int sk_reverseorder; int * sk_matchruleoid; } ;
typedef TYPE_1__ LDAPSortKeyA ;
typedef int LDAPMessage ;
typedef int LDAPControlA ;
typedef int LDAP ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 unsigned int FUNC_4 (int *,TYPE_1__**,int ,int **) ;
 unsigned int FUNC_5 (int *,int *,unsigned int*,int *,int *,int *,int ***,int) ;
 unsigned int FUNC_6 (int *,int **,unsigned int*,int *) ;
 unsigned int FUNC_7 (int *,char*,int ,char*,int *,int ,int **,int *,struct l_timeval*,int,int **) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11( LDAP *VAR_6 )
{
    ULONG VAR_7, VAR_8;
    LDAPSortKeyA *VAR_9[2], VAR_10;
    LDAPControlA *VAR_11, *VAR_12[2], **VAR_13;
    LDAPMessage *VAR_14 = ((void*)0);
    struct l_timeval VAR_15;

    VAR_10.sk_attrtype = (char *)"ou";
    VAR_10.sk_matchruleoid = ((void*)0);
    VAR_10.sk_reverseorder = VAR_0;

    VAR_9[0] = &VAR_10;
    VAR_9[1] = ((void*)0);
    VAR_7 = FUNC_4( VAR_6, VAR_9, 0, &VAR_11 );
    FUNC_8( !VAR_7, "ldap_create_sort_controlA failed 0x%x\n", VAR_7 );

    VAR_12[0] = VAR_11;
    VAR_12[1] = ((void*)0);
    VAR_15.tv_sec = 20;
    VAR_15.tv_usec = 0;
    VAR_7 = FUNC_7( VAR_6, (char *)"", VAR_3, (char *)"(ou=*)", ((void*)0), 0, VAR_12, ((void*)0), &VAR_15, 10, &VAR_14 );
    if (VAR_7 == VAR_4 || VAR_7 == VAR_5)
    {
        FUNC_9("test server can't be reached\n");
        FUNC_2( VAR_11 );
        return;
    }
    FUNC_8( !VAR_7, "ldap_search_ext_sA failed 0x%x\n", VAR_7 );
    FUNC_8( VAR_14 != ((void*)0), "expected res != NULL\n" );

    if (FUNC_1(FUNC_0("wldap32.dll"), "ber_init"))
    {
        VAR_7 = FUNC_5( ((void*)0), VAR_14, &VAR_8, ((void*)0), ((void*)0), ((void*)0), &VAR_13, 1 );
        FUNC_8( VAR_7 == VAR_2, "ldap_parse_resultA failed 0x%x\n", VAR_7 );
    }
    else
        FUNC_10("Test would crash on older wldap32 versions\n");

    VAR_8 = ~0u;
    VAR_7 = FUNC_5( VAR_6, VAR_14, &VAR_8, ((void*)0), ((void*)0), ((void*)0), &VAR_13, 1 );
    FUNC_8( !VAR_7, "ldap_parse_resultA failed 0x%x\n", VAR_7 );
    FUNC_8( !VAR_8, "got 0x%x expected 0\n", VAR_8 );

    VAR_7 = FUNC_6( ((void*)0), ((void*)0), ((void*)0), ((void*)0) );
    FUNC_8( VAR_7 == VAR_2, "ldap_parse_sort_controlA failed 0x%d\n", VAR_7 );

    VAR_7 = FUNC_6( VAR_6, ((void*)0), ((void*)0), ((void*)0) );
    FUNC_8( VAR_7 == VAR_1, "ldap_parse_sort_controlA failed 0x%x\n", VAR_7 );

    VAR_7 = FUNC_6( VAR_6, ((void*)0), &VAR_8, ((void*)0) );
    FUNC_8( VAR_7 == VAR_1, "ldap_parse_sort_controlA failed 0x%x\n", VAR_7 );

    VAR_7 = FUNC_6( VAR_6, VAR_13, &VAR_8, ((void*)0) );
    FUNC_8( VAR_7 == VAR_1, "ldap_parse_sort_controlA failed 0x%x\n", VAR_7 );

    FUNC_2( VAR_11 );
    FUNC_3( VAR_13 );
}
