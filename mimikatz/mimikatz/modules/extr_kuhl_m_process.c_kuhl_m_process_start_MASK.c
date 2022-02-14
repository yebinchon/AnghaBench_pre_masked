
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int * dwProcessId; } ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef int * PCWCHAR ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,int ,int *,int *,int *,TYPE_1__*,int ) ;

NTSTATUS FUNC_3(int VAR_3, wchar_t * VAR_4[])
{
 PCWCHAR VAR_5;
 PROCESS_INFORMATION VAR_6;
 if(VAR_3)
 {
  VAR_5 = VAR_4[VAR_3 - 1];
  FUNC_1(L"Trying to start \"%s\" : ", VAR_5);
  if(FUNC_2(VAR_0, VAR_5, 0, ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), &VAR_6, VAR_2))
   FUNC_1(L"OK ! (PID %u)\n", VAR_6.dwProcessId);
  else FUNC_0(L"kull_m_process_create");
 }
 return VAR_1;
}
