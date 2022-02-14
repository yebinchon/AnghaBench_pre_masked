
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int,char*,int,int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;

char* FUNC_4( char *VAR_4, int VAR_5 )
{
    if( !VAR_4 && (VAR_4 = (char*)FUNC_3(VAR_5)) == ((void*)0) )
    {
        VAR_3 = VAR_2;
        return ((void*)0);
    }
    if( FUNC_1() )
        return ((void*)0);
 if( !FUNC_2( VAR_0, 0, VAR_1, -1, VAR_4, VAR_5, ((void*)0), ((void*)0) ) )
    {
        VAR_3 = FUNC_0();
        return ((void*)0);
    }
    return VAR_4;
}
