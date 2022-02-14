
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int si ;
typedef int pi ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_6__ {int hThread; } ;
typedef TYPE_1__ STARTUPINFO ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (char*,char*,char*,scalar_t__) ;
 int VAR_4 ;

int FUNC_9( int VAR_5, char **VAR_6 ) {
  HANDLE VAR_7;
  HANDLE VAR_8;

  FUNC_6( VAR_4, "%d: Starting\n", FUNC_3() );

  if( VAR_5 == 2 ) {
    VAR_7 = (HANDLE)(ULONG_PTR)FUNC_5(VAR_6[1]);
  } else {
    if( !FUNC_1( FUNC_2(),
     FUNC_2(),
     FUNC_2(),
     &VAR_7,
     0,
     VAR_2,
     VAR_0) ) {
      FUNC_6( VAR_4, "%d: Could not duplicate my own process handle.\n",
        FUNC_3() );
      return 101;
    }
  }

  if( VAR_5 == 1 ) {
    STARTUPINFO VAR_9;
    PROCESS_INFORMATION VAR_10;
    char VAR_11[1000];

    FUNC_7( &VAR_9, 0, sizeof( VAR_9 ) );
    FUNC_7( &VAR_10, 0, sizeof( VAR_10 ) );

    FUNC_8( VAR_11, "%s %p", VAR_6[0], VAR_7 );
    if( !FUNC_0(((void*)0), VAR_11, ((void*)0), ((void*)0), VAR_2, 0, ((void*)0), ((void*)0),
         &VAR_9, &VAR_10 ) ) {
      FUNC_6( VAR_4, "%d: Could not create child process.\n",
        FUNC_3() );
      return 5;
    }

    if( FUNC_4( VAR_10.hThread, VAR_1 ) != VAR_3 ) {
      FUNC_6( VAR_4, "%d: Failed to wait for child process to terminate.\n",
        FUNC_3() );
      return 6;
    }
  } else {
    if( !FUNC_1( FUNC_2(),
     FUNC_2(),
     VAR_7,
     &VAR_8,
     0,
     VAR_2,
     VAR_0) ) {
      FUNC_6( VAR_4, "%d: Could not duplicate my handle into the parent.\n",
        FUNC_3() );
      return 102;
    }
  }

  return 0;
}
