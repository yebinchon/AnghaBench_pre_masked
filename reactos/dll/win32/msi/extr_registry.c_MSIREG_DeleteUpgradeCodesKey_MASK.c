
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const WCHAR ;
typedef int UINT ;
typedef int REGSAM ;
typedef int LONG ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,int *) ;
 int VAR_5 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int const*) ;
 int VAR_6 ;

UINT FUNC_6( const WCHAR *VAR_7 )
{
    WCHAR VAR_8[VAR_5];
    REGSAM VAR_9 = VAR_4 | VAR_3;
    HKEY VAR_10;
    LONG VAR_11;

    if (!FUNC_5( VAR_7, VAR_8 )) return VAR_0;
    FUNC_3( "%s squashed %s\n", FUNC_4(VAR_7), FUNC_4(VAR_8) );

    if (FUNC_2( VAR_2, VAR_6, 0, VAR_9, &VAR_10 )) return VAR_1;
    VAR_11 = FUNC_1( VAR_10, VAR_8 );
    FUNC_0( VAR_10 );
    return VAR_11;
}
