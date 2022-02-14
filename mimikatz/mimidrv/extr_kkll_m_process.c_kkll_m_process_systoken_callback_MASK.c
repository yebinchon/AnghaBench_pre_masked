
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef scalar_t__ PVOID ;
typedef int PKIWI_BUFFER ;
typedef int PEPROCESS ;
typedef int PCHAR ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int ) ;

NTSTATUS FUNC_3(SIZE_T VAR_1, PVOID VAR_2, PKIWI_BUFFER VAR_3, PEPROCESS VAR_4, PVOID VAR_5)
{
 NTSTATUS VAR_6 = VAR_0;
 PCHAR VAR_7 = FUNC_0(VAR_4);

 if((FUNC_1("mimikatz.exe", VAR_7, 13) == 13) || (FUNC_1("cmd.exe", VAR_7, 7) == 7) || (FUNC_1("powershell.exe", VAR_7, 14) == 14))
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, (HANDLE) VAR_5, VAR_4);

 return VAR_6;
}
