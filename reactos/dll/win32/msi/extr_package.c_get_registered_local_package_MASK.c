
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIINSTALLCONTEXT ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int const*,int ,int *,int *,int ) ;
 scalar_t__ FUNC_1 (int const*,int *,int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*,int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int const*,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static UINT FUNC_9( const WCHAR *VAR_6, const WCHAR *VAR_7, WCHAR *VAR_8 )
{
    MSIINSTALLCONTEXT VAR_9;
    HKEY VAR_10, VAR_11;
    WCHAR *VAR_12 = ((void*)0), VAR_13[VAR_3];
    UINT VAR_14;

    VAR_14 = FUNC_4( VAR_6, &VAR_9 );
    if (VAR_14 != VAR_1)
        return VAR_14;

    VAR_14 = FUNC_1( VAR_6, ((void*)0), VAR_9, &VAR_10, VAR_2 );
    if (VAR_14 != VAR_1)
        return VAR_14;

    VAR_14 = FUNC_0( VAR_6, VAR_9, ((void*)0), &VAR_11, VAR_2 );
    if (VAR_14 != VAR_1)
    {
        FUNC_2( VAR_10 );
        return VAR_14;
    }
    VAR_14 = VAR_0;
    VAR_12 = FUNC_5( VAR_10, VAR_5 );
    if (!VAR_12)
        goto done;

    FUNC_8( VAR_12, VAR_13 );
    if (!FUNC_6( VAR_7, VAR_13 ))
    {
        WCHAR *VAR_15 = FUNC_5( VAR_11, VAR_4 );
        if (!VAR_15)
            goto done;

        FUNC_7( VAR_8, VAR_15 );
        FUNC_3( VAR_15 );
        VAR_14 = VAR_1;
    }
done:
    FUNC_3( VAR_12 );
    FUNC_2( VAR_11 );
    FUNC_2( VAR_10 );
    return VAR_14;
}
