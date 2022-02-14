
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int HighPart; int LowPart; } ;
typedef int NTSTATUS ;
typedef TYPE_1__ LUID ;


 scalar_t__ FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

NTSTATUS FUNC_4(int VAR_1, wchar_t * VAR_2[])
{
 NTSTATUS VAR_3 = VAR_0;
 LUID VAR_4;
 if(VAR_1)
 {
  if(FUNC_0(((void*)0), VAR_2[0], &VAR_4))
  {
   if(!VAR_4.HighPart)
    VAR_3 = FUNC_3(VAR_4.LowPart);
   else FUNC_1(L"LUID high part is %u\n", VAR_4.HighPart);
  }
  else FUNC_2(L"LookupPrivilegeValue");
 }
 else FUNC_1(L"Missing \'name\'\n");
 return VAR_3;
}
