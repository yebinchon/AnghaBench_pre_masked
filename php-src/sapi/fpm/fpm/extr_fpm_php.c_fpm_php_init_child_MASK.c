
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpm_worker_pool_s {int * limit_extensions; } ;


 scalar_t__ FUNC_0 (struct fpm_worker_pool_s*) ;
 scalar_t__ FUNC_1 (struct fpm_worker_pool_s*) ;
 int * VAR_0 ;

int FUNC_2(struct fpm_worker_pool_s *VAR_1)
{
 if (0 > FUNC_0(VAR_1) ||
  0 > FUNC_1(VAR_1)) {
  return -1;
 }

 if (VAR_1->limit_extensions) {

  VAR_0 = VAR_1->limit_extensions;
  VAR_1->limit_extensions = ((void*)0);
 }
 return 0;
}
