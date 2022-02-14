
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*,int ,int ,int ) ;
 int FUNC_1 (char const*,char const*,char const*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,int,char*,char*,char*,char const*) ;
 int FUNC_8 (char*,int) ;
 char* FUNC_9 (char*) ;
 int VAR_3 ;
 int FUNC_10 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_11(const char *VAR_4)
{
 char VAR_5[VAR_0];


 if (!FUNC_10(VAR_4, "file://", 7) && VAR_4[7] != '/')
 {
  char VAR_6[VAR_0];
  char VAR_7[VAR_0];
  FUNC_6(VAR_6, VAR_2, sizeof VAR_6);
  FUNC_8(VAR_7, sizeof VAR_7);
  FUNC_7(VAR_5, sizeof VAR_5, "file://%s/%s/%s", VAR_7, VAR_6, VAR_4+7);
  FUNC_5(VAR_5+7);
  VAR_4 = VAR_5;
 }




 const char *VAR_8 = FUNC_9("BROWSER");
 if (!VAR_8)
 {



  VAR_8 = "xdg-open";

 }
 if (FUNC_3() == 0)
 {
  FUNC_1(VAR_8, VAR_8, VAR_4, (char*)0);
  FUNC_4(VAR_3, "cannot exec '%s'\n", VAR_8);
  FUNC_2(0);
 }

}
