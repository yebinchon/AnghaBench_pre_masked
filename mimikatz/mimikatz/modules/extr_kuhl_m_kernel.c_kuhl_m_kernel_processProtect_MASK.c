
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_9__ {int Type; int Signer; scalar_t__ Audit; } ;
struct TYPE_10__ {int SignatureLevel; int SectionSignatureLevel; TYPE_3__ Protection; } ;
struct TYPE_8__ {int member_2; int member_1; int member_0; } ;
struct TYPE_7__ {TYPE_2__ member_2; int member_1; int member_0; } ;
struct TYPE_11__ {TYPE_4__ SignatureProtection; scalar_t__ processId; TYPE_1__ member_1; int member_0; } ;
typedef int PCWCHAR ;
typedef int NTSTATUS ;
typedef TYPE_5__ MIMIDRV_PROCESS_PROTECT_INFORMATION ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int FUNC_3 (int ,TYPE_5__*,int) ;
 int FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int,int **,char*,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int ) ;

NTSTATUS FUNC_7(int VAR_6, wchar_t * VAR_7[])
{
 MIMIDRV_PROCESS_PROTECT_INFORMATION VAR_8 = {0, {0, 0, {0, 0, 0}}};
 PCWCHAR VAR_9, VAR_10;
 BOOL VAR_11;

 if(VAR_4 >= VAR_3)
 {
  VAR_11 = FUNC_5(VAR_6, VAR_7, L"remove", ((void*)0), ((void*)0));
  if(FUNC_5(VAR_6, VAR_7, L"process", &VAR_9, ((void*)0)))
  {
   FUNC_2(L"Process : %s\n", VAR_9);
   if(!FUNC_4(VAR_9, &VAR_8.processId))
    FUNC_1(L"kull_m_process_getProcessIdForName");
  }
  else if(FUNC_5(VAR_6, VAR_7, L"pid", &VAR_10, ((void*)0)))
  {
   VAR_8.processId = FUNC_6(VAR_10, ((void*)0), 0);
  }
  else FUNC_0(L"Argument /process:program.exe or /pid:processid needed\n");

  if(VAR_8.processId)
  {
   if(!VAR_11)
   {
    if(VAR_4 < VAR_1)
    {
     VAR_8.SignatureProtection.SignatureLevel = 1;
    }
    else if(VAR_4 < VAR_2)
    {
     VAR_8.SignatureProtection.SignatureLevel = 0x0f;
     VAR_8.SignatureProtection.SectionSignatureLevel = 0x0f;
    }
    else
    {
     VAR_8.SignatureProtection.SignatureLevel = 0x3f;
     VAR_8.SignatureProtection.SectionSignatureLevel = 0x3f;

     VAR_8.SignatureProtection.Protection.Type = 2;
     VAR_8.SignatureProtection.Protection.Audit = 0;
     VAR_8.SignatureProtection.Protection.Signer = 6;
    }
   }
   FUNC_2(L"PID %u -> %02x/%02x [%1x-%1x-%1x]\n", VAR_8.processId, VAR_8.SignatureProtection.SignatureLevel, VAR_8.SignatureProtection.SectionSignatureLevel, VAR_8.SignatureProtection.Protection.Type, VAR_8.SignatureProtection.Protection.Audit, VAR_8.SignatureProtection.Protection.Signer);
   FUNC_3(VAR_0, &VAR_8, sizeof(MIMIDRV_PROCESS_PROTECT_INFORMATION));
  }
  else FUNC_0(L"No PID\n");
 }
 else FUNC_0(L"Protected process not available before Windows Vista\n");
 return VAR_5;
}
