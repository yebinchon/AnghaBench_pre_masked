
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int SYSTEM_INFORMATION_CLASS ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ NTSTATUS ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int,int*) ;
 scalar_t__ VAR_1 ;

NTSTATUS FUNC_4(SYSTEM_INFORMATION_CLASS VAR_2, PVOID VAR_3, ULONG VAR_4)
{
 NTSTATUS VAR_5 = VAR_1;
 DWORD VAR_6, VAR_7;

 if(*(PVOID *) VAR_3)
 {
  VAR_5 = FUNC_3(VAR_2, *(PVOID *) VAR_3, VAR_4, &VAR_7);
 }
 else
 {
  for(VAR_6 = 0x1000; (VAR_5 == VAR_1) && (*(PVOID *) VAR_3 = FUNC_0(VAR_0, VAR_6)) ; VAR_6 <<= 1)
  {
   VAR_5 = FUNC_3(VAR_2, *(PVOID *) VAR_3, VAR_6, &VAR_7);
   if(!FUNC_2(VAR_5))
    FUNC_1(*(PVOID *) VAR_3);
  }
 }
 return VAR_5;
}
