
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int dwMessageSize; int bReturnStatus; scalar_t__ lpMessage; int lpISP; } ;
struct TYPE_8__ {int wVersion; int wCommandId; int dwMagic; } ;
struct TYPE_11__ {int dwFlags; int guidApplication; scalar_t__ dwPasswordSize; TYPE_1__ envelope; } ;
struct TYPE_10__ {int dwSPHeaderSize; TYPE_2__* lpCB; int lpISP; } ;
struct TYPE_9__ {int (* EnumSessions ) (TYPE_5__*) ;} ;
typedef TYPE_3__ SPINITDATA ;
typedef TYPE_4__* LPDPMSG_ENUMSESSIONSREQUEST ;
typedef int * LPCGUID ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_5__ DPSP_ENUMSESSIONSDATA ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;

HRESULT FUNC_6( LPCGUID VAR_5,
                                        DWORD VAR_6,
                                        const SPINITDATA *VAR_7 )

{
  DPSP_ENUMSESSIONSDATA VAR_8;
  LPDPMSG_ENUMSESSIONSREQUEST VAR_9;

  FUNC_3( "enumerating for guid %s\n", FUNC_4( VAR_5 ) );


  FUNC_0( ": not all data fields are correct\n" );

  VAR_8.dwMessageSize = VAR_7->dwSPHeaderSize + sizeof( *VAR_9 );
  VAR_8.lpMessage = FUNC_2( FUNC_1(), VAR_4,
                              VAR_8.dwMessageSize );
  VAR_8.lpISP = VAR_7->lpISP;
  VAR_8.bReturnStatus = (VAR_6 & VAR_0) != 0;


  VAR_9 = (LPDPMSG_ENUMSESSIONSREQUEST)(((BYTE*)VAR_8.lpMessage)+VAR_7->dwSPHeaderSize);


  VAR_9->envelope.dwMagic = VAR_2;
  VAR_9->envelope.wCommandId = VAR_1;
  VAR_9->envelope.wVersion = VAR_3;

  VAR_9->dwPasswordSize = 0;
  VAR_9->dwFlags = VAR_6;

  VAR_9->guidApplication = *VAR_5;

  return (VAR_7->lpCB->EnumSessions)( &VAR_8 );
}
