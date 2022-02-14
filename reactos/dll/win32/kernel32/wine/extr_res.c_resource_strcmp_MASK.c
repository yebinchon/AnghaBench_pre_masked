
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCWSTR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2( LPCWSTR VAR_0, LPCWSTR VAR_1 )
{
    if ( VAR_0 == VAR_1 )
        return 0;
    if (!FUNC_0( VAR_0 ) && !FUNC_0( VAR_1 ) )
        return FUNC_1( VAR_0, VAR_1 );

    if (!FUNC_0( VAR_0 ) && FUNC_0( VAR_1 ))
        return -1;
    if (!FUNC_0( VAR_1 ) && FUNC_0( VAR_0 ))
        return 1;
    return ( VAR_0 < VAR_1 ) ? -1 : 1;
}
