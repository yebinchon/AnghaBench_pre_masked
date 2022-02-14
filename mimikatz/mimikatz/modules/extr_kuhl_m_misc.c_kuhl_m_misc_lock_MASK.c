
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UNICODE_STRING ;
typedef int PCWCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,int **,char*,int *,char*) ;

NTSTATUS FUNC_4(int VAR_2, wchar_t * VAR_3[])
{
 PCWCHAR VAR_4;
 UNICODE_STRING VAR_5;
 FUNC_3(VAR_2, VAR_3, L"process", &VAR_4, L"explorer.exe");
  FUNC_0(&VAR_5, VAR_4);
  FUNC_1(L"Proxy process : %wZ\n", &VAR_5);
  FUNC_2(VAR_1, &VAR_5);
 return VAR_0;
}
