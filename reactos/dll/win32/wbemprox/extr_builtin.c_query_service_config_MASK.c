
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SC_HANDLE ;
typedef int QUERY_SERVICE_CONFIGW ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int const*,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int *) ;
 int VAR_1 ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static QUERY_SERVICE_CONFIGW *FUNC_6( SC_HANDLE VAR_2, const WCHAR *VAR_3 )
{
    QUERY_SERVICE_CONFIGW *VAR_4 = ((void*)0);
    SC_HANDLE VAR_5;
    DWORD VAR_6;

    if (!(VAR_5 = FUNC_2( VAR_2, VAR_3, VAR_1 ))) return ((void*)0);
    FUNC_3( VAR_5, ((void*)0), 0, &VAR_6 );
    if (FUNC_1() != VAR_0) goto done;
    if (!(VAR_4 = FUNC_4( VAR_6 ))) goto done;
    if (FUNC_3( VAR_5, VAR_4, VAR_6, &VAR_6 )) goto done;
    FUNC_5( VAR_4 );
    VAR_4 = ((void*)0);

done:
    FUNC_0( VAR_5 );
    return VAR_4;
}
