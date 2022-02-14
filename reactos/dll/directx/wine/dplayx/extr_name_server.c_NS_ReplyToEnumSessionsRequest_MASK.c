
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {int lpszSessionNameA; } ;
struct TYPE_15__ {TYPE_3__ u1; int dwSize; } ;
struct TYPE_14__ {TYPE_4__* dp2; } ;
struct TYPE_10__ {int wVersion; int wCommandId; int dwMagic; } ;
struct TYPE_13__ {int dwUnknown; int sd; TYPE_2__ envelope; } ;
struct TYPE_9__ {int dwSPHeaderSize; } ;
struct TYPE_12__ {TYPE_8__* lpSessionDesc; TYPE_1__ spData; } ;
typedef int * LPWSTR ;
typedef TYPE_5__* LPDPMSG_ENUMSESSIONSREPLY ;
typedef TYPE_6__ IDirectPlayImpl ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_8__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_4 ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int *,int) ;

void FUNC_5( const void *VAR_5, void **VAR_6, DWORD *VAR_7,
        IDirectPlayImpl *VAR_8 )
{
  LPDPMSG_ENUMSESSIONSREPLY VAR_9;
  DWORD VAR_10;
  DWORD VAR_11;



  FUNC_1( ": few fixed + need to check request for response, might need UNICODE input ability.\n" );

  VAR_11 = FUNC_4( VAR_0, 0,
                                       VAR_8->dp2->lpSessionDesc->u1.lpszSessionNameA,
                                       -1, ((void*)0), 0 );
  VAR_10 = VAR_11 * sizeof( WCHAR );

  *VAR_7 = VAR_8->dp2->spData.dwSPHeaderSize +
                     sizeof( *VAR_9 ) + VAR_10;
  *VAR_6 = FUNC_3( FUNC_2(), VAR_4,
                              *VAR_7 );

  VAR_9 = (LPDPMSG_ENUMSESSIONSREPLY)( (BYTE*)*VAR_6 +
                                             VAR_8->dp2->spData.dwSPHeaderSize);

  VAR_9->envelope.dwMagic = VAR_2;
  VAR_9->envelope.wCommandId = VAR_1;
  VAR_9->envelope.wVersion = VAR_3;

  FUNC_0( &VAR_9->sd, VAR_8->dp2->lpSessionDesc,
              VAR_8->dp2->lpSessionDesc->dwSize );
  VAR_9->dwUnknown = 0x0000005c;
  FUNC_4( VAR_0, 0, VAR_8->dp2->lpSessionDesc->u1.lpszSessionNameA, -1,
                       (LPWSTR)(VAR_9+1), VAR_11 );
}
