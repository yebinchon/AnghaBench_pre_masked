
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunk {int dummy; } ;
typedef void const* LPVOID ;
typedef int IUnknownVtbl ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct thunk* FUNC_1 (int) ;
 struct thunk** VAR_4 ;

BOOL FUNC_2( IUnknownVtbl *VAR_5, DWORD VAR_6 )
{
    const void **VAR_7 = (const void **)(VAR_5 + 1);
    DWORD VAR_8, VAR_9;

    if (VAR_6 - 3 > VAR_0 * VAR_2)
    {
        FUNC_0( "%u methods not supported\n", VAR_6 );
        return VAR_1;
    }
    for (VAR_8 = 0; VAR_8 < (VAR_6 - 3 + VAR_0 - 1) / VAR_0; VAR_8++)
    {
        const struct thunk *VAR_10 = VAR_4[VAR_8];
        if (!VAR_10 && !(VAR_10 = FUNC_1( VAR_8 ))) return VAR_1;
        for (VAR_9 = 0; VAR_9 < VAR_0 && VAR_9 < VAR_6 - 3 - VAR_8 * VAR_0; VAR_9++, VAR_7++)
            if (*VAR_7 == (LPVOID)-1) *VAR_7 = &VAR_10[VAR_9];
    }
    return VAR_3;
}
