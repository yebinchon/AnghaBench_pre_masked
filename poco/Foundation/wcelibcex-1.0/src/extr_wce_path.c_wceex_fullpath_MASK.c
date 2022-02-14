
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char const*,int,int *,int) ;
 int FUNC_2 (int ,int ,int *,int,char*,size_t,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (size_t) ;
 int * FUNC_5 (int *,int *,size_t) ;

char* FUNC_6( char *VAR_4, const char *VAR_5, size_t VAR_6 )
{
    wchar_t VAR_7[VAR_2*2], *VAR_8, *VAR_9;
 if( !FUNC_1( VAR_0, 0, VAR_5, -1, VAR_7, VAR_2*2 ) )
    {
        VAR_3 = VAR_1;
        *VAR_4 = 0;
        return ((void*)0);
    }
    if( (VAR_8 = (wchar_t*)FUNC_4( VAR_6 * sizeof(wchar_t) )) == ((void*)0) )
    {
        VAR_3 = VAR_1;
        *VAR_4 = 0;
        return ((void*)0);
    }
    VAR_9 = FUNC_5( VAR_8, VAR_7, VAR_6 );
    if( VAR_9 && !FUNC_2( VAR_0, 0, VAR_8, -1, VAR_4,
                                      VAR_6, ((void*)0), ((void*)0) ) )
    {
        VAR_3 = FUNC_0();
        VAR_9 = ((void*)0);
    }
    FUNC_3( VAR_8 );
    if( !VAR_9 )
    {
        *VAR_4 = 0;
        return ((void*)0);
    }
    return VAR_4;
}
