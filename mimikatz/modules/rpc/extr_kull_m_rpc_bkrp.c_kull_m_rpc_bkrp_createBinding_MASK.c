
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RPC_BINDING_HANDLE ;
typedef int * LPWSTR ;
typedef int * LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 int FUNC_2 (int *,char*,int *,char*,char*,int ,int ,int *,int ,int *,int *) ;

BOOL FUNC_3(LPCWSTR VAR_7, RPC_BINDING_HANDLE *VAR_8)
{
 BOOL VAR_9 = VAR_1;
 LPWSTR VAR_10 = ((void*)0);
 if(!VAR_7)
  if(FUNC_1(((void*)0), VAR_0, &VAR_10))
   VAR_7 = VAR_10;
 if(VAR_7)
  VAR_9 = FUNC_2(((void*)0), L"ncacn_np", VAR_7, L"\\pipe\\protected_storage", L"ProtectedStorage", VAR_6, (VAR_2 < 6) ? VAR_3 : VAR_4, ((void*)0), VAR_5, VAR_8, ((void*)0));
 if(VAR_10)
  FUNC_0(VAR_10);
 return VAR_9;
}
