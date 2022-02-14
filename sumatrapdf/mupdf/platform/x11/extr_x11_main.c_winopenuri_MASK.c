
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int pdfapp_t ;


 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,char*) ;
 char* FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__,int *,int ) ;

void FUNC_6(pdfapp_t *VAR_1, char *VAR_2)
{
 char *VAR_3 = FUNC_4("BROWSER");
 pid_t VAR_4;
 if (!VAR_3)
 {



  VAR_3 = "xdg-open";

 }





 VAR_4 = FUNC_2();
 if (VAR_4 == 0)
 {
  if (FUNC_2() == 0)
  {
   FUNC_0(VAR_3, VAR_3, VAR_2, (char*)0);
   FUNC_3(VAR_0, "cannot exec '%s'\n", VAR_3);
  }
  FUNC_1(0);
 }
 FUNC_5(VAR_4, ((void*)0), 0);
}
