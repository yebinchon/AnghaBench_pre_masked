
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char const*,int *,int ,int *,int *,int *,int *,int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int ) ;

__attribute__((used)) static WCHAR *FUNC_3( const WCHAR *VAR_0 )
{
    static const WCHAR VAR_1[] = {'%','0','8','X',0};
    DWORD VAR_2 = 0;
    WCHAR VAR_3[9];

    FUNC_0( VAR_0, ((void*)0), 0, &VAR_2, ((void*)0), ((void*)0), ((void*)0), 0 );
    FUNC_2( VAR_3, VAR_1, VAR_2 );
    return FUNC_1( VAR_3 );
}
