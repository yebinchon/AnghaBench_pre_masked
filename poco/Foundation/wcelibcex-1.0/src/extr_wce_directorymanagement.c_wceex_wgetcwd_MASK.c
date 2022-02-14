
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int *) ;

wchar_t* FUNC_2( wchar_t *VAR_3, int VAR_4 )
{
    if( !VAR_3 && (VAR_3 = (wchar_t*)FUNC_0(VAR_4 * sizeof(wchar_t))) == ((void*)0) )
    {
        VAR_2 = VAR_0;
        return ((void*)0);
    }
    else
    {
        DWORD VAR_5 = FUNC_1( VAR_4, VAR_3 );
        if( !VAR_5 )
            return ((void*)0);
        if( VAR_5 >= (DWORD)VAR_4 )
        {
            VAR_2 = VAR_1;
            return ((void*)0);
        }
        return VAR_3;
    }
}
