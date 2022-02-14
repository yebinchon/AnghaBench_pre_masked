
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {void* blue; void* green; void* red; } ;
struct TYPE_5__ {int member_2; int member_1; int member_0; } ;
struct TYPE_6__ {int member_1; int member_3; TYPE_4__ color; int AudioByte; int member_5; int member_4; TYPE_1__ member_2; int member_0; } ;
typedef int PCWCHAR ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef void* BYTE ;
typedef TYPE_2__ BUSYLIGHT_COMMAND_STEP ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_3 (int,int **,char*,int *,int *) ;
 int FUNC_4 (int ,int *,int ) ;

NTSTATUS FUNC_5(int VAR_9, wchar_t * VAR_10[])
{
 PCWCHAR VAR_11;
 DWORD VAR_12;
 BUSYLIGHT_COMMAND_STEP VAR_13 = {0, 1, {0, 0, 0}, 1, 0, VAR_2};

 VAR_13.color = VAR_0;
 if(VAR_7)
 {
  VAR_13.AudioByte = FUNC_0(FUNC_3(VAR_9, VAR_10, L"sound", ((void*)0), ((void*)0)) ? VAR_3 : VAR_1, VAR_4);
  if(FUNC_3(VAR_9, VAR_10, L"color", &VAR_11, ((void*)0)))
  {
   VAR_12 = FUNC_4(VAR_11, ((void*)0), 0);
   VAR_13.color.red = (BYTE) ((VAR_12 & 0x00ff0000) >> 16);
   VAR_13.color.green = (BYTE) ((VAR_12 & 0x0000ff00) >> 8);
   VAR_13.color.blue = (BYTE) (VAR_12 & 0x000000ff);
  }
  FUNC_2(VAR_8, &VAR_13, 1, VAR_6);
 }
 else FUNC_1(L"No BusyLight\n");
 return VAR_5;
}
