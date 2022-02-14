
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_15__ {scalar_t__ dwAddressSize; TYPE_6__* lpPlayerName; TYPE_3__* lpSessionDesc; } ;
struct TYPE_13__ {scalar_t__ lpszLongName; } ;
struct TYPE_12__ {scalar_t__ lpszShortName; } ;
struct TYPE_14__ {TYPE_5__ u2; TYPE_4__ u1; } ;
struct TYPE_10__ {scalar_t__ lpszPassword; } ;
struct TYPE_9__ {scalar_t__ lpszSessionName; } ;
struct TYPE_11__ {TYPE_2__ u2; TYPE_1__ u1; } ;
typedef int DWORD ;
typedef int DPSESSIONDESC2 ;
typedef int DPNAME ;
typedef TYPE_7__ DPLCONNECTION ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static DWORD FUNC_2( const DPLCONNECTION *VAR_0 )
{
  DWORD VAR_1 = sizeof( DPLCONNECTION );


  if( VAR_0 == ((void*)0) )
  {
    FUNC_0( "lpConn is NULL\n" );
    return 0;
  }

  if( VAR_0->lpSessionDesc != ((void*)0) )
  {
    VAR_1 += sizeof( DPSESSIONDESC2 );

    if( VAR_0->lpSessionDesc->u1.lpszSessionName )
    {
      VAR_1 += sizeof( WCHAR ) *
        ( FUNC_1( VAR_0->lpSessionDesc->u1.lpszSessionName ) + 1 );
    }

    if( VAR_0->lpSessionDesc->u2.lpszPassword )
    {
      VAR_1 += sizeof( WCHAR ) *
        ( FUNC_1( VAR_0->lpSessionDesc->u2.lpszPassword ) + 1 );
    }
  }

  if( VAR_0->lpPlayerName != ((void*)0) )
  {
    VAR_1 += sizeof( DPNAME );

    if( VAR_0->lpPlayerName->u1.lpszShortName )
    {
      VAR_1 += sizeof( WCHAR ) *
        ( FUNC_1( VAR_0->lpPlayerName->u1.lpszShortName ) + 1 );
    }

    if( VAR_0->lpPlayerName->u2.lpszLongName )
    {
      VAR_1 += sizeof( WCHAR ) *
        ( FUNC_1( VAR_0->lpPlayerName->u2.lpszLongName ) + 1 );
    }

  }

  VAR_1 += VAR_0->dwAddressSize;

  return VAR_1;
}
