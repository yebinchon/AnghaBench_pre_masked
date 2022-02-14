
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, char **VAR_1) {
 int VAR_2 = 0;

 VAR_2 = FUNC_2 ("fieldlist ");
 *VAR_1 = (char *) FUNC_0 (VAR_2 + 1);
 if (!(*VAR_1)) {
  return;
 }

 FUNC_1 (*VAR_1, "fieldlist ");
}
