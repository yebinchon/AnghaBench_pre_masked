
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_worker_pool_s {TYPE_1__* config; } ;
struct TYPE_4__ {char* prefix; } ;
struct TYPE_3__ {char* prefix; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,int ,char*,char*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(char **VAR_3, struct fpm_worker_pool_s *VAR_4, char *VAR_5, int VAR_6)
{
 char *VAR_7 = ((void*)0);
 char *VAR_8;

 if (!VAR_3 || !*VAR_3 || **VAR_3 == '/') {
  return 0;
 }

 if (VAR_4 && VAR_4->config) {
  VAR_7 = VAR_4->config->prefix;
 }


 if (VAR_7 == ((void*)0)) {
  VAR_7 = VAR_2.prefix;
 }


 if (VAR_7 == ((void*)0)) {
  VAR_7 = VAR_5 ? VAR_5 : VAR_0;
 }

 if (VAR_6) {
  char *VAR_9;
  VAR_9 = FUNC_5(*VAR_3, "$prefix");
  if (VAR_9 != ((void*)0)) {

   if (VAR_9 != *VAR_3) {
    FUNC_6(VAR_1, "'$prefix' must be use at the beginning of the value");
    return -1;
   }

   if (FUNC_4(*VAR_3) > FUNC_4("$prefix")) {
    FUNC_1(*VAR_3);
    VAR_9 = FUNC_3((*VAR_3) + FUNC_4("$prefix"));
    *VAR_3 = VAR_9;
   } else {
    FUNC_1(*VAR_3);
    *VAR_3 = ((void*)0);
   }
  }
 }

 if (*VAR_3) {
  FUNC_2(&VAR_8, 0, "%s/%s", VAR_7, *VAR_3);
  FUNC_1(*VAR_3);
  *VAR_3 = FUNC_3(VAR_8);
  FUNC_0(VAR_8);
 } else {
  *VAR_3 = FUNC_3(VAR_7);
 }

 if (**VAR_3 != '/' && VAR_4 != ((void*)0) && VAR_4->config) {
  return FUNC_7(VAR_3, ((void*)0), VAR_5, VAR_6);
 }
 return 0;
}
