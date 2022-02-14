
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct fpm_worker_pool_config_s {int pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static char *FUNC_2(zval *VAR_3, void **VAR_4, intptr_t VAR_5)
{
 char *VAR_6 = FUNC_0(VAR_3);
 struct fpm_worker_pool_config_s *VAR_7 = *VAR_4;
 if (!FUNC_1(VAR_6, "static")) {
  VAR_7->pm = VAR_2;
 } else if (!FUNC_1(VAR_6, "dynamic")) {
  VAR_7->pm = VAR_0;
 } else if (!FUNC_1(VAR_6, "ondemand")) {
  VAR_7->pm = VAR_1;
 } else {
  return "invalid process manager (static, dynamic or ondemand)";
 }
 return ((void*)0);
}
