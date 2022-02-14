
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LRESULT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,char*,int,int,int,int,int,int ,int *,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;

LRESULT FUNC_2(
   HWND VAR_8)
{
   FUNC_1("WM_CREATE (enter).");
   FUNC_1("test 1");
   FUNC_0(0, VAR_5, "PushButton", VAR_4 | VAR_6 | VAR_7,
      10, 10, 150, 30, VAR_8, ((void*)0), VAR_0, ((void*)0));
   FUNC_1("test 2");
   FUNC_0(0, VAR_5, "DefPushButton", VAR_3 | VAR_6 | VAR_7,
      10, 40, 150, 30, VAR_8, ((void*)0), VAR_0, ((void*)0));
   FUNC_1("test 3");
   FUNC_0(0, VAR_5, "AutoRadioButton", VAR_2 | VAR_6 | VAR_7,
      10, 70, 150, 30, VAR_8, ((void*)0), VAR_0, ((void*)0));
   FUNC_1("test 4");
   FUNC_0(0, VAR_5, "AutoCheckBox", VAR_1 | VAR_6 | VAR_7,
      10, 100, 150, 30, VAR_8, ((void*)0), VAR_0, ((void*)0));

   FUNC_1("WM_CREATE (leave).");
   return 0;
}
