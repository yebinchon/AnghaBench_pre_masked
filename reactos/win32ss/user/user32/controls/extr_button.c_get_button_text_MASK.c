
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static inline WCHAR *FUNC_3( HWND VAR_0 )
{
    INT VAR_1 = 512;
    WCHAR *VAR_2 = FUNC_1( FUNC_0(), 0, (VAR_1 + 1) * sizeof(WCHAR) );
    if (VAR_2) FUNC_2( VAR_0, VAR_2, VAR_1 + 1 );
    return VAR_2;
}
