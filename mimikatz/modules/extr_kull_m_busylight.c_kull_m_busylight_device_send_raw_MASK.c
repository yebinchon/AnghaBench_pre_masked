
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ OutputReportByteLength; } ;
struct TYPE_5__ {scalar_t__ hBusy; int id; TYPE_1__ hidCaps; } ;
typedef TYPE_2__* PBUSYLIGHT_DEVICE ;
typedef int LPCVOID ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__,scalar_t__*,int *) ;

BOOL FUNC_3(PBUSYLIGHT_DEVICE VAR_2, LPCVOID VAR_3, DWORD VAR_4)
{
 BOOL VAR_5 = VAR_0;
 DWORD VAR_6;
 if(VAR_2 && VAR_2->hBusy && (VAR_2->hBusy != VAR_1))
 {
  if(VAR_4 <= VAR_2->hidCaps.OutputReportByteLength)
  {
   VAR_5 = FUNC_2(VAR_2->hBusy, VAR_3, VAR_4, &VAR_6, ((void*)0));
   if(!VAR_5)
    FUNC_1(L"[device %u] WriteFile (0x%08x)\n", VAR_2->id, FUNC_0());
  }
  else FUNC_1(L"[device %u] Size is not valide (siz = %u, max = %u)\n", VAR_2->id, VAR_4, VAR_2->hidCaps.OutputReportByteLength);
 }
 else FUNC_1(L"[device %u] Invalid Device/Busy Handle\n", VAR_2->id);
 return VAR_5;
}
