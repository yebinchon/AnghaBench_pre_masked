
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 scalar_t__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,scalar_t__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_2 (scalar_t__*,char) ;

__attribute__((used)) static int FUNC_3()
{
    if( VAR_0[0] )
        return 0;
    if( !FUNC_1( ((void*)0), VAR_0, VAR_1 ) )
        return VAR_2 = FUNC_0();
    else
    {
        wchar_t* VAR_3 = FUNC_2( VAR_0, '\\' );
        if( !VAR_3 )
            VAR_3 = FUNC_2( VAR_0, '/' );
        if( VAR_3 )
        {
            if( VAR_3 == VAR_0 )
                VAR_3++;
            *VAR_3 = 0;
        }
        return 0;
    }
}
