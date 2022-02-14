
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int lpszLocalFileName; } ;
typedef int LPWSTR ;
typedef TYPE_1__* LPINTERNET_CACHE_ENTRY_INFOW ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

UINT FUNC_9( LPCWSTR VAR_4, LPWSTR VAR_5 )
{
    LPINTERNET_CACHE_ENTRY_INFOW VAR_6;
    DWORD VAR_7 = 0;
    HRESULT VAR_8;





    FUNC_2( VAR_4, ((void*)0), &VAR_7 );
    if ( FUNC_1() != VAR_0 )
    {
        VAR_6 = FUNC_7( VAR_7 );
        if ( !FUNC_2( VAR_4, VAR_6, &VAR_7 ) )
        {
            UINT VAR_9 = FUNC_1();
            FUNC_8( VAR_6 );
            return VAR_9;
        }

        FUNC_6( VAR_5, VAR_6->lpszLocalFileName );
        FUNC_8( VAR_6 );
        return VAR_2;
    }

    VAR_8 = FUNC_3( ((void*)0), VAR_4, VAR_5, VAR_3, 0, ((void*)0) );
    if ( FUNC_0(VAR_8) )
    {
        FUNC_4("failed to download %s to cache file\n", FUNC_5(VAR_4));
        return VAR_1;
    }

    return VAR_2;
}
