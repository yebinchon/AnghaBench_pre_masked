
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,char*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ,...) ;

__attribute__((used)) static void FUNC_3( HANDLE VAR_2 )
{
    char VAR_3[100];
    DWORD VAR_4;

    FUNC_1( VAR_3, "foobar" );
    if (!FUNC_0( VAR_2, VAR_0, VAR_3, sizeof(VAR_3), &VAR_4 ))
        FUNC_2( "could not get info for %p\n", VAR_2 );
    else
        FUNC_2( "obj %p name '%s'\n", VAR_2, VAR_3 );
    FUNC_1( VAR_3, "foobar" );
    if (!FUNC_0( VAR_2, VAR_1, VAR_3, sizeof(VAR_3), &VAR_4 ))
        FUNC_2( "could not get type for %p\n", VAR_2 );
    else
        FUNC_2( "obj %p type '%s'\n", VAR_2, VAR_3 );
}
