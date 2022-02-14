
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* hInformOnSettingRead; void* hInformOnAppDeath; void* hInformOnAppStart; } ;
typedef TYPE_1__* LPDPLAYX_LOBBYDATA ;
typedef void* HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,TYPE_1__**) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;

BOOL FUNC_3( DWORD VAR_2,
                             HANDLE VAR_3, HANDLE VAR_4, HANDLE VAR_5 )
{
  LPDPLAYX_LOBBYDATA VAR_6;


  if( VAR_2 == 0 )
  {
    return VAR_0;
  }

  FUNC_0();

  if( !FUNC_1( VAR_2, &VAR_6 ) )
  {
    FUNC_2();
    return VAR_0;
  }

  VAR_6->hInformOnAppStart = VAR_3;
  VAR_6->hInformOnAppDeath = VAR_4;
  VAR_6->hInformOnSettingRead = VAR_5;

  FUNC_2();

  return VAR_1;
}
