
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int *,int ) ;

NTSTATUS FUNC_3(int VAR_1, wchar_t * VAR_2[])
{
 DWORD VAR_3 = VAR_1 ? FUNC_2(VAR_2[0], ((void*)0), 0) : 1000;
 FUNC_1(L"Sleep : %u ms... ", VAR_3);
 FUNC_0(VAR_3);
 FUNC_1(L"End !\n");
 return VAR_0;
}
