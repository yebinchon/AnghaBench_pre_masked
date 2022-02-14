
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;
typedef scalar_t__ (* KUHL_M_SERVICE_FUNC ) (int *) ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,scalar_t__) ;

NTSTATUS FUNC_4(KUHL_M_SERVICE_FUNC VAR_3, wchar_t * VAR_4, int VAR_5, wchar_t * VAR_6[], DWORD VAR_7)
{
 if(VAR_5)
 {
  FUNC_2(L"%s \'%s\' service : ", VAR_4, VAR_6[0]);
  if(VAR_5 == 1)
  {
   if(VAR_3(VAR_6[0]))
    FUNC_2(L"OK\n");
   else FUNC_1(L"Service operation");
  }







 }
 else FUNC_0(L"Missing service name argument\n");

 return VAR_2;
}
