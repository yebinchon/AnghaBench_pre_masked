
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hInformOnAppStart; scalar_t__ hInformOnAppDeath; scalar_t__ hInformOnSettingRead; } ;
typedef scalar_t__* LPHANDLE ;
typedef TYPE_1__* LPDPLAYX_LOBBYDATA ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__**) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static BOOL FUNC_4( LPHANDLE VAR_2,
                                        LPHANDLE VAR_3,
                                        LPHANDLE VAR_4,
                                        BOOL VAR_5 )
{
  LPDPLAYX_LOBBYDATA VAR_6;

  FUNC_1();

  if( !FUNC_2( 0, &VAR_6 ) )
  {
    FUNC_3();
    return VAR_0;
  }

  if( VAR_2 != ((void*)0) )
  {
    if( VAR_6->hInformOnAppStart == 0 )
    {
      FUNC_3();
      return VAR_0;
    }

    *VAR_2 = VAR_6->hInformOnAppStart;

    if( VAR_5 )
    {
      FUNC_0( VAR_6->hInformOnAppStart );
      VAR_6->hInformOnAppStart = 0;
    }
  }

  if( VAR_3 != ((void*)0) )
  {
    if( VAR_6->hInformOnAppDeath == 0 )
    {
      FUNC_3();
      return VAR_0;
    }

    *VAR_3 = VAR_6->hInformOnAppDeath;

    if( VAR_5 )
    {
      FUNC_0( VAR_6->hInformOnAppDeath );
      VAR_6->hInformOnAppDeath = 0;
    }
  }

  if( VAR_4 != ((void*)0) )
  {
    if( VAR_6->hInformOnSettingRead == 0 )
    {
      FUNC_3();
      return VAR_0;
    }

    *VAR_4 = VAR_6->hInformOnSettingRead;

    if( VAR_5 )
    {
      FUNC_0( VAR_6->hInformOnSettingRead );
      VAR_6->hInformOnSettingRead = 0;
    }
  }

  FUNC_3();

  return VAR_1;
}
