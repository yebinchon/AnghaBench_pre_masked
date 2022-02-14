
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VARIANT ;
typedef int LONG ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BSTR ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int *,int) ;
 int FUNC_3 (int ,int const*,int ,int ,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int) ;
 int FUNC_12 (int ,int,int *,int *) ;
 scalar_t__ FUNC_13 (int *,int,int *) ;

__attribute__((used)) static HRESULT FUNC_14( HKEY VAR_6, const WCHAR *VAR_7, VARIANT *VAR_8, VARIANT *VAR_9 )
{
    HKEY VAR_10;
    HRESULT VAR_11 = VAR_4;
    WCHAR VAR_12[256];
    BSTR *VAR_13, *VAR_14;
    DWORD VAR_15 = 2, VAR_16 = FUNC_0( VAR_12 );
    LONG VAR_17, VAR_18 = 0;

    FUNC_6("%p, %s\n", VAR_6, FUNC_7(VAR_7));

    if (!(VAR_13 = FUNC_9( VAR_15 * sizeof(BSTR) ))) return VAR_2;
    if ((VAR_17 = FUNC_3( VAR_6, VAR_7, 0, VAR_3, &VAR_10 )))
    {
        FUNC_12( VAR_5, VAR_17, ((void*)0), VAR_9 );
        FUNC_10( VAR_13 );
        return VAR_4;
    }
    for (;;)
    {
        if (VAR_18 >= VAR_15)
        {
            VAR_15 *= 2;
            if (!(VAR_14 = FUNC_11( VAR_13, VAR_15 * sizeof(BSTR) )))
            {
                FUNC_1( VAR_10 );
                return VAR_2;
            }
            VAR_13 = VAR_14;
        }
        if ((VAR_17 = FUNC_2( VAR_10, VAR_18, VAR_12, VAR_16 )) == VAR_0)
        {
            if (VAR_18) VAR_17 = VAR_1;
            break;
        }
        if (VAR_17) break;
        if (!(VAR_13[VAR_18] = FUNC_4( VAR_12 )))
        {
            for (VAR_18--; VAR_18 >= 0; VAR_18--) FUNC_5( VAR_13[VAR_18] );
            VAR_11 = VAR_2;
            break;
        }
        VAR_18++;
    }
    if (VAR_11 == VAR_4 && !VAR_17)
    {
        VAR_11 = FUNC_13( VAR_13, VAR_18, VAR_8 );
        FUNC_8( VAR_13, VAR_18 );
    }
    FUNC_12( VAR_5, VAR_17, ((void*)0), VAR_9 );
    FUNC_1( VAR_10 );
    FUNC_10( VAR_13 );
    return VAR_11;
}
