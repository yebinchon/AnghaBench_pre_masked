
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int VAR_1 ;

NTSTATUS FUNC_4(int VAR_2, wchar_t * VAR_3[])
{
 FUNC_2(L"Switch to MINIDUMP : ");
 if(VAR_2 != 1)
  FUNC_0(L"<minidumpfile.dmp> argument is missing\n");
 else
 {
  FUNC_3();
  VAR_1 = FUNC_1(VAR_3[0]);
  FUNC_2(L"\'%s\'\n", VAR_1);
 }
 return VAR_0;
}
