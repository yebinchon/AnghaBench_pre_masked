
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSIRECORD ;
typedef int MSIPACKAGE ;
typedef int * LPWSTR ;
typedef scalar_t__ LPCWSTR ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__,int **) ;

__attribute__((used)) static LPWSTR FUNC_2( MSIPACKAGE *VAR_0, MSIRECORD *VAR_1, int VAR_2 )
{
    LPCWSTR VAR_3 = FUNC_0( VAR_1, VAR_2 );
    LPWSTR VAR_4 = ((void*)0);

    if (VAR_3)
        FUNC_1( VAR_0, VAR_3, &VAR_4 );
    return VAR_4;
}
