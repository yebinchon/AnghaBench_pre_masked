
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 (int *,int*) ;
 int VAR_0 ;
 int * FUNC_1 (int) ;

__attribute__((used)) static WCHAR *FUNC_2(void)
{
    WCHAR *VAR_1;
    DWORD VAR_2 = VAR_0 + 1;

    if (!(VAR_1 = FUNC_1( VAR_2 * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_0( VAR_1, &VAR_2 );
    return VAR_1;
}
