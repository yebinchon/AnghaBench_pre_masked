
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {char* name; } ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static bool FUNC_1(struct sway_workspace *VAR_0, void *VAR_1) {
 char *VAR_2 = VAR_1;
 char *VAR_3 = VAR_0->name;
 while (FUNC_0(*VAR_2)) {
  if (*VAR_2++ != *VAR_3++) {
   return 0;
  }
 }
 return !FUNC_0(*VAR_3);
}
