
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IDPLobbySP_iface; int * dplay; } ;
typedef int REFIID ;
typedef int IDirectPlayImpl ;
typedef TYPE_1__ IDPLobbySPImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,void**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int ,void**) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;

HRESULT FUNC_6( REFIID VAR_2, void **VAR_3, IDirectPlayImpl *VAR_4 )
{
  IDPLobbySPImpl *VAR_5;
  HRESULT VAR_6;

  FUNC_4( "(%s, %p)\n", FUNC_5( VAR_2 ), VAR_3 );

  *VAR_3 = ((void*)0);
  VAR_5 = FUNC_1( FUNC_0(), 0, sizeof( *VAR_5 ) );
  if ( !VAR_5 )
    return VAR_0;

  VAR_5->IDPLobbySP_iface.lpVtbl = &VAR_1;
  VAR_5->ref = 1;
  VAR_5->dplay = VAR_4;

  VAR_6 = FUNC_2( &VAR_5->IDPLobbySP_iface, VAR_2, VAR_3 );
  FUNC_3( &VAR_5->IDPLobbySP_iface );

  return VAR_6;
}
