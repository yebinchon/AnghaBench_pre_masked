
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_15__ {TYPE_2__* hLsassMem; } ;
struct TYPE_14__ {int GrantedAccess; } ;
struct TYPE_13__ {TYPE_3__* LogonId; } ;
struct TYPE_12__ {int LowPart; int HighPart; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_1__* pHandleProcess; } ;
struct TYPE_10__ {int hProcess; } ;
typedef TYPE_4__* PSEKURLSA_PTH_DATA ;
typedef TYPE_5__ OBJECT_BASIC_INFORMATION ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_5__*,int,int *) ;
 int VAR_2 ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__ VAR_6 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;

VOID FUNC_10(PSEKURLSA_PTH_DATA VAR_9)
{
 OBJECT_BASIC_INFORMATION VAR_10;
 ULONG VAR_11;
 HANDLE VAR_12;
 NTSTATUS VAR_13;
 BOOL VAR_14 = VAR_0;

 if(FUNC_2(FUNC_8()) && (VAR_6.hLsassMem->type == VAR_1))
 {
  FUNC_7(L"  |  LSA Process ");
  VAR_13 = FUNC_3(VAR_6.hLsassMem->pHandleProcess->hProcess, VAR_2, &VAR_10, sizeof(OBJECT_BASIC_INFORMATION), &VAR_11);
  if(FUNC_2(VAR_13))
  {
   if((VAR_14 = (VAR_10.GrantedAccess & (VAR_3 | VAR_4))))
    FUNC_7(L"was already R/W\n");
   else
   {
    if((VAR_12 = FUNC_4(VAR_10.GrantedAccess | VAR_3 | VAR_4, VAR_0, FUNC_1(VAR_6.hLsassMem->pHandleProcess->hProcess))))
    {
     VAR_14 = VAR_5;
     FUNC_0(VAR_6.hLsassMem->pHandleProcess->hProcess);
     VAR_6.hLsassMem->pHandleProcess->hProcess = VAR_12;
     FUNC_7(L"is now R/W\n");
    }
    else FUNC_6(L"OpenProcess");
   }
  }
  else FUNC_5(L"NtQueryObject: %08x\n", VAR_13);

  if(VAR_14)
  {
   FUNC_7(L"  |  LUID %u ; %u (%08x:%08x)\n", VAR_9->LogonId->HighPart, VAR_9->LogonId->LowPart, VAR_9->LogonId->HighPart, VAR_9->LogonId->LowPart);
   FUNC_7(L"  \\_ msv1_0   - ");
   FUNC_9(VAR_8, VAR_9);
   FUNC_7(L"\n");
   FUNC_7(L"  \\_ kerberos - ");
   FUNC_9(VAR_7, VAR_9);
   FUNC_7(L"\n");
  }
 }
 else FUNC_5(L"memory handle is not KULL_M_MEMORY_TYPE_PROCESS\n");
}
