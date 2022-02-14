
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCVOID ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,scalar_t__*,int *) ;

BOOL FUNC_3(HANDLE VAR_1, LPCVOID VAR_2, DWORD VAR_3)
{
 BOOL VAR_4 = VAR_0;
 DWORD VAR_5;
 if(FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_5, ((void*)0)) && (VAR_3 == VAR_5))
 {
  if(!(VAR_4 = FUNC_0(VAR_1)))
   FUNC_1(L"FlushFileBuffers");
 }
 else FUNC_1(L"WriteFile");
 return VAR_4;
}
