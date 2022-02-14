
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sdb_types; } ;
typedef TYPE_1__ RAnal ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(RAnal *VAR_0, const char *VAR_1) {
 FUNC_1 (VAR_0 && VAR_1);
 char *VAR_2 = FUNC_3 (VAR_1);
 if (VAR_2) {
  char *VAR_3 = ((void*)0);
  int VAR_4 = 0;
  while ((VAR_3 = FUNC_4 (VAR_2 + VAR_4, "=struct\n")) ||
    (VAR_3 = FUNC_4 (VAR_2 + VAR_4, "=union\n"))) {
   *VAR_3 = 0;
   if (VAR_2 + VAR_4 == VAR_3) {
    break;
   }
   char *VAR_5 = VAR_3 - 1;
   while (VAR_5 > VAR_2 && *VAR_5 != '\n') {
    VAR_5--;
   }
   if (*VAR_5 == '\n') {
    VAR_5++;
   }
   FUNC_2 (VAR_0->sdb_types, VAR_5);
   *VAR_3 = '=';
   VAR_4 = VAR_3 + 1 - VAR_2;
  }
  FUNC_0 (VAR_2);
 }
}
