
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;

int FUNC_2( const char *VAR_4 )
{
    if( !VAR_4 || *VAR_4 == 0 )
    {
        VAR_3 = VAR_1;
        return -1;
    }
    else
    {
        wchar_t VAR_5[VAR_2];
     if( !FUNC_0( VAR_0, 0, VAR_4, -1, VAR_5, VAR_2 ) )
        {
            VAR_3 = VAR_1;
            return -1;
        }
        return FUNC_1( VAR_5 );
    }
}
