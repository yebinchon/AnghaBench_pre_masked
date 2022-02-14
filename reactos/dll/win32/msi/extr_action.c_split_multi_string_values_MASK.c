
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int **** WCHAR ;
typedef int DWORD ;


 int ******** FUNC_0 (int) ;
 int FUNC_1 (int ******) ;
 int ******* FUNC_2 (int **** const*) ;
 scalar_t__ FUNC_3 (int **** const*) ;

__attribute__((used)) static WCHAR **FUNC_4( const WCHAR *VAR_0, DWORD VAR_1, DWORD *VAR_2 )
{
    const WCHAR *VAR_3 = VAR_0;
    WCHAR **VAR_4;
    int VAR_5 = 0;

    *VAR_2 = 0;
    if (!VAR_0) return ((void*)0);
    while ((VAR_3 - VAR_0) < VAR_1)
    {
        VAR_3 += FUNC_3( VAR_3 ) + 1;
        (*VAR_2)++;
    }
    if (!(VAR_4 = FUNC_0( *VAR_2 * sizeof(WCHAR *) ))) return ((void*)0);
    VAR_3 = VAR_0;
    while ((VAR_3 - VAR_0) < VAR_1)
    {
        if (!(VAR_4[VAR_5] = FUNC_2( VAR_3 )))
        {
            for (; VAR_5 >= 0; VAR_5--) FUNC_1( &VAR_4[VAR_5] );
            FUNC_1( VAR_4 );
            return ((void*)0);
        }
        VAR_3 += FUNC_3( VAR_3 ) + 1;
        VAR_5++;
    }
    return VAR_4;
}
