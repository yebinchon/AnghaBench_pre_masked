
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwLobbyMsgThreadId; } ;
typedef TYPE_1__* LPDPLAYX_LOBBYDATA ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__**) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;

BOOL FUNC_3( DWORD VAR_2, DWORD VAR_3 )
{
  LPDPLAYX_LOBBYDATA VAR_4;

  FUNC_0();

  if( !FUNC_1( VAR_2, &VAR_4 ) )
  {
    FUNC_2();
    return VAR_0;
  }

  VAR_4->dwLobbyMsgThreadId = VAR_3;

  FUNC_2();

  return VAR_1;
}
