
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lpThreadEntryPoint; void* lpStartAddress; void* lpThreadLocalBase; int hThread; int bFinished; void* tid; void* pid; } ;
typedef int THREAD_ITEM ;
typedef int PVOID ;
typedef TYPE_1__* PTHREAD_ITEM ;
typedef void* LPVOID ;
typedef int HANDLE ;
typedef void* DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (int ,int,int *,int,int *) ;

__attribute__((used)) static void FUNC_3 (DWORD VAR_5, DWORD VAR_6, HANDLE VAR_7, LPVOID VAR_8, LPVOID VAR_9, BOOL VAR_10) {
 int VAR_11;
 PVOID VAR_12 = 0;
 if (VAR_3 == 0)
  VAR_3 = FUNC_0 (0, VAR_2 * sizeof (THREAD_ITEM), VAR_0, VAR_1);
 VAR_4 = (PTHREAD_ITEM)VAR_3;
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (!VAR_4->tid) {
   VAR_4->pid = VAR_5;
   VAR_4->tid = VAR_6;
   VAR_4->bFinished = VAR_10;
   VAR_4->hThread = VAR_7;
   VAR_4->lpThreadLocalBase = VAR_8;
   VAR_4->lpStartAddress = VAR_9;
   if (FUNC_2 (VAR_7, 0x9 , &VAR_12, sizeof (PVOID), ((void*)0)) == 0) {
    VAR_4->lpThreadEntryPoint = VAR_12;
   }
   return;
  }
  VAR_4++;
 }
 FUNC_1 ("r_debug_lstThreadAdd: Cannot find slot\n");
}
