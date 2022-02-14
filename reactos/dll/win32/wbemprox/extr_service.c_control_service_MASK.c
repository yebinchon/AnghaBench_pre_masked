
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VARIANT ;
typedef int UINT ;
typedef int SERVICE_STATUS ;
typedef int * SC_HANDLE ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_7( const WCHAR *VAR_6, DWORD VAR_7, VARIANT *VAR_8 )
{
    SC_HANDLE VAR_9, VAR_10 = ((void*)0);
    SERVICE_STATUS VAR_11;
    UINT VAR_12 = 0;

    if (!(VAR_9 = FUNC_3( ((void*)0), ((void*)0), VAR_0 )))
    {
        VAR_12 = FUNC_5( FUNC_2() );
        goto done;
    }
    if (!(VAR_10 = FUNC_4( VAR_9, VAR_6, VAR_3|VAR_2|VAR_1 )))
    {
        VAR_12 = FUNC_5( FUNC_2() );
        goto done;
    }
    if (!FUNC_1( VAR_10, VAR_7, &VAR_11 )) VAR_12 = FUNC_5( FUNC_2() );
    FUNC_0( VAR_10 );

done:
    FUNC_6( VAR_5, VAR_12, ((void*)0), VAR_8 );
    if (VAR_9) FUNC_0( VAR_9 );
    return VAR_4;
}
