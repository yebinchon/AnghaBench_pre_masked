
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* lpCallbackData ;
typedef int UINT ;
struct TYPE_3__ {char* szTrace2; char* szTrace1; int dwCounter1; } ;
typedef int LPVOID ;
typedef int IDirectPlay4 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int DPID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int *,int *,int ,int ,int*) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8( IDirectPlay4 *VAR_3, DPID *VAR_4, DWORD VAR_5,
        lpCallbackData VAR_6 )
{
    DPID VAR_7, VAR_8;
    UINT VAR_9;
    DWORD VAR_10 = 1024;
    LPVOID VAR_11 = FUNC_1( FUNC_0(), VAR_2, VAR_10 );
    HRESULT VAR_12;
    char VAR_13[5];

    VAR_6->szTrace2[0] = '\0';

    VAR_9 = 0;
    while ( VAR_1 == (VAR_12 = FUNC_3( VAR_3, &VAR_7, &VAR_8, 0,
                                                 VAR_11, &VAR_10 )) )
    {

        VAR_6->szTrace1[ 3*VAR_9 ] = FUNC_5( VAR_4, VAR_5, VAR_7 );
        VAR_6->szTrace1[ 3*VAR_9+1 ] = FUNC_5( VAR_4, VAR_5, VAR_8 );
        VAR_6->szTrace1[ 3*VAR_9+2 ] = ',';

        FUNC_6( VAR_13, "%d,", VAR_10 );
        FUNC_7( VAR_6->szTrace2, VAR_13 );

        VAR_10 = 1024;
        ++VAR_9;
    }

    FUNC_4( VAR_0, VAR_12 );

    VAR_6->szTrace1[ 3*VAR_9 ] = '\0';
    VAR_6->dwCounter1 = VAR_9;


    FUNC_2( FUNC_0(), 0, VAR_11 );
}
