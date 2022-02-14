
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {scalar_t__ UniqueProcessId; int NextEntryOffset; int ThreadCount; } ;
struct TYPE_3__ {scalar_t__ UniqueThreadId; scalar_t__ ThreadState; scalar_t__ WaitReason; } ;
typedef TYPE_1__ OBS_SYSTEM_THREAD_INFORMATION ;
typedef TYPE_2__ OBS_SYSTEM_PROCESS_INFORMATION2 ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,void*,int,int*) ;

__attribute__((used)) static bool FUNC_4(DWORD VAR_4, DWORD VAR_5)
{
 ULONG VAR_6 = 4096;
 bool VAR_7 = 0;
 void *VAR_8 = FUNC_2(VAR_6);

 for (;;) {
  NTSTATUS VAR_9 = FUNC_3(VAR_1,
           VAR_8, VAR_6, &VAR_6);
  if (FUNC_0(VAR_9))
   break;

  if (VAR_9 != VAR_0) {
   goto fail;
  }

  FUNC_1(VAR_8);
  VAR_6 += 1024;
  VAR_8 = FUNC_2(VAR_6);
 }

 OBS_SYSTEM_PROCESS_INFORMATION2 *VAR_10 = VAR_8;

 for (;;) {
  if (VAR_10->UniqueProcessId == (HANDLE)(DWORD_PTR)VAR_4) {
   break;
  }

  ULONG VAR_11 = VAR_10->NextEntryOffset;
  if (!VAR_11)
   goto fail;

  VAR_10 = (OBS_SYSTEM_PROCESS_INFORMATION2 *)((BYTE *)VAR_10 + VAR_11);
 }

 OBS_SYSTEM_THREAD_INFORMATION *VAR_12;
 OBS_SYSTEM_THREAD_INFORMATION *VAR_13 = ((void*)0);
 VAR_12 = (OBS_SYSTEM_THREAD_INFORMATION *)((BYTE *)VAR_10 + sizeof(*VAR_10));

 for (ULONG VAR_14 = 0; VAR_14 < VAR_10->ThreadCount; VAR_14++) {
  if (VAR_12[VAR_14].UniqueThreadId == (HANDLE)(DWORD_PTR)VAR_5) {
   VAR_13 = &VAR_12[VAR_14];
   break;
  }
 }

 if (VAR_13) {
  VAR_7 = VAR_13->ThreadState == VAR_2 &&
       VAR_13->WaitReason == VAR_3;
 }

fail:
 FUNC_1(VAR_8);
 return VAR_7;
}
