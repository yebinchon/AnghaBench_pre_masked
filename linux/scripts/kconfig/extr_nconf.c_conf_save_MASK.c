
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int,char*) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int ,int ,int **,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 while (1) {
  int VAR_6;
  VAR_6 = FUNC_2(VAR_3,
    ((void*)0), VAR_5,
    VAR_2,
    &VAR_0,
    &VAR_1);
  switch (VAR_6) {
  case 0:
   if (!VAR_0[0])
    return;
   VAR_6 = FUNC_1(VAR_0);
   if (!VAR_6) {
    FUNC_3(VAR_0);
    return;
   }
   FUNC_0(VAR_3, "Can't create file!",
    1, "<OK>");
   break;
  case 1:
   FUNC_4(VAR_3,
    "Save Alternate Configuration",
    VAR_4);
   break;
  case 128:
   return;
  }
 }
}
