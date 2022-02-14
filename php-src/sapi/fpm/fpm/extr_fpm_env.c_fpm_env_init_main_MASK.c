
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {struct fpm_worker_pool_s* next; } ;
struct TYPE_2__ {int argc; char** argv; int config; } ;


 int FUNC_0 (char*) ;
 char** VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct fpm_worker_pool_s*) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_3 ;
 struct fpm_worker_pool_s* VAR_4 ;
 char** FUNC_3 (unsigned int) ;
 int FUNC_4 (char**,int ,char*,int ) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

int FUNC_7()
{
 struct fpm_worker_pool_s *VAR_5;
 char *VAR_6;

 for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next) {
  if (0 > FUNC_1(VAR_5)) {
   return -1;
  }
 }


 int VAR_7;
 char *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_3.argc; VAR_7++) {
  if (VAR_8 == ((void*)0)) {
   VAR_8 = VAR_3.argv[VAR_7];
  }
  if (VAR_9 == ((void*)0) || VAR_3.argv[VAR_7] == VAR_9 + 1) {
   VAR_9 = VAR_3.argv[VAR_7] + FUNC_6(VAR_3.argv[VAR_7]);
  }
 }
 if (VAR_0) {
  for (VAR_7 = 0; VAR_0[VAR_7]; VAR_7++) {
   if (VAR_8 == ((void*)0)) {
    VAR_8 = VAR_0[VAR_7];
   }
   if (VAR_9 == ((void*)0) || VAR_0[VAR_7] == VAR_9 + 1) {
    VAR_9 = VAR_0[VAR_7] + FUNC_6(VAR_0[VAR_7]);
   }
  }
 }
 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
  return 0;
 }

 VAR_2 = VAR_9 - VAR_8;
 VAR_1 = VAR_3.argv;
 if (VAR_0 != ((void*)0)) {
  char **VAR_10;
  unsigned int VAR_11 = 0U;

  while (VAR_0[VAR_11]) {
   VAR_11++;
  }

  if ((VAR_10 = FUNC_3((1U + VAR_11) * sizeof (char *))) == ((void*)0)) {
   return -1;
  }
  VAR_10[VAR_11] = ((void*)0);
  while (VAR_11 > 0U) {
   VAR_11--;
   VAR_10[VAR_11] = FUNC_5(VAR_0[VAR_11]);
  }
  VAR_0 = VAR_10;
 }



 FUNC_4(&VAR_6, 0, "master process (%s)", VAR_3.config);
 FUNC_2(VAR_6);
 FUNC_0(VAR_6);
 return 0;
}
