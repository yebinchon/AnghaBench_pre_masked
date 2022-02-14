
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum join_op { ____Placeholder_join_op } join_op ;
typedef int ******** WCHAR ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int **********,int,int **********,int,int*) ;
 int FUNC_1 (int **********) ;
 int ************** FUNC_2 (int ******** const*,int,int*) ;

__attribute__((used)) static BYTE *FUNC_3( BYTE *VAR_3, DWORD VAR_4,
                                       BYTE *VAR_5, DWORD VAR_6, DWORD *VAR_7 )
{
    DWORD VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    const WCHAR *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
    enum join_op VAR_15 = VAR_2;
    WCHAR **VAR_16 = ((void*)0), **VAR_17 = ((void*)0);
    BYTE *VAR_18;

    if (VAR_6 / sizeof(WCHAR) - 1 > 1)
    {
        VAR_13 = (const WCHAR *)VAR_5;
        VAR_10 = VAR_6 / sizeof(WCHAR) - 1;

        if (!VAR_13[0] && VAR_13[VAR_10 - 1])
        {
            VAR_15 = VAR_0;
            VAR_10--;
            VAR_13++;
        }
        else if (VAR_13[0] && !VAR_13[VAR_10 - 1])
        {
            VAR_15 = VAR_1;
            VAR_10--;
        }
        else if (VAR_10 > 2 && !VAR_13[0] && !VAR_13[VAR_10 - 1])
        {
            VAR_15 = VAR_2;
            VAR_10 -= 2;
            VAR_13++;
        }
        VAR_17 = FUNC_2( VAR_13, VAR_10, &VAR_12 );
    }
    if (VAR_4 / sizeof(WCHAR) - 1 > 1)
    {
        VAR_14 = (const WCHAR *)VAR_3;
        VAR_9 = VAR_4 / sizeof(WCHAR) - 1;
        VAR_16 = FUNC_2( VAR_14, VAR_9, &VAR_11 );
    }
    VAR_18 = (BYTE *)FUNC_0( VAR_15, VAR_16, VAR_11, VAR_17, VAR_12, VAR_7 );
    for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) FUNC_1( &VAR_16[VAR_8] );
    for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++) FUNC_1( &VAR_17[VAR_8] );
    FUNC_1( VAR_16 );
    FUNC_1( VAR_17 );
    return VAR_18;
}
