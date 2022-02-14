
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*,int*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static WCHAR *FUNC_3(void)
{
    WCHAR *VAR_0;
    DWORD VAR_1, VAR_2;
    DWORD VAR_3;

    VAR_1 = 0;
    FUNC_0( ((void*)0), &VAR_1 );
    VAR_2 = 0;
    FUNC_1( ((void*)0), &VAR_2 );
    VAR_3 = VAR_1 + VAR_2;
    if (!(VAR_0 = FUNC_2( VAR_3 * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_0( VAR_0, &VAR_1 );
    VAR_0[VAR_1] = '\\';
    FUNC_1( VAR_0 + VAR_1 + 1, &VAR_2 );
    return VAR_0;
}
