
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


typedef int WCHAR ;
struct TYPE_17__ {int dwAddressSize; int * lpAddress; TYPE_6__* lpPlayerName; TYPE_5__* lpSessionDesc; } ;
struct TYPE_14__ {void* lpszLongName; } ;
struct TYPE_13__ {void* lpszShortName; } ;
struct TYPE_16__ {TYPE_4__ u2; TYPE_3__ u1; } ;
struct TYPE_12__ {void* lpszPassword; } ;
struct TYPE_11__ {void* lpszSessionName; } ;
struct TYPE_15__ {TYPE_2__ u2; TYPE_1__ u1; } ;
typedef void* LPWSTR ;
typedef TYPE_5__* LPDPSESSIONDESC2 ;
typedef TYPE_6__* LPDPNAME ;
typedef TYPE_7__* LPDPLCONNECTION ;
typedef int DPSESSIONDESC2 ;
typedef int DPNAME ;
typedef TYPE_7__ DPLCONNECTION ;
typedef int BYTE ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3( LPDPLCONNECTION VAR_0, const DPLCONNECTION *VAR_1 )
{
  BYTE* VAR_2;

  *VAR_0 = *VAR_1;

  VAR_2 = ( (BYTE*)VAR_0) + sizeof( DPLCONNECTION );


  if( VAR_1->lpSessionDesc )
  {
    VAR_0->lpSessionDesc = (LPDPSESSIONDESC2)VAR_2;
    VAR_2 += sizeof( DPSESSIONDESC2 );
    *VAR_0->lpSessionDesc = *VAR_1->lpSessionDesc;


    if( VAR_1->lpSessionDesc->u1.lpszSessionName )
    {
      FUNC_1( (LPWSTR)VAR_2, VAR_1->lpSessionDesc->u1.lpszSessionName );
      VAR_0->lpSessionDesc->u1.lpszSessionName = (LPWSTR)VAR_2;
      VAR_2 += sizeof(WCHAR) *
        ( FUNC_2( VAR_0->lpSessionDesc->u1.lpszSessionName ) + 1 );
    }

    if( VAR_1->lpSessionDesc->u2.lpszPassword )
    {
      FUNC_1( (LPWSTR)VAR_2, VAR_1->lpSessionDesc->u2.lpszPassword );
      VAR_0->lpSessionDesc->u2.lpszPassword = (LPWSTR)VAR_2;
      VAR_2 += sizeof(WCHAR) *
        ( FUNC_2( VAR_0->lpSessionDesc->u2.lpszPassword ) + 1 );
    }
  }


  if( VAR_1->lpPlayerName )
  {
    VAR_0->lpPlayerName = (LPDPNAME)VAR_2;
    VAR_2 += sizeof( DPNAME );
    *VAR_0->lpPlayerName = *VAR_1->lpPlayerName;

    if( VAR_1->lpPlayerName->u1.lpszShortName )
    {
      FUNC_1( (LPWSTR)VAR_2, VAR_1->lpPlayerName->u1.lpszShortName );
      VAR_0->lpPlayerName->u1.lpszShortName = (LPWSTR)VAR_2;
      VAR_2 += sizeof(WCHAR) *
        ( FUNC_2( VAR_0->lpPlayerName->u1.lpszShortName ) + 1 );
    }

    if( VAR_1->lpPlayerName->u2.lpszLongName )
    {
      FUNC_1( (LPWSTR)VAR_2, VAR_1->lpPlayerName->u2.lpszLongName );
      VAR_0->lpPlayerName->u2.lpszLongName = (LPWSTR)VAR_2;
      VAR_2 += sizeof(WCHAR) *
        ( FUNC_2( VAR_0->lpPlayerName->u2.lpszLongName ) + 1 );
    }

  }


  if( VAR_1->lpAddress )
  {
    VAR_0->lpAddress = VAR_2;
    FUNC_0( VAR_2, VAR_1->lpAddress, VAR_1->dwAddressSize );

  }

}
