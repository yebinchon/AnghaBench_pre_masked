
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int digest ;
typedef int * PVOID ;
typedef int * PSID ;
typedef scalar_t__ LPCGUID ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_3 (int ,int *,int,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;

void FUNC_6(LPCGUID VAR_2, PVOID VAR_3, DWORD VAR_4, PSID VAR_5)
{
 BYTE VAR_6[VAR_1];

 FUNC_1(L"  key : ");
 FUNC_5(VAR_3, VAR_4, 0);
 FUNC_1(L"\n");
 if(FUNC_3(VAR_0, VAR_3, VAR_4, VAR_6, sizeof(VAR_6)))
 {
  FUNC_1(L"  sha1: ");
  FUNC_5(VAR_6, sizeof(VAR_6), 0);
  FUNC_1(L"\n");
  if(VAR_2)
   FUNC_2(VAR_2, VAR_6, sizeof(VAR_6));
 }
 FUNC_0(VAR_3);
 if(VAR_5)
 {
  FUNC_1(L"  sid : ");
  FUNC_4(VAR_5);
  FUNC_1(L"\n");
  FUNC_0(VAR_5);
 }
}
