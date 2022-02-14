
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int si ;
typedef int pi ;
struct TYPE_6__ {void* hProcess; int hThread; } ;
typedef TYPE_1__ STARTUPINFO ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int *,int,int ,int,int *) ;
 int FUNC_2 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (void*,int ,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (void*,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int,int ,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*,int ,...) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (char*,char*,char*,void*) ;
 int VAR_9 ;

int FUNC_14( int VAR_10, char **VAR_11 ) {
  HANDLE VAR_12;
  void *VAR_13;
  int *VAR_14;

  FUNC_11( VAR_9, "%d: Starting\n", FUNC_3() );

  if( VAR_10 == 2 ) {



        VAR_13 = (void *)FUNC_6(FUNC_10(VAR_11[1]));

  } else {
    VAR_13 = FUNC_1( VAR_3,
      ((void*)0),
      VAR_5 | VAR_6,
      0, 0x1000, ((void*)0) );
    if( !FUNC_5( VAR_13,
          VAR_1,
          VAR_1 ) ) {
      FUNC_11( VAR_9, "%d: Could not make handle inheritable.\n",
        FUNC_3() );
      return 100;
    }
  }

  if( !VAR_13 ) {
    FUNC_11( VAR_9, "%d: Could not create anonymous file map.\n",
      FUNC_3() );
    return 1;
  }

  VAR_12 = FUNC_4( VAR_13,
        VAR_0,
        0,
        0,
        0x1000 );

  if( !VAR_12 ) {
    FUNC_11( VAR_9, "%d: Could not map view of file.\n",
      FUNC_3() );
    if (VAR_13 != VAR_3)
        FUNC_0(VAR_13);
    return 2;
  }

  if( !FUNC_7( VAR_12, 0x1000, VAR_4, VAR_5 ) ) {
    FUNC_11( VAR_9, "%d: VirtualAlloc failed to realize the page.\n",
      FUNC_3() );
    if (VAR_13 != VAR_3)
        FUNC_0(VAR_13);
    return 3;
  }

  VAR_14 = (int *)VAR_12;
  VAR_14[0] = 0x12345678;

  if( VAR_14[0] != 0x12345678 ) {
    FUNC_11( VAR_9, "%d: Can't write to the memory (%08x != 0x12345678)\n",
      FUNC_3(), VAR_14[0] );
    return 4;
  }

  if( VAR_10 == 1 ) {
    STARTUPINFO VAR_15;
    PROCESS_INFORMATION VAR_16;
    char VAR_17[1000];

    FUNC_12( &VAR_15, 0, sizeof( VAR_15 ) );
    FUNC_12( &VAR_16, 0, sizeof( VAR_16 ) );

    FUNC_13(VAR_17,"%s %p", VAR_11[0], VAR_13);
 FUNC_0(VAR_13);

    if( !FUNC_2(((void*)0), VAR_17, ((void*)0), ((void*)0), VAR_7, 0, ((void*)0), ((void*)0),
         &VAR_15, &VAR_16 ) ) {
      FUNC_11( VAR_9, "%d: Could not create child process.\n",
        FUNC_3() );
      if (VAR_16.hProcess != VAR_3)
          FUNC_0(VAR_16.hProcess);

      return 5;
    }

    if( FUNC_8( VAR_16.hThread, VAR_2 ) != VAR_8 ) {
      FUNC_11( VAR_9, "%d: Failed to wait for child process to terminate.\n",
        FUNC_3() );
      if (VAR_16.hProcess != VAR_3)
          FUNC_0(VAR_16.hProcess);
      return 6;
    }

    if (VAR_16.hProcess != VAR_3)
        FUNC_0(VAR_16.hProcess);

  }

  return 0;
}
