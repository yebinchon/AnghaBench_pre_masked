
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int MSICOMPONENT ;
typedef int LONG ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int ,int const*) ;
 int FUNC_6 (int const*,int ,int const*,int ,int) ;

__attribute__((used)) static void FUNC_7( const MSICOMPONENT *VAR_3, HKEY VAR_4, const WCHAR *VAR_5, const WCHAR *VAR_6 )
{
    LONG VAR_7;
    HKEY VAR_8;
    DWORD VAR_9, VAR_10;

    if ((VAR_8 = FUNC_6( VAR_3, VAR_4, VAR_5, VAR_0, VAR_2 | VAR_1 )))
    {
        if ((VAR_7 = FUNC_1( VAR_8, VAR_6 )))
            FUNC_3("failed to delete value %s (%d)\n", FUNC_4(VAR_6), VAR_7);

        VAR_7 = FUNC_2( VAR_8, ((void*)0), ((void*)0), ((void*)0), &VAR_9, ((void*)0), ((void*)0), &VAR_10,
                                ((void*)0), ((void*)0), ((void*)0), ((void*)0) );
        FUNC_0( VAR_8 );
        if (!VAR_7 && !VAR_9 && !VAR_10)
        {
            FUNC_3("removing empty key %s\n", FUNC_4(VAR_5));
            FUNC_5( VAR_3, VAR_4, VAR_5 );
        }
    }
}
