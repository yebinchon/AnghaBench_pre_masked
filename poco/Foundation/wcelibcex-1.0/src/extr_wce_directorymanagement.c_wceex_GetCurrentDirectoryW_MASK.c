
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPWSTR ;
typedef size_t DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,int ) ;
 size_t FUNC_3 (int ) ;

DWORD FUNC_4( DWORD VAR_2, LPWSTR VAR_3 )
{
    *VAR_3 = 0;
    if( FUNC_0() )
    {
        FUNC_1( VAR_1 );
        return 0;
    }
    else
    {
        size_t VAR_4 = FUNC_3( VAR_0 );
        if( VAR_4 >= (size_t)VAR_2 )
            return VAR_4 + 1;
        FUNC_2( VAR_3, VAR_0 );
        return VAR_4;
    }
}
