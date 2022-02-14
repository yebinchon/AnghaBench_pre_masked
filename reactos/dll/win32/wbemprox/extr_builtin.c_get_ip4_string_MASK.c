
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int,int,int,int) ;

__attribute__((used)) static WCHAR *FUNC_2( DWORD VAR_0 )
{
    static const WCHAR VAR_1[] = {'%','u','.','%','u','.','%','u','.','%','u',0};
    WCHAR *VAR_2;

    if (!(VAR_2 = FUNC_0( sizeof("ddd.ddd.ddd.ddd") * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_1( VAR_2, VAR_1, (VAR_0 >> 24) & 0xff, (VAR_0 >> 16) & 0xff, (VAR_0 >> 8) & 0xff, VAR_0 & 0xff );
    return VAR_2;
}
