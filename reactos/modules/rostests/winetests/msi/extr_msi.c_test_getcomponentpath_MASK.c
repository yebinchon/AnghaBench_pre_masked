
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ INSTALLSTATE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char*,char*,char*,int*) ;

__attribute__((used)) static void FUNC_2(void)
{
    INSTALLSTATE VAR_2;
    char VAR_3[0x100];
    DWORD VAR_4;

    if(!&FUNC_1)
        return;

    VAR_2 = FUNC_1( ((void*)0), ((void*)0), ((void*)0), ((void*)0) );
    FUNC_0( VAR_2 == VAR_0, "wrong return value\n");

    VAR_2 = FUNC_1( "bogus", "bogus", ((void*)0), ((void*)0) );
    FUNC_0( VAR_2 == VAR_0, "wrong return value\n");

    VAR_2 = FUNC_1( "bogus", "{00000000-0000-0000-000000000000}", ((void*)0), ((void*)0) );
    FUNC_0( VAR_2 == VAR_0, "wrong return value\n");

    VAR_4 = sizeof VAR_3;
    VAR_3[0]=0;
    VAR_2 = FUNC_1( "bogus", "{00000000-0000-0000-000000000000}", VAR_3, &VAR_4 );
    FUNC_0( VAR_2 == VAR_0, "wrong return value\n");

    VAR_2 = FUNC_1( "{00000000-78E1-11D2-B60F-006097C998E7}",
        "{00000000-0000-0000-0000-000000000000}", VAR_3, &VAR_4 );
    FUNC_0( VAR_2 == VAR_1, "wrong return value\n");

    VAR_2 = FUNC_1( "{00000409-78E1-11D2-B60F-006097C998E7}",
        "{00000000-0000-0000-0000-00000000}", VAR_3, &VAR_4 );
    FUNC_0( VAR_2 == VAR_0, "wrong return value\n");

    VAR_2 = FUNC_1( "{00000409-78E1-11D2-B60F-006097C998E7}",
        "{029E403D-A86A-1D11-5B5B0006799C897E}", VAR_3, &VAR_4 );
    FUNC_0( VAR_2 == VAR_0, "wrong return value\n");

    VAR_2 = FUNC_1( "{00000000-78E1-11D2-B60F-006097C9987e}",
                            "{00000000-A68A-11d1-5B5B-0006799C897E}", VAR_3, &VAR_4 );
    FUNC_0( VAR_2 == VAR_1, "wrong return value\n");
}
