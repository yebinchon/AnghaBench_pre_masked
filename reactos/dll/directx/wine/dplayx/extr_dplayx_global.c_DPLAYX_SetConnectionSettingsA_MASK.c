
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int dwSize; TYPE_1__* lpSessionDesc; } ;
struct TYPE_9__ {int lpConn; } ;
struct TYPE_8__ {int dwSize; } ;
typedef TYPE_2__* LPDPLAYX_LOBBYDATA ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int DPSESSIONDESC2 ;
typedef TYPE_3__ DPLCONNECTION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_3__ const*) ;
 int FUNC_2 (scalar_t__,TYPE_2__**) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__ const*) ;
 int VAR_2 ;
 int FUNC_7 (char*,...) ;
 int VAR_3 ;

HRESULT FUNC_8
( DWORD VAR_4,
  DWORD VAR_5,
  const DPLCONNECTION *VAR_6 )
{
  LPDPLAYX_LOBBYDATA VAR_7;


  if( VAR_4 || !VAR_6 )
  {
    FUNC_7("invalid parameters.\n");
    return VAR_0;
  }


  if( VAR_6->dwSize != sizeof(DPLCONNECTION) )
  {
    FUNC_7(": old/new DPLCONNECTION type? Size=%08x\n", VAR_6->dwSize );

    return VAR_0;
  }

  FUNC_0();

  if ( ! FUNC_2( VAR_5, &VAR_7 ) )
  {
    FUNC_5();

    return VAR_1;
  }

  if( (!VAR_6->lpSessionDesc ) ||
       ( VAR_6->lpSessionDesc->dwSize != sizeof( DPSESSIONDESC2 ) )
    )
  {
    FUNC_5();

    FUNC_7("DPSESSIONDESC passed in? Size=%u\n",
        VAR_6->lpSessionDesc?VAR_6->lpSessionDesc->dwSize:0 );

    return VAR_0;
  }


  FUNC_4( VAR_7->lpConn );

  VAR_7->lpConn = FUNC_3( VAR_3,
                                            FUNC_6( VAR_6 ) );

  FUNC_1( VAR_7->lpConn, VAR_6 );


  FUNC_5();



  return VAR_2;
}
