
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT_PTR ;
typedef int UINT ;
typedef int LPWSTR ;
typedef int LPCWSTR ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static LPWSTR FUNC_6( LPCWSTR VAR_0 )
{
    LPWSTR VAR_1;
    UINT VAR_2;

    if (FUNC_2(VAR_0))
        return (LPWSTR) (UINT_PTR) FUNC_3(VAR_0);
    VAR_2 = (FUNC_4( VAR_0 ) + 1) * sizeof (WCHAR);
    VAR_1 = FUNC_1( FUNC_0(), 0, VAR_2 );
    FUNC_5( VAR_1, VAR_0, VAR_2 );
    return VAR_1;
}
