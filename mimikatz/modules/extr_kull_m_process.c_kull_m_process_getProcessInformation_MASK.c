
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ NextEntryOffset; } ;
typedef int PVOID ;
typedef TYPE_1__* PSYSTEM_PROCESS_INFORMATION ;
typedef scalar_t__ (* PKULL_M_PROCESS_ENUM_CALLBACK ) (TYPE_1__*,int ) ;
typedef scalar_t__ PBYTE ;
typedef int NTSTATUS ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__**,int ) ;

NTSTATUS FUNC_3(PKULL_M_PROCESS_ENUM_CALLBACK VAR_1, PVOID VAR_2)
{
 NTSTATUS VAR_3;
 PSYSTEM_PROCESS_INFORMATION VAR_4 = ((void*)0), VAR_5;

 VAR_3 = FUNC_2(VAR_0, &VAR_4, 0);

 if(FUNC_1(VAR_3))
 {
  for(VAR_5 = VAR_4; VAR_1(VAR_5, VAR_2) && VAR_5->NextEntryOffset ; VAR_5 = (PSYSTEM_PROCESS_INFORMATION) ((PBYTE) VAR_5 + VAR_5->NextEntryOffset));
  FUNC_0(VAR_4);
 }
 return VAR_3;
}
