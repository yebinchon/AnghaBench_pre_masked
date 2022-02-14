
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {TYPE_1__* deviceId; int id; struct TYPE_5__* next; } ;
struct TYPE_4__ {int Capabilities; int Description; } ;
typedef TYPE_2__* PBUSYLIGHT_DEVICE ;
typedef int NTSTATUS ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,...) ;
 int * VAR_2 ;
 TYPE_2__* VAR_3 ;

NTSTATUS FUNC_3(int VAR_4, wchar_t * VAR_5[])
{
 PBUSYLIGHT_DEVICE VAR_6;
 DWORD VAR_7;

 if(VAR_1)
 {
  for(VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->next)
  {
   FUNC_2(L"[%3u] %s ( ", VAR_6->id, VAR_6->deviceId->Description);
   for(VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
   {
    if((VAR_6->deviceId->Capabilities >> VAR_7) & 1)
     FUNC_2(L"%s, ", VAR_2[VAR_7]);
   }
   FUNC_2(L")\n");
  }
 }
 else FUNC_1(L"No BusyLight\n");
 return VAR_0;
}
