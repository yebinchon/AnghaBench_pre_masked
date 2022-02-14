
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;


 int FUNC_0 (char const*,int,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static WCHAR *FUNC_4( const WCHAR *VAR_0, const char *VAR_1, UINT VAR_2 )
{
    WCHAR *VAR_3;
    UINT VAR_4, VAR_5 = FUNC_3( VAR_0 );


    VAR_4 = VAR_5 + 1 + ((VAR_2 + 2) * 4) / 3;
    if (!(VAR_3 = FUNC_1( (VAR_4 + 1) * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_2( VAR_3, VAR_0, VAR_5 * sizeof(WCHAR) );
    VAR_3[VAR_5] = ' ';
    FUNC_0( VAR_1, VAR_2, VAR_3 + VAR_5 + 1 );
    return VAR_3;
}
