
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * hSettingRead; int * hDeath; int * hStart; int hNotifyEvent; } ;
typedef TYPE_1__* LPMSGTHREADINFO ;
typedef int * HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,TYPE_1__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;

DWORD FUNC_8( HANDLE VAR_3, HANDLE VAR_4,
                                         HANDLE VAR_5, HANDLE VAR_6 )
{
  DWORD VAR_7;
  LPMSGTHREADINFO VAR_8;
  HANDLE VAR_9;

  VAR_8 = FUNC_6( FUNC_5(), 0, sizeof( *VAR_8 ) );
  if( VAR_8 == ((void*)0) )
  {
    return 0;
  }


  if( VAR_3 &&
      !FUNC_2( FUNC_4(), VAR_3,
                        FUNC_4(), &VAR_8->hNotifyEvent,
                        0, VAR_2, VAR_1 ) )
  {
    FUNC_3( "Unable to duplicate event handle\n" );
    goto error;
  }





  VAR_8->hStart = VAR_4;
  VAR_8->hDeath = VAR_5;
  VAR_8->hSettingRead = VAR_6;

  VAR_9 = FUNC_1( ((void*)0),
                          0,
                          VAR_0,
                          VAR_8,
                          0,
                          &VAR_7
                        );
  if ( VAR_9 == ((void*)0) )
  {
    FUNC_3( "Unable to create msg thread\n" );
    goto error;
  }

  FUNC_0(VAR_9);

  return VAR_7;

error:

  FUNC_7( FUNC_5(), 0, VAR_8 );

  return 0;
}
