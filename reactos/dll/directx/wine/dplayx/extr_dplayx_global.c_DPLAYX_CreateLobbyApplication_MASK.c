
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_2__ {scalar_t__ dwAppID; scalar_t__ hInformOnSettingRead; scalar_t__ hInformOnAppDeath; scalar_t__ hInformOnAppStart; int dwAppLaunchedFromID; } ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,size_t,scalar_t__,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

BOOL FUNC_5( DWORD VAR_4 )
{
  UINT VAR_5;


  if( VAR_4 == 0 )
  {
    return VAR_0;
  }

  FUNC_0();


  for( VAR_5=0; VAR_5 < VAR_3; VAR_5++ )
  {
    if( VAR_2[ VAR_5 ].dwAppID == 0 )
    {

      FUNC_4( "Setting lobbyData[%u] for (0x%08x,0x%08x)\n",
              VAR_5, VAR_4, FUNC_3() );

      VAR_2[ VAR_5 ].dwAppID = VAR_4;
      VAR_2[ VAR_5 ].dwAppLaunchedFromID = FUNC_3();


      VAR_2[ VAR_5 ].hInformOnAppStart = 0;
      VAR_2[ VAR_5 ].hInformOnAppDeath = 0;
      VAR_2[ VAR_5 ].hInformOnSettingRead = 0;

      FUNC_1();
      return VAR_1;
    }
  }

  FUNC_2( "No empty lobbies\n" );

  FUNC_1();
  return VAR_0;
}
