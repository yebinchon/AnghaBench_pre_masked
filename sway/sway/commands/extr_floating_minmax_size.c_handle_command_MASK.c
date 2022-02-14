
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_results {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char**,int) ;

__attribute__((used)) static struct cmd_results *FUNC_4(int VAR_3, char **VAR_4, char *VAR_5,
  const char *VAR_6, int *VAR_7, int *VAR_8) {
 struct cmd_results *VAR_9;
 if ((VAR_9 = FUNC_0(VAR_3, VAR_5, VAR_2, 3))) {
  return VAR_9;
 }

 char *VAR_10;
 int VAR_11 = (int)FUNC_3(VAR_4[0], &VAR_10, 10);
 if (*VAR_10) {
  return FUNC_1(VAR_0, VAR_5, VAR_6);
 }

 if (FUNC_2(VAR_4[1], "x") != 0) {
  return FUNC_1(VAR_0, VAR_5, VAR_6);
 }

 int VAR_12 = (int)FUNC_3(VAR_4[2], &VAR_10, 10);
 if (*VAR_10) {
  return FUNC_1(VAR_0, VAR_5, VAR_6);
 }

 *VAR_7 = VAR_11;
 *VAR_8 = VAR_12;

 return FUNC_1(VAR_1, ((void*)0));
}
