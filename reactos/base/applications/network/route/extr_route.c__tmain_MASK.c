
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int,int **) ;
 int FUNC_5 (int,int **) ;

int FUNC_6( int VAR_0, TCHAR **VAR_1 )
{
    if( VAR_0 < 2 )
        return FUNC_1();
    else if ( !FUNC_3( VAR_1[1], FUNC_2("print") ) )
        return FUNC_0();
    else if( !FUNC_3( VAR_1[1], FUNC_2("add") ) )
        return FUNC_4( VAR_0-2, VAR_1+2 );
    else if( !FUNC_3( VAR_1[1], FUNC_2("delete") ) )
        return FUNC_5( VAR_0-2, VAR_1+2 );
    else
        return FUNC_1();
}
