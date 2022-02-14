
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const WCHAR ;
typedef int UINT ;
typedef int MSIPACKAGE ;
typedef int IAssemblyName ;
typedef int IAssemblyEnum ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int*,int const*) ;
 int FUNC_2 (int *) ;
 int const* FUNC_3 (int) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int **,int *,int *,int ,int *) ;
 scalar_t__ FUNC_6 (int **,int const*,int ,int *) ;

IAssemblyEnum *FUNC_7( MSIPACKAGE *VAR_3, const WCHAR *VAR_4 )
{
    HRESULT VAR_5;
    IAssemblyName *VAR_6;
    IAssemblyEnum *VAR_7;
    WCHAR *VAR_8;
    UINT VAR_9 = 0;

    if (!&FUNC_6 || !&FUNC_5) return ((void*)0);

    VAR_5 = FUNC_6( &VAR_6, VAR_4, VAR_1, ((void*)0) );
    if (FUNC_0( VAR_5 )) return ((void*)0);

    VAR_5 = FUNC_1( VAR_6, &VAR_9, ((void*)0) );
    if (VAR_5 != VAR_2 || !(VAR_8 = FUNC_3( VAR_9 * sizeof(WCHAR) )))
    {
        FUNC_2( VAR_6 );
        return ((void*)0);
    }

    VAR_5 = FUNC_1( VAR_6, &VAR_9, VAR_8 );
    FUNC_2( VAR_6 );
    if (FUNC_0( VAR_5 ))
    {
        FUNC_4( VAR_8 );
        return ((void*)0);
    }

    VAR_5 = FUNC_6( &VAR_6, VAR_8, 0, ((void*)0) );
    FUNC_4( VAR_8 );
    if (FUNC_0( VAR_5 )) return ((void*)0);

    VAR_5 = FUNC_5( &VAR_7, ((void*)0), VAR_6, VAR_0, ((void*)0) );
    FUNC_2( VAR_6 );
    if (FUNC_0( VAR_5 )) return ((void*)0);

    return VAR_7;
}
