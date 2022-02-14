
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {TYPE_6__* dp2; } ;
struct TYPE_16__ {int lpISP; TYPE_4__* lpCB; void* dwSPVersion; } ;
struct TYPE_14__ {int lpISP; TYPE_2__* lpCB; void* dwSPVersion; } ;
struct TYPE_17__ {TYPE_5__ dplspData; TYPE_3__ spData; TYPE_1__* lpSessionDesc; int lpNameServerData; int repliesExpected; int sendMsgs; int receiveMsgs; void* bHostInterface; scalar_t__ dwEnumSessionLock; int hEnumSessionThread; void* bConnectionOpen; } ;
struct TYPE_15__ {int dwSize; } ;
struct TYPE_13__ {int dwSize; void* dwVersion; } ;
struct TYPE_12__ {int dwSize; } ;
typedef TYPE_7__* LPVOID ;
typedef TYPE_7__ IDirectPlayImpl ;
typedef void* BOOL ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 void* VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 void* FUNC_3 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 void* VAR_6 ;
 int FUNC_5 (int *,void**,TYPE_7__*) ;
 int FUNC_6 (int *,void**,TYPE_7__*) ;

__attribute__((used)) static BOOL FUNC_7( LPVOID VAR_7 )
{
  IDirectPlayImpl *VAR_8 = VAR_7;

  VAR_8->dp2 = FUNC_3( FUNC_2(), VAR_2, sizeof( *(VAR_8->dp2) ) );
  if ( VAR_8->dp2 == ((void*)0) )
  {
    return VAR_1;
  }

  VAR_8->dp2->bConnectionOpen = VAR_1;

  VAR_8->dp2->hEnumSessionThread = VAR_5;
  VAR_8->dp2->dwEnumSessionLock = 0;

  VAR_8->dp2->bHostInterface = VAR_1;

  FUNC_0(VAR_8->dp2->receiveMsgs);
  FUNC_0(VAR_8->dp2->sendMsgs);
  FUNC_0(VAR_8->dp2->repliesExpected);

  if( !FUNC_4( &VAR_8->dp2->lpNameServerData ) )
  {

    return VAR_1;
  }


  VAR_8->dp2->lpSessionDesc = FUNC_3( FUNC_2(),
                                        VAR_2,
                                        sizeof( *VAR_8->dp2->lpSessionDesc ) );
  if( VAR_8->dp2->lpSessionDesc == ((void*)0) )
  {

    return VAR_1;
  }
  VAR_8->dp2->lpSessionDesc->dwSize = sizeof( *VAR_8->dp2->lpSessionDesc );


  VAR_8->dp2->spData.dwSPVersion = VAR_0;

  VAR_8->dp2->spData.lpCB = FUNC_3( FUNC_2(), VAR_2,
                                      sizeof( *VAR_8->dp2->spData.lpCB ) );
  VAR_8->dp2->spData.lpCB->dwSize = sizeof( *VAR_8->dp2->spData.lpCB );
  VAR_8->dp2->spData.lpCB->dwVersion = VAR_0;


  if ( FUNC_1( FUNC_5( &VAR_4, (void**)&VAR_8->dp2->spData.lpISP, VAR_8 ) ) )
  {

    return VAR_1;
  }


  VAR_8->dp2->dplspData.dwSPVersion = VAR_0;
  VAR_8->dp2->dplspData.lpCB = FUNC_3( FUNC_2(), VAR_2,
                                         sizeof( *VAR_8->dp2->dplspData.lpCB ) );
  VAR_8->dp2->dplspData.lpCB->dwSize = sizeof( *VAR_8->dp2->dplspData.lpCB );

  if( FUNC_1( FUNC_6( &VAR_3, (void**)&VAR_8->dp2->dplspData.lpISP, VAR_8 ) )
    )
  {

    return VAR_1;
  }

  return VAR_6;
}
