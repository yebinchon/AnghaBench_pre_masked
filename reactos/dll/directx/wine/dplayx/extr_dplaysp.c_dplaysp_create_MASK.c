
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IDirectPlaySP_iface; int * dplay; } ;
typedef int REFIID ;
typedef TYPE_1__ IDirectPlaySPImpl ;
typedef int IDirectPlayImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,void**) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int ,void**) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

HRESULT FUNC_6( REFIID VAR_3, void **VAR_4, IDirectPlayImpl *VAR_5 )
{
  IDirectPlaySPImpl *VAR_6;
  HRESULT VAR_7;

  FUNC_4( "(%s, %p)\n", FUNC_5( VAR_3 ), VAR_4 );

  *VAR_4 = ((void*)0);
  VAR_6 = FUNC_1( FUNC_0(), VAR_1, sizeof( *VAR_6 ) );
  if ( !VAR_6 )
    return VAR_0;

  VAR_6->IDirectPlaySP_iface.lpVtbl = &VAR_2;
  VAR_6->ref = 1;
  VAR_6->dplay = VAR_5;

  VAR_7 = FUNC_2( &VAR_6->IDirectPlaySP_iface, VAR_3, VAR_4 );
  FUNC_3( &VAR_6->IDirectPlaySP_iface );

  return VAR_7;
}
