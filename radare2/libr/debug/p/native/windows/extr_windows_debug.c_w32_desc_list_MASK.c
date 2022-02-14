
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int Length; int Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_17__ {int Length; int Buffer; } ;
struct TYPE_20__ {int HandleCount; TYPE_1__ Name; TYPE_3__* Handles; } ;
struct TYPE_19__ {int ProcessId; int ObjectTypeNumber; int Handle; } ;
typedef TYPE_3__ SYSTEM_HANDLE ;
typedef int RList ;
typedef int RDebugDesc ;
typedef TYPE_4__* PVOID ;
typedef TYPE_2__* PUNICODE_STRING ;
typedef TYPE_4__* PSYSTEM_HANDLE_INFORMATION ;
typedef TYPE_4__* POBJECT_TYPE_INFORMATION ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_4__* LPVOID ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,TYPE_4__*,int ,char,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int (*) (TYPE_4__*)) ;
 int FUNC_9 (char*) ;
 void* FUNC_10 (TYPE_4__*,int) ;
 scalar_t__ FUNC_11 (int *,int *,int ,int **,int ,int ,int ) ;
 scalar_t__ FUNC_12 (int *,int,TYPE_4__*,int,int*) ;
 scalar_t__ FUNC_13 (int ,TYPE_4__*,int,int *) ;
 int * FUNC_14 (int ,int ,int) ;
 int FUNC_15 (TYPE_4__*,int ,int) ;

RList *FUNC_16(int VAR_4) {
 RDebugDesc *VAR_5;
 RList *VAR_6 = FUNC_8 (FUNC_2);
 int VAR_7;
 HANDLE VAR_8;
 PSYSTEM_HANDLE_INFORMATION VAR_9;
 NTSTATUS VAR_10;
 ULONG VAR_11 = 0x10000;
 LPVOID VAR_12;
 if (!VAR_6) {
  FUNC_4 ("win_desc_list/r_list_new");
  return ((void*)0);
 }
 if (!(VAR_8 = FUNC_14 (VAR_1, VAR_0, VAR_4))) {
  FUNC_9 ("win_desc_list/OpenProcess");
  FUNC_7 (VAR_6);
  return ((void*)0);
 }
 VAR_9 = (PSYSTEM_HANDLE_INFORMATION)FUNC_3 (VAR_11);


 while ((VAR_10 = FUNC_13 (16, VAR_9, VAR_11, ((void*)0))) == 0xc0000004) {
  VAR_11 *= 2;
  void *VAR_13 = FUNC_10 (VAR_9, (size_t)VAR_11);
  if (VAR_13) {
   VAR_9 = (PSYSTEM_HANDLE_INFORMATION)VAR_13;
  }
 }
 if (VAR_10) {
  FUNC_9 ("win_desc_list/NtQuerySystemInformation");
  FUNC_0 (VAR_8);
  FUNC_7 (VAR_6);
  return ((void*)0);
 }
 for (VAR_7 = 0; VAR_7 < VAR_9->HandleCount; VAR_7++) {
  SYSTEM_HANDLE VAR_14 = VAR_9->Handles[VAR_7];
  HANDLE VAR_15 = ((void*)0);
  POBJECT_TYPE_INFORMATION VAR_16;
  PVOID VAR_17;
  UNICODE_STRING VAR_18;
  ULONG VAR_19;
  if (VAR_14.ProcessId != VAR_4) {
   continue;
  }
  if (VAR_14.ObjectTypeNumber != 0x1c) {
   continue;
  }
  if (FUNC_11 (VAR_8, &VAR_14.Handle, FUNC_1 (), &VAR_15, 0, 0, 0)) {
   continue;
  }
  VAR_16 = (POBJECT_TYPE_INFORMATION)FUNC_3 (0x1000);
  if (FUNC_12 (VAR_15, 2, VAR_16, 0x1000, ((void*)0))) {
   FUNC_0 (VAR_15);
   continue;
  }
  VAR_17 = FUNC_3 (0x1000);
  if (!VAR_17) {
   break;
  }
  if (FUNC_12 (VAR_15, 1, VAR_17, 0x1000, &VAR_19)) {
   void *VAR_20 = FUNC_10 (VAR_17, VAR_19);
   if (VAR_20) {
    VAR_17 = VAR_20;
   }
   if (FUNC_12 (VAR_15, 1, VAR_17, VAR_19, ((void*)0))) {
    FUNC_2 (VAR_16);
    FUNC_2 (VAR_17);
    FUNC_0 (VAR_15);
    continue;
   }
  }
  VAR_18 = *(PUNICODE_STRING)VAR_17;
  if (VAR_18.Length) {

   VAR_12 = FUNC_3 ((size_t)(VAR_18.Length / 2) + 1);
   FUNC_15 (VAR_12, VAR_18.Buffer, VAR_18.Length / 2);
   VAR_5 = FUNC_5 (VAR_14.Handle, VAR_12, 0, '?', 0);
   if (!VAR_5) {
    FUNC_2 (VAR_12);
    break;
   }
   FUNC_6 (VAR_6, VAR_5);
   FUNC_2 (VAR_12);
  } else {
   VAR_12 = FUNC_3 ((size_t)(VAR_16->Name.Length / 2) + 1);
   FUNC_15 (VAR_12, VAR_16->Name.Buffer, VAR_16->Name.Length);
   VAR_5 = FUNC_5 (VAR_14.Handle, VAR_12, 0, '?', 0);
   if (!VAR_5) {
    FUNC_2 (VAR_12);
    break;
   }
   FUNC_6 (VAR_6, VAR_5);
   FUNC_2 (VAR_12);
  }
  FUNC_2 (VAR_16);
  FUNC_2 (VAR_17);
  FUNC_0 (VAR_15);
 }
 FUNC_2 (VAR_9);
 FUNC_0 (VAR_8);
 return VAR_6;
}
