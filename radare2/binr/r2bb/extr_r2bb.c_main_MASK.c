
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* cmd; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char const*) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(int VAR_1, char **VAR_2) {
 int VAR_3;
 for (VAR_3 = 0; VAR_0[VAR_3].cmd; VAR_3++) {
  if (!FUNC_2 (VAR_0[VAR_3].cmd, VAR_2[0])) {
   const char *VAR_4 = VAR_1 > 1? VAR_2[1]: ((void*)0);
   return FUNC_1 (VAR_3, VAR_4);
  }
 }
 if (VAR_1 > 1) {
  for (VAR_3 = 0; VAR_0[VAR_3].cmd; VAR_3++) {
   if (!FUNC_2 (VAR_0[VAR_3].cmd, VAR_2[1])) {
    const char *VAR_5 = VAR_1 > 2? VAR_2[2]: ((void*)0);
    return FUNC_1 (VAR_3, VAR_5);
   }
  }
 }
 for (VAR_3 = 0; VAR_0[VAR_3].cmd; VAR_3++) {
  FUNC_0 ("%s\n", VAR_0[VAR_3].cmd);
 }
 return 1;
}
