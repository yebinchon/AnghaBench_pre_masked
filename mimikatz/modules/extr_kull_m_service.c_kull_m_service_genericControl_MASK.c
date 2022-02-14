
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SERVICE_STATUS ;
typedef int SC_HANDLE ;
typedef int PCWSTR ;
typedef int * LPSERVICE_STATUS ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

BOOL FUNC_4(PCWSTR VAR_3, DWORD VAR_4, DWORD VAR_5, LPSERVICE_STATUS VAR_6)
{
 BOOL VAR_7 = VAR_0;
 SC_HANDLE VAR_8, VAR_9;
 SERVICE_STATUS VAR_10;

 if((VAR_8 = FUNC_2(((void*)0), VAR_2, VAR_1)))
 {
  if((VAR_9 = FUNC_3(VAR_8, VAR_3, VAR_4)))
  {
   VAR_7 = FUNC_1(VAR_9, VAR_5, VAR_6 ? VAR_6 : &VAR_10);
   FUNC_0(VAR_9);
  }
  FUNC_0(VAR_8);
 }
 return VAR_7;
}
