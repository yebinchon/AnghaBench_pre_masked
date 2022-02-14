
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cp ;
typedef int WCHAR ;
typedef int HKL ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static DWORD FUNC_3( void )
{
    DWORD VAR_3;
    int VAR_4;
    HKL VAR_5 = FUNC_0( 0 );

    VAR_4 = FUNC_1( FUNC_2(VAR_5), VAR_1 | VAR_2,
                          (WCHAR *)&VAR_3, sizeof(VAR_3) / sizeof(WCHAR) );
    if (!VAR_4) VAR_3 = VAR_0;
    return VAR_3;
}
