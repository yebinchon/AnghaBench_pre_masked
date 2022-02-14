
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline LPWSTR FUNC_4( LPCWSTR VAR_0 )
{
    LPWSTR VAR_1;

    if (!VAR_0) return ((void*)0);
    VAR_1 = FUNC_1(FUNC_0(), 0, (FUNC_3( VAR_0 ) + 1) * sizeof(WCHAR) );
    if (VAR_1) FUNC_2( VAR_1, VAR_0 );
    return VAR_1;
}
