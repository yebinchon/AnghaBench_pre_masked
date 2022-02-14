
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef char* PCWCHAR ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*,int,int,int ,char*) ;
 int FUNC_2 (int *,char*,int,int ,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int **,char*,char**,char*) ;
 int FUNC_6 (char*,int *,int ) ;

NTSTATUS FUNC_7(int VAR_4, wchar_t * VAR_5[])
{
 PCWCHAR VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 DWORD VAR_11, VAR_12 = 0;

 BOOL VAR_13 = FUNC_5(VAR_4, VAR_5, L"export", ((void*)0), ((void*)0));

 FUNC_5(VAR_4, VAR_5, L"provider", &VAR_6, L"MS_ENHANCED_PROV");
 if(!(VAR_7 = FUNC_3(VAR_6)))
  VAR_7 = VAR_6;

 FUNC_5(VAR_4, VAR_5, L"providertype", &VAR_8, L"PROV_RSA_FULL");
 if(!(VAR_11 = FUNC_4(VAR_8)))
  VAR_11 = FUNC_6(VAR_8, ((void*)0), 0);

 if(FUNC_5(VAR_4, VAR_5, L"machine", ((void*)0), ((void*)0)))
  VAR_12 = VAR_0;
 VAR_9 = VAR_12 ? L"machine" : L"user";

 if(FUNC_5(VAR_4, VAR_5, L"silent", ((void*)0), ((void*)0)))
  VAR_12 |= VAR_1;

 FUNC_5(VAR_4, VAR_5, L"cngprovider", &VAR_10, VAR_2);

 FUNC_0(L" * Store         : \'%s\'\n"
   L" * Provider      : \'%s\' (\'%s\')\n"
   L" * Provider type : \'%s\' (%u)\n"
   L" * CNG Provider  : \'%s\'\n",
   VAR_9,
   VAR_6, VAR_7,
   VAR_8, VAR_11,
   VAR_10);

 FUNC_0(L"\nCryptoAPI keys :\n");
 FUNC_1(((void*)0), VAR_7, VAR_11, VAR_12, VAR_13, VAR_9);
 FUNC_0(L"\nCNG keys :\n");
 FUNC_2(((void*)0), VAR_10, VAR_12, VAR_13, VAR_9);
 return VAR_3;
}
