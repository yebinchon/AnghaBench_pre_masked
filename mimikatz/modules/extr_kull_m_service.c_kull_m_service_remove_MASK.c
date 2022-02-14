
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SC_HANDLE ;
typedef int PCWSTR ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

BOOL FUNC_4(PCWSTR VAR_4)
{
 BOOL VAR_5 = VAR_1;
 SC_HANDLE VAR_6, VAR_7;

 if((VAR_6 = FUNC_2(((void*)0), VAR_3, VAR_2)))
 {
  if((VAR_7 = FUNC_3(VAR_6, VAR_4, VAR_0)))
  {
   VAR_5 = FUNC_1(VAR_7);
   FUNC_0(VAR_7);
  }
  FUNC_0(VAR_6);
 }
 return VAR_5;
}
