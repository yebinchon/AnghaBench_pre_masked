
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;
typedef int* LPCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int) ;

LPWSTR FUNC_6(BOOL VAR_1, LPCWSTR VAR_2)
{
    DWORD VAR_3 = VAR_0;
    DWORD VAR_4, VAR_5;
    LPWSTR VAR_6, VAR_7;

    if( !VAR_1 )
        VAR_3 = FUNC_2( VAR_2 )+2;
    if (!(VAR_6 = FUNC_3( VAR_3*sizeof(WCHAR) ))) return ((void*)0);
    VAR_7 = VAR_6;

    if( VAR_1 )
    {
         *VAR_7++ = 0x4840;
         VAR_3 --;
    }
    while( VAR_3 -- )
    {
        VAR_4 = *VAR_2++;
        if( !VAR_4 )
        {
            *VAR_7 = VAR_4;
            return VAR_6;
        }
        if( ( VAR_4 < 0x80 ) && ( FUNC_5(VAR_4) >= 0 ) )
        {
            VAR_4 = FUNC_5(VAR_4) + 0x4800;
            VAR_5 = *VAR_2;
            if( VAR_5 && (VAR_5<0x80) )
            {
                VAR_5 = FUNC_5(VAR_5);
                if( VAR_5 != -1 )
                {
                     VAR_5 += 0x3ffffc0;
                     VAR_4 += (VAR_5<<6);
                     VAR_2++;
                }
            }
        }
        *VAR_7++ = VAR_4;
    }
    FUNC_0("Failed to encode stream name (%s)\n",FUNC_1(VAR_2));
    FUNC_4( VAR_6 );
    return ((void*)0);
}
