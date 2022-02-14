
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_worker_pool_s {int idle_spawn_rate; int log_fd; } ;


 struct fpm_worker_pool_s* FUNC_0 (int) ;
 int FUNC_1 (struct fpm_worker_pool_s*,int ,int) ;

struct fpm_worker_pool_s *FUNC_2()
{
 struct fpm_worker_pool_s *VAR_0;

 VAR_0 = FUNC_0(sizeof(struct fpm_worker_pool_s));
 if (!VAR_0) {
  return 0;
 }

 FUNC_1(VAR_0, 0, sizeof(struct fpm_worker_pool_s));

 VAR_0->idle_spawn_rate = 1;
 VAR_0->log_fd = -1;
 return VAR_0;
}
