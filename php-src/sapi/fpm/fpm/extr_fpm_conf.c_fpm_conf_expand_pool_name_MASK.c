
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {int name; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,int ,char*,char*,int ,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(char **VAR_1) {
 char *VAR_2;

 if (!VAR_1 || !*VAR_1) {
  return 0;
 }

 while (*VAR_1 && (VAR_2 = FUNC_5(*VAR_1, "$pool"))) {
  char *VAR_3;
  char *VAR_4 = VAR_2 + FUNC_4("$pool");


  if (!VAR_0 || !VAR_0->config || !VAR_0->config->name) {
   return -1;
  }


  VAR_2[0] = '\0';


  FUNC_2(&VAR_3, 0, "%s%s%s", *VAR_1, VAR_0->config->name, VAR_4);


  FUNC_1(*VAR_1);
  *VAR_1 = FUNC_3(VAR_3);
  FUNC_0(VAR_3);
 }

 return 0;
}
