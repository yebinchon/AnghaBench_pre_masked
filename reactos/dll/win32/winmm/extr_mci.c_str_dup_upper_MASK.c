
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef int LPCWSTR ;
typedef int INT ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline LPWSTR FUNC_5( LPCWSTR VAR_0 )
{
    INT VAR_1 = (FUNC_4(VAR_0) + 1) * sizeof(WCHAR);
    LPWSTR VAR_2 = FUNC_2( FUNC_1(), 0, VAR_1 );
    if (VAR_2)
    {
        FUNC_3( VAR_2, VAR_0, VAR_1 );
        FUNC_0( VAR_2 );
    }
    return VAR_2;
}
