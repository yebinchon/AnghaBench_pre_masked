
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_31__ {int ExceptionCode; } ;
struct TYPE_32__ {TYPE_7__ ExceptionRecord; } ;
struct TYPE_30__ {int lpBaseOfDll; } ;
struct TYPE_29__ {int hFile; int lpBaseOfDll; } ;
struct TYPE_28__ {int lpStartAddress; int lpThreadLocalBase; int hThread; } ;
struct TYPE_27__ {int dwExitCode; } ;
struct TYPE_26__ {scalar_t__ dwExitCode; } ;
struct TYPE_25__ {int lpStartAddress; int hProcess; } ;
struct TYPE_33__ {TYPE_8__ Exception; TYPE_6__ UnloadDll; TYPE_5__ LoadDll; TYPE_4__ CreateThread; TYPE_3__ ExitThread; TYPE_2__ ExitProcess; TYPE_1__ CreateProcessInfo; } ;
struct TYPE_24__ {unsigned int dwDebugEventCode; int dwThreadId; int dwProcessId; TYPE_9__ u; } ;
struct TYPE_23__ {int hFile; } ;
struct TYPE_22__ {int dwExitCode; int bFinished; } ;
struct TYPE_21__ {int tid; int pid; } ;
typedef TYPE_10__ RDebug ;
typedef TYPE_11__* PTHREAD_ITEM ;
typedef TYPE_12__* PLIB_ITEM ;
typedef int HANDLE ;
typedef TYPE_13__ DEBUG_EVENT ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 scalar_t__ FUNC_0 (TYPE_13__*,int ) ;
 int FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (char*,int,unsigned int,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 TYPE_12__* VAR_13 ;
 TYPE_11__* VAR_14 ;
 int FUNC_5 (TYPE_13__*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int ,int ,char*) ;
 int FUNC_11 (int,int,int ,int ,int ,int ) ;
 int FUNC_12 (TYPE_10__*,int,int,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ) ;

int FUNC_15(RDebug *VAR_15, int VAR_16) {
 DEBUG_EVENT VAR_17;
 int VAR_18, VAR_19 = 0;
 unsigned int VAR_20;
 char *VAR_21 = ((void*)0);
 int VAR_22 = VAR_11;
 static int VAR_23 = 0;

 do {

  if (VAR_23 == VAR_16) {
   return -1;
  }
  FUNC_5 (&VAR_17, 0, sizeof (DEBUG_EVENT));
  if (FUNC_0 (&VAR_17, VAR_1) == 0) {
   FUNC_13 ("w32_dbg_wait/WaitForDebugEvent");
   return -1;
  }
  VAR_20 = VAR_17.dwDebugEventCode;
  VAR_18 = VAR_17.dwThreadId;
  VAR_16 = VAR_17.dwProcessId;
  VAR_15->tid = VAR_18;
  VAR_15->pid = VAR_16;

  switch (VAR_20) {
  case 138:
   FUNC_2 ("(%d) created process (%d:%p)\n",
    VAR_16, FUNC_14 (VAR_17.u.CreateProcessInfo.hProcess),
    VAR_17.u.CreateProcessInfo.lpStartAddress);
   FUNC_12 (VAR_15, VAR_16, VAR_18, -1);
   VAR_19 = 1;
   VAR_22 = VAR_7;
   break;
  case 133:


   FUNC_7 ("(%d) Process %d exited with exit code %d\n", (int)VAR_17.dwProcessId, (int)VAR_17.dwProcessId,
    (int)VAR_17.u.ExitProcess.dwExitCode);
   FUNC_6 ();

   VAR_19 = 0;
   VAR_23 = VAR_16;
   VAR_22 = VAR_4;
   break;
  case 137:

   FUNC_11 (VAR_16, VAR_18, VAR_17.u.CreateThread.hThread, VAR_17.u.CreateThread.lpThreadLocalBase, VAR_17.u.CreateThread.lpStartAddress, VAR_0);

   VAR_22 = VAR_8;
   VAR_19 = 0;
   break;
  case 132:

   VAR_14 = (PTHREAD_ITEM)FUNC_9 (VAR_16, VAR_18);
   if (VAR_14) {
    VAR_14->bFinished = VAR_12;
    VAR_14->dwExitCode = VAR_17.u.ExitThread.dwExitCode;
   } else {
    FUNC_11 (VAR_16, VAR_18, VAR_17.u.CreateThread.hThread, VAR_17.u.CreateThread.lpThreadLocalBase, VAR_17.u.CreateThread.lpStartAddress, VAR_12);
   }

   VAR_19 = 0;
   VAR_22 = VAR_5;
   break;
  case 131:
   VAR_21 = FUNC_4 (VAR_17.u.LoadDll.hFile);

   FUNC_10 (VAR_16,VAR_17.u.LoadDll.lpBaseOfDll, VAR_17.u.LoadDll.hFile, VAR_21);
   if (VAR_21) {
    FUNC_3 (VAR_21);
   }
   VAR_19 = 0;
   VAR_22 = VAR_6;
   break;
  case 128:

   VAR_13 = (PLIB_ITEM)FUNC_8 (VAR_17.u.UnloadDll.lpBaseOfDll);
   if (VAR_13 != ((void*)0)) {
    VAR_13->hFile = (HANDLE)-1;
   } else {
    FUNC_10 (VAR_16, VAR_17.u.UnloadDll.lpBaseOfDll, (HANDLE)-1, "not cached");
    if (VAR_21)
     FUNC_3 (VAR_21);
   }
   VAR_19 = 0;
   VAR_22 = VAR_3;
   break;
  case 130:

   FUNC_7 ("(%d) Debug string\n", VAR_16);
   FUNC_6 ();

   FUNC_12 (VAR_15, VAR_16, VAR_18, -1);
   VAR_19 = 1;
   break;
  case 129:

   FUNC_7 ("(%d) RIP event\n", VAR_16);
   FUNC_6 ();
   FUNC_12 (VAR_15, VAR_16, VAR_18, -1);
   VAR_19 = 1;

   break;
  case 135:
   switch (VAR_17.u.Exception.ExceptionRecord.ExceptionCode) {



   case 136:
    VAR_22 = VAR_2;
    VAR_19 = 0;
    break;



   case 134:
    VAR_22 = VAR_9;
    VAR_19 = 0;
    break;
   default:
    if (!FUNC_1 (&VAR_17)) {
     VAR_22 = VAR_10;
     VAR_19 = 0;
    }
    else {
     VAR_19 = 1;
     FUNC_12 (VAR_15, VAR_16, VAR_18, -1);
    }

   }
   break;
  default:
   FUNC_2 ("(%d) unknown event: %d\n", VAR_16, VAR_20);
   return -1;
  }
 } while (VAR_19);
 return VAR_22;
}
