
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PHANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int*,int *,int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;

BOOL FUNC_5(PHANDLE VAR_4)
{
 BOOL VAR_5 = VAR_1;
 DWORD VAR_6 = 0;
 if(*VAR_4 && (*VAR_4 != VAR_2))
 {
  if(FUNC_3(*VAR_4, &VAR_6, ((void*)0), ((void*)0), ((void*)0)) || (FUNC_2() == VAR_0))
  {
   if(VAR_6 & VAR_3)
   {
    if(!FUNC_1(*VAR_4))
     FUNC_4(L"DisconnectNamedPipe");
   }
   if((VAR_5 = FUNC_0(*VAR_4)))
    *VAR_4 = VAR_2;
   else FUNC_4(L"CloseHandle");
  }
  else FUNC_4(L"GetNamedPipeInfo");
 }
 return VAR_5;
}
