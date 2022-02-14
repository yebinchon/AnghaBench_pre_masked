
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int REGSAM ;
typedef int MSICOMPONENT ;
typedef scalar_t__ LONG ;
typedef int * HKEY ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,int ,int *,int ,int ,int *,int **,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,int ,int ,int **) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__* FUNC_7 (scalar_t__*,char) ;
 scalar_t__* FUNC_8 (scalar_t__ const*) ;

__attribute__((used)) static HKEY FUNC_9( const MSICOMPONENT *VAR_0, HKEY VAR_1, const WCHAR *VAR_2, BOOL VAR_3, REGSAM VAR_4 )
{
    WCHAR *VAR_5, *VAR_6, *VAR_7;
    HKEY VAR_8, VAR_9 = ((void*)0);
    LONG VAR_10;

    VAR_4 |= FUNC_5( VAR_0 );

    if (!(VAR_5 = FUNC_8( VAR_2 ))) return ((void*)0);
    VAR_6 = VAR_5;
    if ((VAR_7 = FUNC_7( VAR_6, '\\' ))) *VAR_7 = 0;
    if (VAR_3)
        VAR_10 = FUNC_1( VAR_1, VAR_5, 0, ((void*)0), 0, VAR_4, ((void*)0), &VAR_8, ((void*)0) );
    else
        VAR_10 = FUNC_2( VAR_1, VAR_5, 0, VAR_4, &VAR_8 );
    if (VAR_10)
    {
        FUNC_3("failed to open key %s (%d)\n", FUNC_4(VAR_5), VAR_10);
        FUNC_6( VAR_5 );
        return ((void*)0);
    }
    if (VAR_7 && VAR_7[1])
    {
        VAR_9 = FUNC_9( VAR_0, VAR_8, VAR_7 + 1, VAR_3, VAR_4 );
        FUNC_0( VAR_8 );
    }
    else VAR_9 = VAR_8;
    FUNC_6( VAR_5 );
    return VAR_9;
}
