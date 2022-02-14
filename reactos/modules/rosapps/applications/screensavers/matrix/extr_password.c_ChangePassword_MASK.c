
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* PWDCHANGEPASSWORD ) (int ,int ,int ,int ) ;
typedef int HWND ;
typedef int * HINSTANCE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

BOOL FUNC_4(HWND VAR_2)
{

 HINSTANCE VAR_3 = FUNC_2(FUNC_3("MPR.DLL"));
 PWDCHANGEPASSWORD VAR_4;

 if(VAR_3 == ((void*)0))
  return VAR_0;

 VAR_4 = (PWDCHANGEPASSWORD)FUNC_1(VAR_3, "PwdChangePasswordA");

 if(VAR_4 == ((void*)0))
 {
  FUNC_0(VAR_3);
  return VAR_0;
 }

 VAR_4(FUNC_3("SCRSAVE"), VAR_2, 0, 0);
 FUNC_0(VAR_3);

 return VAR_1;
}
