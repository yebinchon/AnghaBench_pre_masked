
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ULONG ;
struct TYPE_4__ {int hDevice; int id; struct TYPE_4__* next; } ;
typedef int PSTR ;
typedef TYPE_1__* PRDM_DEVICE ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

NTSTATUS FUNC_6(int VAR_1, wchar_t * VAR_2[])
{
 PRDM_DEVICE VAR_3, VAR_4;
 ULONG VAR_5;
 PSTR VAR_6;

 if(FUNC_4(&VAR_3, &VAR_5))
 {
  for(VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next)
  {
   FUNC_2(L"[%3u] ", VAR_4->id);
   if(FUNC_5(VAR_4->hDevice, &VAR_6))
   {
    FUNC_2(L"%S\n", VAR_6);
    FUNC_0(VAR_6);
   }
  }
  FUNC_3(VAR_3);
 }
 else FUNC_1(L"No device found\n");
 return VAR_0;
}
