
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ InputReportByteLength; } ;
struct TYPE_5__ {scalar_t__ hBusy; int id; TYPE_1__ hidCaps; } ;
typedef TYPE_2__* PBUSYLIGHT_DEVICE ;
typedef int LPVOID ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,scalar_t__,scalar_t__*,int *) ;

BOOL FUNC_5(PBUSYLIGHT_DEVICE VAR_3, LPVOID *VAR_4, DWORD *VAR_5)
{
 BOOL VAR_6 = VAR_0;
 DWORD VAR_7;
 if(VAR_3 && VAR_3->hBusy && (VAR_3->hBusy != VAR_1))
 {
  VAR_7 = VAR_3->hidCaps.InputReportByteLength;
  if((*VAR_4 = FUNC_1(VAR_2, VAR_7)))
  {
   VAR_6 = FUNC_4(VAR_3->hBusy, *VAR_4, VAR_7, VAR_5, ((void*)0));
   if(!VAR_6 || (VAR_6 && (*VAR_5 != VAR_7)))
   {
    if(!VAR_6)
     FUNC_3(L"[device %u] ReadFile (0x%08x)\n", VAR_3->id, FUNC_0());
    else
     FUNC_3(L"[device %u] %u byte(s) readed, %u wanted\n", *VAR_5, VAR_7);
    *VAR_4 = FUNC_2(*VAR_4);
    *VAR_5 = 0;
   }
  }
 }
 else FUNC_3(L"[device %u] Invalid Device/Busy Handle\n", VAR_3->id);
 return VAR_6;
}
