
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

LONG FUNC_3( HKEY VAR_1, LPCWSTR VAR_2, LPCWSTR VAR_3, LPCWSTR VAR_4 )
{
    HKEY VAR_5 = 0;
    LONG VAR_6;

    VAR_6 = FUNC_1( VAR_1, VAR_2, &VAR_5 );
    if (VAR_6 != VAR_0)
        return VAR_6;
    VAR_6 = FUNC_2( VAR_5, VAR_3, VAR_4 );
    FUNC_0( VAR_5 );
    return VAR_6;
}
