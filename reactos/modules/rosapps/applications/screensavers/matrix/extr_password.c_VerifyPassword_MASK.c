
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* VERIFYSCREENSAVEPWD ) (int ) ;
typedef int HWND ;
typedef int * HINSTANCE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

BOOL FUNC_5(HWND VAR_2)
{





 HINSTANCE VAR_3;
 VERIFYSCREENSAVEPWD VAR_4;
 BOOL VAR_5;

 if(FUNC_2() < 0x80000000)
  return VAR_1;

 VAR_3 = FUNC_3(FUNC_4("PASSWORD.CPL"));

 if(VAR_3 == ((void*)0))
 {
  return VAR_0;
 }


 VAR_4 = (VERIFYSCREENSAVEPWD)FUNC_1(VAR_3, "VerifyScreenSavePwd");

 if(VAR_4 == ((void*)0))
 {
  FUNC_0(VAR_3);
  return VAR_0;
 }

 VAR_5 = VAR_4(VAR_2);
 FUNC_0(VAR_3);

 return VAR_5;
}
