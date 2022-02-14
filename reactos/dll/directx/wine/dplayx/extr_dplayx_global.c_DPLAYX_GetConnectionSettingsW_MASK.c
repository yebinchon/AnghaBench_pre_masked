
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lpConn; } ;
typedef int * LPVOID ;
typedef scalar_t__* LPDWORD ;
typedef TYPE_1__* LPDPLAYX_LOBBYDATA ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__,TYPE_1__**) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,scalar_t__,char*) ;
 int VAR_4 ;

HRESULT FUNC_8
( DWORD VAR_5,
  LPVOID VAR_6,
  LPDWORD VAR_7 )
{
  LPDPLAYX_LOBBYDATA VAR_8;
  DWORD VAR_9 = 0;
  HANDLE VAR_10;

  FUNC_0();

  if ( ! FUNC_3( VAR_5, &VAR_8 ) )
  {
    FUNC_4();
    return VAR_1;
  }

  VAR_9 = FUNC_5( VAR_8->lpConn );




  if ( ( VAR_6 == ((void*)0) ) ||
       ( *VAR_7 < VAR_9 )
     )
  {
    FUNC_4();

    *VAR_7 = FUNC_5( VAR_8->lpConn );

    return VAR_0;
  }

  FUNC_1( VAR_6, VAR_8->lpConn );

  FUNC_4();


  if( FUNC_2( ((void*)0), ((void*)0), &VAR_10, VAR_3 ) &&
      VAR_10
    )
  {
    BOOL VAR_11;
    VAR_11 = FUNC_6( VAR_10 );
    FUNC_7( "Signalling setting read event %p %s\n",
             VAR_10, VAR_11 ? "succeed" : "failed" );


    FUNC_2( ((void*)0), ((void*)0), &VAR_10, VAR_4 );
  }

  return VAR_2;
}
