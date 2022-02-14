
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;
typedef int LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int,int **,char*,scalar_t__*,char*) ;
 scalar_t__ FUNC_6 (scalar_t__,int *,int ) ;

NTSTATUS FUNC_7(int VAR_5, wchar_t * VAR_6[])
{
 LPCWSTR VAR_7, VAR_8;
 DWORD VAR_9, VAR_10;
 if(FUNC_5(VAR_5, VAR_6, L"id", &VAR_7, ((void*)0)))
 {
  VAR_9 = FUNC_6(VAR_7, ((void*)0), 0);
  if(FUNC_5(VAR_5, VAR_6, L"target", &VAR_7, ((void*)0)))
   VAR_10 = FUNC_6(VAR_7, ((void*)0), 0);
  else VAR_10 = VAR_2;

  FUNC_5(VAR_5, VAR_6, L"password", &VAR_8, L"");

  FUNC_4(L"Asking to connect from %u to ", VAR_9);
  if(VAR_10 == VAR_2)
   FUNC_4(L"current session");
  else FUNC_4(L"%u", VAR_10);

  FUNC_4(L"\n\n> ");
  if(FUNC_3(VAR_3, VAR_9, VAR_10, (LPWSTR) VAR_8, VAR_1))
   FUNC_4(L"Connected to %u\n", VAR_9);
  else if(FUNC_0() == VAR_0)
   FUNC_1(L"Bad password for this session (take care to not lock the account!)\n");
  else FUNC_2(L"WinStationConnect");
 }
 else FUNC_1(L"Argument id is needed\n");
 return VAR_4;
}
