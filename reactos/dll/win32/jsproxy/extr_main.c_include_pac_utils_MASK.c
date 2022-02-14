
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPCWSTR ;
typedef int HRSRC ;
typedef int HMODULE ;
typedef int DWORD ;
typedef int * BSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,char const*,int ,int *,int) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static BSTR FUNC_8( const WCHAR *VAR_1 )
{
    static const WCHAR VAR_2[] = {'p','a','c','.','j','s',0};
    HMODULE VAR_3 = FUNC_1( "jsproxy.dll" );
    HRSRC VAR_4;
    DWORD VAR_5;
    const char *VAR_6;
    BSTR VAR_7;
    int VAR_8;

    if (!(VAR_4 = FUNC_0( VAR_3, VAR_2, (LPCWSTR)40 ))) return ((void*)0);
    VAR_5 = FUNC_4( VAR_3, VAR_4 );
    VAR_6 = FUNC_2( VAR_3, VAR_4 );

    VAR_8 = FUNC_3( VAR_0, 0, VAR_6, VAR_5, ((void*)0), 0 );
    if (!(VAR_7 = FUNC_5( ((void*)0), VAR_8 + FUNC_7( VAR_1 ) + 1 ))) return ((void*)0);
    FUNC_3( VAR_0, 0, VAR_6, VAR_5, VAR_7, VAR_8 );
    FUNC_6( VAR_7 + VAR_8, VAR_1 );
    return VAR_7;
}
