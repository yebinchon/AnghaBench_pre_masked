
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef char* PCWCHAR ;
typedef int NTSTATUS ;
typedef int KUHL_M_PROCESS_GENERICOPERATION ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_9 (int,int **,char*,char**,int *) ;
 scalar_t__ FUNC_10 (char*,int *,int ) ;

NTSTATUS FUNC_11(int VAR_5, wchar_t * VAR_6[], KUHL_M_PROCESS_GENERICOPERATION VAR_7)
{
 HANDLE VAR_8;
 NTSTATUS VAR_9 = VAR_3;
 DWORD VAR_10 = 0, VAR_11;
 PCWCHAR VAR_12, VAR_13;

 switch(VAR_7)
 {
 case 128:
  VAR_11 = VAR_2;
  VAR_13 = L"NtTerminateProcess";
  break;
 case 129:
  VAR_11 = VAR_1;
  VAR_13 = L"NtSuspendProcess";
  break;
 case 130:
  VAR_11 = VAR_1;
  VAR_13 = L"NtResumeProcess";
  break;
 default:
  return VAR_9;
 }

 if(FUNC_9(VAR_5, VAR_6, L"pid", &VAR_12, ((void*)0)))
  VAR_10 = FUNC_10(VAR_12, ((void*)0), 0);

 if(VAR_10)
 {
  if((VAR_8 = FUNC_5(VAR_11, VAR_0, VAR_10)))
  {
   switch(VAR_7)
   {
   case 128:
    VAR_9 = FUNC_4(VAR_8, VAR_4);
    break;
   case 129:
    VAR_9 = FUNC_3(VAR_8);
    break;
   case 130:
    VAR_9 = FUNC_2(VAR_8);
    break;
   }

   if(FUNC_1(VAR_9))
    FUNC_8(L"%s of %u PID : OK !\n", VAR_13, VAR_10);
   else FUNC_6(L"%s 0x%08x\n", VAR_13, VAR_9);
   FUNC_0(VAR_8);
  }
  else FUNC_7(L"OpenProcess");
 }
 else FUNC_6(L"pid (/pid:123) is missing");
 return VAR_9;
}
