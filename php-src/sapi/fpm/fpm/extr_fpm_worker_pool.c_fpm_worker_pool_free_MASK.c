
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_worker_pool_s {scalar_t__ limit_extensions; struct fpm_worker_pool_s* home; struct fpm_worker_pool_s* user; struct fpm_worker_pool_s* config; } ;


 int FUNC_0 (struct fpm_worker_pool_s*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fpm_worker_pool_s*) ;

void FUNC_3(struct fpm_worker_pool_s *VAR_0)
{
 if (VAR_0->config) {
  FUNC_2(VAR_0->config);
 }
 if (VAR_0->user) {
  FUNC_2(VAR_0->user);
 }
 if (VAR_0->home) {
  FUNC_2(VAR_0->home);
 }
 if (VAR_0->limit_extensions) {
  FUNC_1(VAR_0->limit_extensions);
 }
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
