
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int SYSTEM_INFORMATION_CLASS ;
typedef int PVOID ;
typedef int PULONG ;
typedef int NTSTATUS ;
typedef int (* NTQUERYSYSTEMINFORMATIONFUNC ) (int ,int ,int ,int ) ;


 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_1(SYSTEM_INFORMATION_CLASS VAR_0,
         PVOID VAR_1, ULONG VAR_2, PULONG VAR_3)
{
 static bool VAR_4 = 0;
 static NTQUERYSYSTEMINFORMATIONFUNC VAR_5 = ((void*)0);

 if (!VAR_4) {
  VAR_5 = (NTQUERYSYSTEMINFORMATIONFUNC)FUNC_0(
   "NtQuerySystemInformation");
  VAR_4 = 1;
 }

 if (VAR_5)
  return VAR_5(VAR_0, VAR_1, VAR_2, VAR_3);
 return (NTSTATUS)-1;
}
