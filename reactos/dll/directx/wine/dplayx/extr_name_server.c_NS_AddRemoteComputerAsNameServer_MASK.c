
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


typedef TYPE_3__* lpNSCacheData ;
typedef TYPE_4__* lpNSCache ;
struct TYPE_17__ {int guidInstance; } ;
struct TYPE_12__ {int * lpszSessionNameA; } ;
struct TYPE_13__ {TYPE_1__ u1; int guidInstance; } ;
struct TYPE_16__ {TYPE_2__ sd; } ;
struct TYPE_15__ {TYPE_3__* present; int first; } ;
struct TYPE_14__ {int dwTime; TYPE_2__* data; void* lpNSAddrHdr; } ;
typedef int LPVOID ;
typedef int LPCWSTR ;
typedef int LPCVOID ;
typedef TYPE_5__* LPCDPMSG_ENUMSESSIONSREPLY ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int ,TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 void* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (int ,int ,int ,int,int *,int,int *,int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_11 (int *) ;
 int VAR_4 ;
 int FUNC_12 () ;

void FUNC_13( LPCVOID VAR_5,
                                       DWORD VAR_6,
                                       LPCDPMSG_ENUMSESSIONSREPLY VAR_7,
                                       LPVOID VAR_8 )
{
  DWORD VAR_9;
  lpNSCache VAR_10 = (lpNSCache)VAR_8;
  lpNSCacheData VAR_11;

  FUNC_8( "%p, %p, %p\n", VAR_5, VAR_7, VAR_8 );


  FUNC_2( VAR_10->first, VAR_4, VAR_3->guidInstance, VAR_2,
                       VAR_7->sd.guidInstance, VAR_11 );

  if( VAR_11 != ((void*)0) )
  {
    FUNC_8( "Duplicate session entry for %s removed - updated version kept\n",
           FUNC_11( &VAR_11->data->guidInstance ) );
    FUNC_10( VAR_11 );
  }


  VAR_11 = FUNC_5( FUNC_4(), VAR_1, sizeof( *VAR_11 ) );

  if( VAR_11 == ((void*)0) )
  {
    FUNC_3( "no memory for NS node\n" );
    return;
  }

  VAR_11->lpNSAddrHdr = FUNC_5( FUNC_4(), VAR_1,
                                        VAR_6 );
  FUNC_0( VAR_11->lpNSAddrHdr, VAR_5, VAR_6 );

  VAR_11->data = FUNC_5( FUNC_4(), VAR_1, sizeof( *(VAR_11->data) ) );

  if( VAR_11->data == ((void*)0) )
  {
    FUNC_3( "no memory for SESSIONDESC2\n" );
    FUNC_6( FUNC_4(), 0, VAR_11 );
    return;
  }

  *VAR_11->data = VAR_7->sd;
  VAR_9 = FUNC_9( VAR_0, 0, (LPCWSTR)(VAR_7+1), -1, ((void*)0), 0, ((void*)0), ((void*)0) );
  if ((VAR_11->data->u1.lpszSessionNameA = FUNC_5( FUNC_4(), 0, VAR_9 )))
  {
      FUNC_9( VAR_0, 0, (LPCWSTR)(VAR_7+1), -1,
                           VAR_11->data->u1.lpszSessionNameA, VAR_9, ((void*)0), ((void*)0) );
  }

  VAR_11->dwTime = FUNC_12();

  FUNC_1(VAR_10->first, VAR_11, VAR_4 );

  VAR_10->present = VAR_11;




  FUNC_7( VAR_8 );
}
