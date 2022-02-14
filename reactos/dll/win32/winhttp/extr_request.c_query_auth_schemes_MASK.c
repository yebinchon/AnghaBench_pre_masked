
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int request_t ;
typedef int WCHAR ;
typedef scalar_t__* LPDWORD ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__,int *,int *,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_5( request_t *VAR_3, DWORD VAR_4, LPDWORD VAR_5, LPDWORD VAR_6 )
{
    DWORD VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
    BOOL VAR_10 = VAR_1;

    for (;;)
    {
        WCHAR *VAR_11;
        DWORD VAR_12, VAR_13;

        VAR_12 = 0;
        FUNC_4( VAR_3, VAR_4, ((void*)0), ((void*)0), &VAR_12, &VAR_7 );
        if (FUNC_1() != VAR_0) break;

        VAR_7--;
        if (!(VAR_11 = FUNC_2( VAR_12 ))) return VAR_1;
        if (!FUNC_4( VAR_3, VAR_4, ((void*)0), VAR_11, &VAR_12, &VAR_7 ))
        {
            FUNC_3( VAR_11 );
            return VAR_1;
        }
        VAR_13 = FUNC_0( VAR_11 );
        FUNC_3( VAR_11 );
        if (!VAR_13) continue;

        if (!VAR_9) VAR_9 = VAR_13;
        VAR_8 |= VAR_13;

        VAR_10 = VAR_2;
    }

    if (VAR_10)
    {
        *VAR_5 = VAR_8;
        *VAR_6 = VAR_9;
    }
    return VAR_10;
}
