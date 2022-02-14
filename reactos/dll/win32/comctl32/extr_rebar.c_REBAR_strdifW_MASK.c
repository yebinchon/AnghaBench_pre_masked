
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCWSTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_1( LPCWSTR VAR_0, LPCWSTR VAR_1 )
{
    return ( (VAR_0 && !VAR_1) || (VAR_1 && !VAR_0) || (VAR_0 && VAR_1 && FUNC_0(VAR_0, VAR_1) ) );
}
