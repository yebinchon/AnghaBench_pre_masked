
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int bAnsi; void* idPlayer; TYPE_4__* This; } ;
struct TYPE_16__ {int lpISP; scalar_t__ dwFlags; void* idPlayer; } ;
struct TYPE_15__ {TYPE_3__* dp2; int IDirectPlay4_iface; } ;
struct TYPE_13__ {TYPE_1__* lpCB; int lpISP; } ;
struct TYPE_14__ {scalar_t__ connectionInitialized; TYPE_2__ spData; } ;
struct TYPE_12__ {int (* DeletePlayer ) (TYPE_5__*) ;} ;
typedef TYPE_4__ IDirectPlayImpl ;
typedef int HRESULT ;
typedef TYPE_5__ DPSP_DELETEPLAYERDATA ;
typedef void* DPID ;
typedef TYPE_6__ DPFAGContext ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,void*) ;
 int * FUNC_1 (TYPE_4__*,void*) ;
 int VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int *,int ,TYPE_6__*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static HRESULT FUNC_5( IDirectPlayImpl *VAR_6, void *VAR_7, DPID VAR_8,
        BOOL VAR_9 )
{
  DPFAGContext VAR_10;

  FUNC_2( "(%p)->(%p,0x%08x,%u): semi stub\n",
         VAR_6, VAR_7, VAR_8, VAR_9 );

  if( VAR_6->dp2->connectionInitialized == VAR_4 )
  {
    return VAR_2;
  }

  if( FUNC_1( VAR_6, VAR_8 ) == ((void*)0) )
  {
    return VAR_1;
  }



  VAR_10.This = VAR_6;
  VAR_10.idPlayer = VAR_8;
  VAR_10.bAnsi = VAR_9;



  FUNC_3( &VAR_6->IDirectPlay4_iface, ((void*)0), VAR_5, &VAR_10,
          VAR_0 );


  FUNC_0( VAR_6, VAR_8 );


  if( VAR_6->dp2->spData.lpCB->DeletePlayer )
  {
    DPSP_DELETEPLAYERDATA VAR_11;

    FUNC_2( "data.dwFlags is incorrect\n" );

    VAR_11.idPlayer = VAR_8;
    VAR_11.dwFlags = 0;
    VAR_11.lpISP = VAR_6->dp2->spData.lpISP;

    (*VAR_6->dp2->spData.lpCB->DeletePlayer)( &VAR_11 );
  }

  FUNC_2( "Send a DELETEPLAYERORGROUP msg\n" );

  return VAR_3;
}
