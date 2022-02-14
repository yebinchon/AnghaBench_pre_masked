
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SERVICE_STATUS_PROCESS ;
typedef int SC_HANDLE ;
typedef int PCWSTR ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int *,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

BOOL FUNC_4(PCWSTR VAR_5, SERVICE_STATUS_PROCESS * VAR_6)
{
 BOOL VAR_7 = VAR_0;
 SC_HANDLE VAR_8, VAR_9;
 DWORD VAR_10;

 if((VAR_8 = FUNC_1(((void*)0), VAR_3, VAR_1)))
 {
  if((VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_4)))
  {
   VAR_7 = FUNC_3(VAR_9, VAR_2, (BYTE *) VAR_6, sizeof(SERVICE_STATUS_PROCESS), &VAR_10);
   FUNC_0(VAR_9);
  }
  FUNC_0(VAR_8);
 }
 return VAR_7;
}
