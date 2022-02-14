
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PCWCHAR ;
typedef int NTSTATUS ;
typedef int DWORD ;


 int FUNC_0 (int ,int *,int *,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int **,char*,int *,char*) ;

NTSTATUS FUNC_5(int VAR_2, wchar_t * VAR_3[])
{
 DWORD VAR_4, VAR_5 = 0;
 PCWCHAR VAR_6;
 FUNC_4(VAR_2, VAR_3, L"systemstore", &VAR_6, L"CURRENT_USER" );
 VAR_4 = FUNC_3(VAR_6);
 FUNC_2(L"Asking for System Store \'%s\' (0x%08x)\n", VAR_6, VAR_4);

 if(!FUNC_0(VAR_4, ((void*)0), &VAR_5, VAR_1))
  FUNC_1(L"CertEnumSystemStore");

 return VAR_0;
}
