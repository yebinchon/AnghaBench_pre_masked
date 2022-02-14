
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int) ;

NTSTATUS FUNC_9(int VAR_4, wchar_t * VAR_5[])
{
 HANDLE VAR_6;
 FUNC_7(L" * Process Token : ");
 if(FUNC_4(FUNC_1(), VAR_2, &VAR_6))
 {
  FUNC_8(VAR_6, VAR_4);
  FUNC_0(VAR_6);
 }
 else FUNC_6(L"OpenProcessToken");

 FUNC_7(L" * Thread Token  : ");
 if(FUNC_5(FUNC_2(), VAR_2, VAR_3, &VAR_6))
 {
  FUNC_8(VAR_6, VAR_4);
  FUNC_0(VAR_6);
 }
 else if(FUNC_3() == VAR_0)
  FUNC_7(L"no token\n");
 else FUNC_6(L"OpenThreadToken");

 return VAR_1;
}
