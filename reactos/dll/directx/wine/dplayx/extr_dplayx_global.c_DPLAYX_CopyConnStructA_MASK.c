
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int dwAddressSize; int * lpAddress; TYPE_6__* lpPlayerName; TYPE_5__* lpSessionDesc; } ;
struct TYPE_14__ {void* lpszLongNameA; scalar_t__ lpszLongName; } ;
struct TYPE_13__ {void* lpszShortNameA; } ;
struct TYPE_16__ {TYPE_4__ u2; TYPE_3__ u1; } ;
struct TYPE_12__ {void* lpszPasswordA; } ;
struct TYPE_11__ {void* lpszSessionNameA; } ;
struct TYPE_15__ {TYPE_2__ u2; TYPE_1__ u1; } ;
typedef void* LPSTR ;
typedef TYPE_5__* LPDPSESSIONDESC2 ;
typedef TYPE_6__* LPDPNAME ;
typedef TYPE_7__* LPDPLCONNECTION ;
typedef int DPSESSIONDESC2 ;
typedef int DPNAME ;
typedef TYPE_7__ DPLCONNECTION ;
typedef int BYTE ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3( LPDPLCONNECTION VAR_0, const DPLCONNECTION *VAR_1 )
{
  BYTE* VAR_2;

  *VAR_0 = *VAR_1;

  VAR_2 = ((BYTE*)VAR_0) + sizeof( DPLCONNECTION );


  if( VAR_1->lpSessionDesc )
  {
    VAR_0->lpSessionDesc = (LPDPSESSIONDESC2)VAR_2;
    VAR_2 += sizeof( DPSESSIONDESC2 );
    *VAR_0->lpSessionDesc = *VAR_1->lpSessionDesc;


    if( VAR_1->lpSessionDesc->u1.lpszSessionNameA )
    {
      FUNC_1( (LPSTR)VAR_2, VAR_1->lpSessionDesc->u1.lpszSessionNameA );
      VAR_0->lpSessionDesc->u1.lpszSessionNameA = (LPSTR)VAR_2;
      VAR_2 +=
        FUNC_2( VAR_0->lpSessionDesc->u1.lpszSessionNameA ) + 1;
    }

    if( VAR_1->lpSessionDesc->u2.lpszPasswordA )
    {
      FUNC_1( (LPSTR)VAR_2, VAR_1->lpSessionDesc->u2.lpszPasswordA );
      VAR_0->lpSessionDesc->u2.lpszPasswordA = (LPSTR)VAR_2;
      VAR_2 +=
        FUNC_2( VAR_0->lpSessionDesc->u2.lpszPasswordA ) + 1;
    }
  }


  if( VAR_1->lpPlayerName )
  {
    VAR_0->lpPlayerName = (LPDPNAME)VAR_2;
    VAR_2 += sizeof( DPNAME );
    *VAR_0->lpPlayerName = *VAR_1->lpPlayerName;

    if( VAR_1->lpPlayerName->u1.lpszShortNameA )
    {
      FUNC_1( (LPSTR)VAR_2, VAR_1->lpPlayerName->u1.lpszShortNameA );
      VAR_0->lpPlayerName->u1.lpszShortNameA = (LPSTR)VAR_2;
      VAR_2 +=
        FUNC_2( VAR_0->lpPlayerName->u1.lpszShortNameA ) + 1;
    }

    if( VAR_1->lpPlayerName->u2.lpszLongNameA )
    {
      FUNC_1( (LPSTR)VAR_2, VAR_1->lpPlayerName->u2.lpszLongNameA );
      VAR_0->lpPlayerName->u2.lpszLongNameA = (LPSTR)VAR_2;
      VAR_2 +=
        FUNC_2( (LPSTR)VAR_0->lpPlayerName->u2.lpszLongName ) + 1 ;
    }

  }


  if( VAR_1->lpAddress )
  {
    VAR_0->lpAddress = VAR_2;
    FUNC_0( VAR_2, VAR_1->lpAddress, VAR_1->dwAddressSize );

  }
}
