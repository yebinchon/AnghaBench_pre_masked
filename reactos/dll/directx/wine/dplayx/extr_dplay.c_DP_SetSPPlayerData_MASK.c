
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* lpPlayerList ;
struct TYPE_5__ {TYPE_1__* lpPData; } ;
struct TYPE_4__ {void* lpSPPlayerData; } ;
typedef int IDirectPlayImpl ;
typedef int HRESULT ;
typedef int DPID ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 int VAR_1 ;

HRESULT FUNC_1( IDirectPlayImpl *VAR_2, DPID VAR_3, void *VAR_4 )
{
  lpPlayerList VAR_5 = FUNC_0( VAR_2, VAR_3 );

  if( VAR_5 == ((void*)0) )
  {
    return VAR_0;
  }

  VAR_5->lpPData->lpSPPlayerData = VAR_4;

  return VAR_1;
}
