
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VARIANT ;
typedef size_t LONG ;
typedef scalar_t__ HRESULT ;
typedef int * HKEY ;
typedef int DWORD ;
typedef int BSTR ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,size_t,int*,int*,int *,int*,int *,int *) ;
 size_t FUNC_2 (int *,int const*,int ,int ,int **) ;
 size_t FUNC_3 (int *,int *,int *,int *,int *,int *,int *,int*,int*,int *,int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int *,int ) ;
 int VAR_5 ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int*,size_t) ;
 int* FUNC_9 (int) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int ,size_t,int *,int *) ;
 scalar_t__ FUNC_12 (int*,size_t,int *) ;
 scalar_t__ FUNC_13 (int*,size_t,int *) ;

__attribute__((used)) static HRESULT FUNC_14( HKEY VAR_6, const WCHAR *VAR_7, VARIANT *VAR_8, VARIANT *VAR_9, VARIANT *VAR_10 )
{
    HKEY VAR_11 = ((void*)0);
    HRESULT VAR_12 = VAR_4;
    BSTR *VAR_13 = ((void*)0);
    DWORD VAR_14, VAR_15, VAR_16, *VAR_17 = ((void*)0);
    LONG VAR_18, VAR_19 = 0;
    WCHAR *VAR_20 = ((void*)0);

    FUNC_6("%p, %s\n", VAR_6, FUNC_7(VAR_7));

    if ((VAR_18 = FUNC_2( VAR_6, VAR_7, 0, VAR_3, &VAR_11 ))) goto done;
    if ((VAR_18 = FUNC_3( VAR_11, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_14, &VAR_15, ((void*)0), ((void*)0), ((void*)0) )))
        goto done;

    VAR_12 = VAR_2;
    if (!(VAR_20 = FUNC_9( (VAR_15 + 1) * sizeof(WCHAR) ))) goto done;
    if (!(VAR_13 = FUNC_9( VAR_14 * sizeof(BSTR) ))) goto done;
    if (!(VAR_17 = FUNC_9( VAR_14 * sizeof(DWORD) ))) goto done;

    VAR_12 = VAR_4;
    for (;;)
    {
        VAR_16 = VAR_15 + 1;
        VAR_18 = FUNC_1( VAR_11, VAR_19, VAR_20, &VAR_16, ((void*)0), &VAR_17[VAR_19], ((void*)0), ((void*)0) );
        if (VAR_18 == VAR_0)
        {
            if (VAR_19) VAR_18 = VAR_1;
            break;
        }
        if (VAR_18) break;
        if (!(VAR_13[VAR_19] = FUNC_4( VAR_20 )))
        {
            for (VAR_19--; VAR_19 >= 0; VAR_19--) FUNC_5( VAR_13[VAR_19] );
            VAR_12 = VAR_2;
            break;
        }
        VAR_19++;
    }
    if (VAR_12 == VAR_4 && !VAR_18)
    {
        VAR_12 = FUNC_12( VAR_13, VAR_19, VAR_8 );
        FUNC_8( VAR_13, VAR_19 );
        if (VAR_12 == VAR_4) VAR_12 = FUNC_13( VAR_17, VAR_19, VAR_9 );
    }

done:
    FUNC_11( VAR_5, VAR_18, ((void*)0), VAR_10 );
    FUNC_0( VAR_11 );
    FUNC_10( VAR_13 );
    FUNC_10( VAR_17 );
    FUNC_10( VAR_20 );
    return VAR_12;
}
