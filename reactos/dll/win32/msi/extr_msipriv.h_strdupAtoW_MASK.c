
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int *,int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static inline LPWSTR FUNC_2( LPCSTR VAR_1 )
{
    LPWSTR VAR_2 = ((void*)0);
    DWORD VAR_3;

    if (!VAR_1) return VAR_2;
    VAR_3 = FUNC_0( VAR_0, 0, VAR_1, -1, ((void*)0), 0 );
    VAR_2 = FUNC_1( VAR_3 * sizeof(WCHAR) );
    if (VAR_2)
        FUNC_0( VAR_0, 0, VAR_1, -1, VAR_2, VAR_3 );
    return VAR_2;
}
