
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef int * LPCWSTR ;
typedef int INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( LPCWSTR VAR_0, LPWSTR VAR_1 )
{
    INT VAR_2 = FUNC_2( VAR_0 );

    while (VAR_2 > 0 && !FUNC_0(VAR_0[VAR_2 - 1])) VAR_2--;
    FUNC_1( VAR_1, &VAR_0[VAR_2] );
}
