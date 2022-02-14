
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int ) ;

int FUNC_11(int VAR_3, char **VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;


 VAR_5 = FUNC_9(VAR_4[0]);
 if (!VAR_5)
  FUNC_5("strdup - %s\n", FUNC_10(VAR_0));
 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = FUNC_9(VAR_6);
 if (!VAR_7)
  FUNC_5("strdup - %s\n", FUNC_10(VAR_0));
 FUNC_3(VAR_5);

 VAR_1 = FUNC_4();

 if (FUNC_2()) {
  FUNC_6();
  FUNC_8(12);
  FUNC_7("[RUN]\t+++ Tests with uid == 0 +++\n");
  return FUNC_1(0, VAR_7);
 }

 FUNC_7("==================================================\n");

 if (FUNC_2()) {
  FUNC_6();
  FUNC_8(9);
  FUNC_7("[RUN]\t+++ Tests with uid != 0 +++\n");
  return FUNC_1(1, VAR_7);
 }

 return VAR_2 ? 1 : 0;
}
