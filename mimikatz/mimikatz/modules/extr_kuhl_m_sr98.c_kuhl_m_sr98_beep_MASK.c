
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ULONG ;
struct TYPE_4__ {int hDevice; struct TYPE_4__* next; } ;
typedef TYPE_1__* PSR98_DEVICE ;
typedef int NTSTATUS ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__**,int*) ;
 int FUNC_4 (int *,int *,int ) ;

NTSTATUS FUNC_5(int VAR_1, wchar_t * VAR_2[])
{
 PSR98_DEVICE VAR_3, VAR_4;
 ULONG VAR_5, VAR_6 = 9;
 if(VAR_1)
  VAR_6 = FUNC_4(VAR_2[0], ((void*)0), 0);
 if(FUNC_3(&VAR_3, &VAR_5))
 {
  for(VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next)
   FUNC_1(VAR_4->hDevice, (BYTE) VAR_6);
  FUNC_2(VAR_3);
 }
 else FUNC_0(L"No device found\n");
 return VAR_0;
}
