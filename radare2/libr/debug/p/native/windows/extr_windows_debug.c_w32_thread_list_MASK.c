
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int te ;
typedef int ctx ;
struct TYPE_14__ {int Eip; int Rip; int member_0; } ;
struct TYPE_13__ {scalar_t__ bSuspended; scalar_t__ bFinished; } ;
struct TYPE_12__ {int tid; int pid; } ;
struct TYPE_11__ {int dwSize; int th32ThreadID; int th32OwnerProcessID; } ;
typedef TYPE_1__ THREADENTRY32 ;
typedef int RList ;
typedef TYPE_2__ RDebug ;
typedef TYPE_3__* PTHREAD_ITEM ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_4__ CONTEXT ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,int*) ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_1__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int) ;
 char* FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int,char,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int,int ,int) ;
 int FUNC_13 (TYPE_2__*,int ,int *,int) ;

RList *FUNC_14(RDebug *VAR_9, int VAR_10, RList *VAR_11) {

 HANDLE VAR_12 = FUNC_11 (VAR_8, 0);
 if (VAR_12 == VAR_1) {
  FUNC_9 ("w32_thread_list/CreateToolhelp32Snapshot");
  return VAR_11;
 }
 THREADENTRY32 VAR_13;
 VAR_13.dwSize = sizeof (VAR_13);
 HANDLE VAR_14 = FUNC_12 (VAR_2 | VAR_3, VAR_0, VAR_10);
 if (FUNC_2 (VAR_12, &VAR_13)) {

  char *VAR_15 = ((void*)0);
  int VAR_16 = -1;
  if (!VAR_13.th32ThreadID) {
   VAR_15 = FUNC_5 (VAR_14, ((void*)0));
   DWORD VAR_17;
   if (FUNC_1 (VAR_10, &VAR_17)) {
    VAR_16 = VAR_17;
   }
  }
  if (!VAR_15) {

   VAR_15 = FUNC_10 ("???");
  }
  int VAR_18 = VAR_9->tid;
  do {
   char VAR_19 = VAR_6;
   if (VAR_13.th32OwnerProcessID == VAR_10) {
    ut64 VAR_20 = 0;
    if (VAR_9->pid == VAR_10) {
     CONTEXT VAR_21 = {0};
     VAR_9->tid = VAR_13.th32ThreadID;
     FUNC_13 (VAR_9, VAR_7, (ut8 *)&VAR_21, sizeof (VAR_21));




     VAR_20 = VAR_21.Eip;

     PTHREAD_ITEM VAR_22 = FUNC_4 (VAR_9, VAR_13.th32ThreadID);
     if (VAR_22) {
      if (VAR_22->bFinished) {
       VAR_19 = VAR_4;
      } else if (VAR_22->bSuspended) {
       VAR_19 = VAR_6;
      } else {
       VAR_19 = VAR_5;
      }
     }
    }
    FUNC_8 (VAR_11, FUNC_7 (VAR_15, VAR_13.th32ThreadID, VAR_16, VAR_19, VAR_20));
   }
  } while (FUNC_3 (VAR_12, &VAR_13));
  VAR_9->tid = VAR_18;
  FUNC_6 (VAR_15);
 } else {
  FUNC_9 ("w32_thread_list/Thread32First");
 }
 FUNC_0 (VAR_12);
 return VAR_11;
}
