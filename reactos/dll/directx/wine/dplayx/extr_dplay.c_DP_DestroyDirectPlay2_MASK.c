
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int lpISP; TYPE_1__* lpCB; } ;
struct TYPE_11__ {TYPE_8__* lpCB; } ;
struct TYPE_15__ {scalar_t__ hEnumSessionThread; scalar_t__ hServiceProvider; scalar_t__ hDPLobbyProvider; TYPE_3__ spData; struct TYPE_15__* lpSessionDesc; TYPE_2__ dplspData; int lpNameServerData; } ;
struct TYPE_14__ {int lpISP; } ;
struct TYPE_13__ {TYPE_8__* dp2; } ;
struct TYPE_10__ {int (* Shutdown ) () ;int (* ShutdownEx ) (TYPE_6__*) ;} ;
typedef TYPE_4__* LPVOID ;
typedef TYPE_4__ IDirectPlayImpl ;
typedef TYPE_6__ DPSP_SHUTDOWNDATA ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_8__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 () ;

__attribute__((used)) static BOOL FUNC_10( LPVOID VAR_2 )
{
  IDirectPlayImpl *VAR_3 = VAR_2;

  if( VAR_3->dp2->hEnumSessionThread != VAR_0 )
  {
    FUNC_7( VAR_3->dp2->hEnumSessionThread, 0 );
    FUNC_0( VAR_3->dp2->hEnumSessionThread );
  }


  if( VAR_3->dp2->spData.lpCB->ShutdownEx )
  {
    DPSP_SHUTDOWNDATA VAR_4;

    FUNC_6( "Calling SP ShutdownEx\n" );

    VAR_4.lpISP = VAR_3->dp2->spData.lpISP;

    (*VAR_3->dp2->spData.lpCB->ShutdownEx)( &VAR_4 );
  }
  else if (VAR_3->dp2->spData.lpCB->Shutdown )
  {
    FUNC_6( "Calling obsolete SP Shutdown\n" );
    (*VAR_3->dp2->spData.lpCB->Shutdown)();
  }


  if( VAR_3->dp2->hServiceProvider != 0 )
  {
    FUNC_1( VAR_3->dp2->hServiceProvider );
  }


  if( VAR_3->dp2->hDPLobbyProvider != 0 )
  {
    FUNC_1( VAR_3->dp2->hDPLobbyProvider );
  }



  FUNC_5( VAR_3->dp2->lpNameServerData );

  FUNC_3( FUNC_2(), 0, VAR_3->dp2->dplspData.lpCB);
  FUNC_3( FUNC_2(), 0, VAR_3->dp2->lpSessionDesc );

  FUNC_4( VAR_3->dp2->spData.lpISP );


  FUNC_3( FUNC_2(), 0, VAR_3->dp2 );

  return VAR_1;
}
