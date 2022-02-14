
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char**) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(char *VAR_4)
{
 char VAR_5[VAR_1];
 char VAR_6[VAR_1];
 char VAR_7[VAR_1];
 char VAR_8[VAR_1];
 char *VAR_9 = FUNC_5("PSQLRC");

 if (FUNC_2(VAR_4, VAR_7) < 0)
 {
  FUNC_6("could not find own program executable");
  FUNC_0(VAR_0);
 }

 FUNC_3(VAR_7, VAR_8);

 FUNC_9(VAR_6, VAR_1, "%s/%s", VAR_8, VAR_3);
 FUNC_7(VAR_6);

 if (VAR_9 != ((void*)0) && FUNC_10(VAR_9) > 0)
 {

  char *VAR_10 = FUNC_8(VAR_9);

  FUNC_1(&VAR_10);
  FUNC_7(VAR_10);
 }
 else if (FUNC_4(VAR_5))
 {
  FUNC_9(VAR_6, VAR_1, "%s/%s", VAR_5, VAR_2);
  FUNC_7(VAR_6);
 }
}
