
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ libgdbr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char*) ;

int FUNC_5(libgdbr_t *VAR_0) {
 if (!VAR_0 || !VAR_0->data || !*VAR_0->data) {
  return -1;
 }
 char *VAR_1 = FUNC_2 (VAR_0->data);
 char *VAR_2 = FUNC_4 (VAR_1, ";");
 if (!VAR_2) {
  FUNC_0 (VAR_1);
  return -1;
 }

 if (FUNC_3 (VAR_2, "T0", 2)) {
  FUNC_1 (VAR_0);
  FUNC_0 (VAR_1);
  return -1;
 }

 while (VAR_2 != ((void*)0)) {
  if (!FUNC_3 (VAR_2, "tnotrun:0", 9)) {
   FUNC_0 (VAR_1);
   return FUNC_1 (VAR_0);
  }
  VAR_2 = FUNC_4 (((void*)0), ";");
 }
 FUNC_1 (VAR_0);
 FUNC_0 (VAR_1);
 return -1;
}
