
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;
 scalar_t__ FUNC_2 (int const*,int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int,int ,int,int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6( const WCHAR *VAR_4 )
{
    UINT VAR_5;
    MSIHANDLE VAR_6, VAR_7;

    VAR_5 = FUNC_2( VAR_4, VAR_1, &VAR_7 );
    FUNC_5( VAR_5 == VAR_0, "failed to open database %u\n", VAR_5 );

    VAR_5 = FUNC_1( VAR_7, ((void*)0), 7, &VAR_6 );
    FUNC_5( VAR_5 == VAR_0, "failed to open summaryinfo %u\n", VAR_5 );

    VAR_5 = FUNC_4( VAR_6, 2, VAR_3, 0, ((void*)0), "Installation Database" );
    FUNC_5( VAR_5 == VAR_0, "failed to set summary info %u\n", VAR_5 );

    VAR_5 = FUNC_4( VAR_6, 3, VAR_3, 0, ((void*)0), "Installation Database" );
    FUNC_5( VAR_5 == VAR_0, "failed to set summary info %u\n", VAR_5 );

    VAR_5 = FUNC_4( VAR_6, 4, VAR_3, 0, ((void*)0), "WineHQ" );
    FUNC_5( VAR_5 == VAR_0, "failed to set summary info %u\n", VAR_5 );

    VAR_5 = FUNC_4( VAR_6, 7, VAR_3, 0, ((void*)0), ";1033" );
    FUNC_5( VAR_5 == VAR_0, "failed to set summary info %u\n", VAR_5 );

    VAR_5 = FUNC_4( VAR_6, 9, VAR_3, 0, ((void*)0), "{E528DDD6-4801-4BEC-BBB6-C5EE0FD097E9}" );
    FUNC_5( VAR_5 == VAR_0, "failed to set summary info %u\n", VAR_5 );

    VAR_5 = FUNC_4( VAR_6, 14, VAR_2, 100, ((void*)0), ((void*)0) );
    FUNC_5( VAR_5 == VAR_0, "failed to set summary info %u\n", VAR_5 );

    VAR_5 = FUNC_4( VAR_6, 15, VAR_2, 0, ((void*)0), ((void*)0) );
    FUNC_5( VAR_5 == VAR_0, "failed to set summary info %u\n", VAR_5 );

    VAR_5 = FUNC_3( VAR_6 );
    FUNC_5( VAR_5 == VAR_0, "failed to persist suminfo %u\n", VAR_5 );

    VAR_5 = FUNC_0( VAR_6 );
    FUNC_5( VAR_5 == VAR_0, "failed to close suminfo %u\n", VAR_5 );

    VAR_5 = FUNC_0( VAR_7 );
    FUNC_5( VAR_5 == VAR_0, "failed to close database %u\n", VAR_5 );
}
