
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int *,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 char VAR_2[20];
 int VAR_3, VAR_4;


 if (FUNC_0("model_no", VAR_2, sizeof(VAR_2)) >= 0) {
  if (FUNC_2(VAR_2, "WL700")) {
   VAR_1 = 2;
   VAR_0 = 5;
   return;
  }
 }

 if (FUNC_0("et0phyaddr", VAR_2, sizeof(VAR_2)) >= 0 )
  VAR_3 = FUNC_1(VAR_2, ((void*)0), 0);
 if (FUNC_0("et1phyaddr", VAR_2, sizeof(VAR_2)) >= 0 )
  VAR_4 = FUNC_1(VAR_2, ((void*)0), 0);

 if (FUNC_0("hardware_version", VAR_2, sizeof(VAR_2)) >= 0) {

  if (FUNC_2(VAR_2, "WL300-") && VAR_3 == 0 && VAR_4 == 1) {
   VAR_1 = 4;
   VAR_0 = 5;
   return;
  }
 }

}
