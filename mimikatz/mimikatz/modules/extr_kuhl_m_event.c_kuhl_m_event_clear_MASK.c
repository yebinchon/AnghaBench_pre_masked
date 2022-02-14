
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PCWCHAR ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int **,char*,int *,char*) ;

NTSTATUS FUNC_6(int VAR_1, wchar_t * VAR_2[])
{
 HANDLE VAR_3;
 PCWCHAR VAR_4;
 DWORD VAR_5;
 FUNC_5(VAR_1, VAR_2, L"log", &VAR_4, L"Security");

 FUNC_4(L"Using \"%s\" event log :\n", VAR_4);
 if((VAR_3 = FUNC_2(((void*)0), VAR_4)))
 {
  if(FUNC_1(VAR_3, &VAR_5))
   FUNC_4(L"- %u event(s)\n", VAR_5);
  if(FUNC_0(VAR_3, ((void*)0)))
   FUNC_4(L"- Cleared !\n");
  else FUNC_3(L"ClearEventLog");
  if(FUNC_1(VAR_3, &VAR_5))
   FUNC_4(L"- %u event(s)\n", VAR_5);
 }
 else FUNC_3(L"OpenEventLog");

 return VAR_0;
}
