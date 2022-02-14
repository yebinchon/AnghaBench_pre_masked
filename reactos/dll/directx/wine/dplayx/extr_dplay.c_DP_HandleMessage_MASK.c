
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


typedef int WORD ;
struct TYPE_17__ {TYPE_3__* dp2; } ;
struct TYPE_16__ {int dwFlags; } ;
struct TYPE_13__ {int wCommandId; int wVersion; int dwMagic; } ;
struct TYPE_15__ {int dpidNewPlayerId; TYPE_2__ envelope; } ;
struct TYPE_12__ {int dwSPHeaderSize; } ;
struct TYPE_14__ {int lpNameServerData; TYPE_1__ spData; } ;
typedef TYPE_4__* LPDPMSG_NEWPLAYERIDREPLY ;
typedef TYPE_5__* LPCDPMSG_REQUESTNEWPLAYERID ;
typedef TYPE_6__ IDirectPlayImpl ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int,void const*,int ) ;
 int FUNC_1 (TYPE_6__*,int,void const*,int ) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 () ;
 int VAR_3 ;
 void* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (void const*,int ,void const*,int ) ;
 int FUNC_9 (void const*,void**,int *,TYPE_6__*) ;
 int FUNC_10 (int ,void const*,int) ;
 int FUNC_11 (char*,...) ;

HRESULT FUNC_12( IDirectPlayImpl *VAR_4, const void *VAR_5,
        DWORD VAR_6, const void *VAR_7, WORD VAR_8, WORD VAR_9,
        void **VAR_10, DWORD *VAR_11 )
{
  FUNC_11( "(%p)->(%p,0x%08x,%p,%u,%u)\n",
         VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
         VAR_9 );

  switch( VAR_8 )
  {

    case 134:

      FUNC_9( VAR_5, VAR_10, VAR_11, VAR_4 );
      break;


    case 135:

      FUNC_8( VAR_7,
                                        VAR_4->dp2->spData.dwSPHeaderSize,
                                        VAR_5,
                                        VAR_4->dp2->lpNameServerData );
      break;

    case 128:
    {
      LPCDPMSG_REQUESTNEWPLAYERID VAR_12 = VAR_5;

      LPDPMSG_NEWPLAYERIDREPLY VAR_13;

      *VAR_11 = VAR_4->dp2->spData.dwSPHeaderSize + sizeof( *VAR_13 );

      *VAR_10 = FUNC_7( FUNC_6(), VAR_3, *VAR_11 );

      FUNC_5( "Ignoring dwFlags 0x%08x in request msg\n",
             VAR_12->dwFlags );


      VAR_13 = (LPDPMSG_NEWPLAYERIDREPLY)( (BYTE*)(*VAR_10) +
                                            VAR_4->dp2->spData.dwSPHeaderSize );

      VAR_13->envelope.dwMagic = VAR_0;
      VAR_13->envelope.wCommandId = 129;
      VAR_13->envelope.wVersion = VAR_1;

      VAR_13->dpidNewPlayerId = FUNC_3();

      FUNC_11( "Allocating new playerid 0x%08x from remote request\n",
             VAR_13->dpidNewPlayerId );
      break;
    }

    case 131:
    case 129:
      FUNC_1( VAR_4, VAR_8, VAR_5, VAR_6 );
      break;

    case 130:
      FUNC_11( "GOT THE SELF MESSAGE: %p -> 0x%08x\n", VAR_7, ((const DWORD *)VAR_7)[1] );
      FUNC_10( VAR_4->dp2->lpNameServerData, VAR_7, 20 );
      FUNC_1( VAR_4, VAR_8, VAR_5, VAR_6 );

    case 133:
      FUNC_11( "Sending message to self to get my addr\n" );
      FUNC_2( VAR_4, 1 );
      break;

    case 132:
      FUNC_0( VAR_4, VAR_8, VAR_5, VAR_6 );
      break;

    default:
      FUNC_5( "Unknown wCommandId %u. Ignoring message\n", VAR_8 );
      FUNC_4();
      break;
  }



  return VAR_2;
}
