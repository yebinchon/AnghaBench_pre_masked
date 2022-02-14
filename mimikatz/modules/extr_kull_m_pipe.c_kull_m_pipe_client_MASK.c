
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PHANDLE ;
typedef int LPCWCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,int*,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

BOOL FUNC_4(LPCWCHAR VAR_8, PHANDLE VAR_9)
{
 BOOL VAR_10 = VAR_0;
 DWORD VAR_11 = VAR_6 | VAR_7;
 if(FUNC_3(VAR_8, VAR_4))
 {
  *VAR_9 = FUNC_0(VAR_8, VAR_1 | VAR_2, 0, ((void*)0), VAR_5, 0, ((void*)0));
  if(*VAR_9 && (*VAR_9 != VAR_3))
  {
   if(!(VAR_10 = FUNC_2(*VAR_9, &VAR_11, ((void*)0), ((void*)0))))
    FUNC_1(L"SetNamedPipeHandleState");
  }
  else FUNC_1(L"CreateFile");
 }
 else FUNC_1(L"WaitNamedPipe");
 return VAR_10;
}
