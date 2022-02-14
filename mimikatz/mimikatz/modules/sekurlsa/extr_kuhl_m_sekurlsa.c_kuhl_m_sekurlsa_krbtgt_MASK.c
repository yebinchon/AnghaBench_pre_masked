
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_12__ {scalar_t__ isPresent; } ;
struct TYPE_13__ {TYPE_6__ Module; } ;
struct TYPE_11__ {int * hLsassMem; } ;
struct TYPE_10__ {int krbtgt_previous; int krbtgt_current; int * member_1; int * member_0; } ;
struct TYPE_9__ {scalar_t__ address; int * member_1; TYPE_2__* member_0; } ;
typedef int PVOID ;
typedef scalar_t__ PBYTE ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_1__ KULL_M_MEMORY_ADDRESS ;
typedef TYPE_2__ DUAL_KRBTGT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 () ;
 TYPE_7__ VAR_3 ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_6__*,int ,int ,scalar_t__*,int *,int *,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__*,int) ;

NTSTATUS FUNC_7(int VAR_4, wchar_t * VAR_5[])
{
 NTSTATUS VAR_6 = FUNC_3();
 LONG VAR_7 = 0;
 DUAL_KRBTGT VAR_8 = {((void*)0), ((void*)0)};
 KULL_M_MEMORY_ADDRESS VAR_9 = {((void*)0), VAR_2.hLsassMem}, VAR_10 = {&VAR_8, &VAR_0};

 if(FUNC_1(VAR_6))
 {
  if(VAR_3.Module.isPresent)
  {
   if(FUNC_5(&VAR_2, &VAR_3.Module, VAR_1, FUNC_0(VAR_1), &VAR_9.address, ((void*)0), ((void*)0), &VAR_7))
   {
    VAR_9.address = (PBYTE) VAR_9.address + sizeof(PVOID) * VAR_7;
    if(FUNC_6(&VAR_10, &VAR_9, sizeof(DUAL_KRBTGT)))
    {
     FUNC_4(VAR_8.krbtgt_current, L"Current");
     FUNC_4(VAR_8.krbtgt_previous, L"Previous");
    }
   }
   else FUNC_2(L"Unable to find KDC pattern in LSASS memory\n");
  }
  else FUNC_2(L"KDC service not in LSASS memory\n");
 }
 return VAR_6;
}
