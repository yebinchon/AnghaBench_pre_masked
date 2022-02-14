
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RListIter ;
typedef int RList ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

int FUNC_5(RList *VAR_0, char **VAR_1, int *VAR_2, char ***VAR_3) {
 int VAR_4 = 0, VAR_5 = 0;

 RListIter *VAR_6 = FUNC_4 (VAR_0);
 while (FUNC_3 (VAR_6)) {
  (void) FUNC_2 (VAR_6);
  *VAR_2 = *VAR_2 + 1;
 }
 if (!*VAR_2) {
  return 0;
 }
 *VAR_1 = (char *) FUNC_0 (*VAR_2 + 1);
 FUNC_1 (*VAR_1, 0, *VAR_2 + 1);

 VAR_5 = sizeof *VAR_3 * (*VAR_2);
 *VAR_3 = (char **) FUNC_0 (VAR_5);
 for (VAR_4 = 0; VAR_4 < *VAR_2; VAR_4++) {
  (*VAR_3)[VAR_4] = 0;
 }
 return 1;
}
