
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {size_t HandleCount; int * Handles; } ;
typedef int PVOID ;
typedef TYPE_1__* PSYSTEM_HANDLE_INFORMATION ;
typedef scalar_t__ (* PKULL_M_SYSTEM_HANDLE_ENUM_CALLBACK ) (int *,int ) ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__**,int ) ;

NTSTATUS FUNC_3(PKULL_M_SYSTEM_HANDLE_ENUM_CALLBACK VAR_1, PVOID VAR_2)
{
 NTSTATUS VAR_3;
 ULONG VAR_4;
 PSYSTEM_HANDLE_INFORMATION VAR_5 = ((void*)0);

 VAR_3 = FUNC_2(VAR_0, &VAR_5, 0);
 if(FUNC_1(VAR_3))
 {
  for(VAR_4 = 0; (VAR_4 < VAR_5->HandleCount) && VAR_1(&VAR_5->Handles[VAR_4], VAR_2); VAR_4++);
  FUNC_0(VAR_5);
 }
 return VAR_3;
}
