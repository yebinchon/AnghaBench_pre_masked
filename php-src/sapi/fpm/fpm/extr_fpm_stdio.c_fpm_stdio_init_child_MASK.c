
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {int dummy; } ;
struct TYPE_2__ {int error_log_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int) ;

int FUNC_3(struct fpm_worker_pool_s *VAR_2)
{
 if (VAR_1.error_log_fd > 0) {
  FUNC_0(VAR_1.error_log_fd);
 }
 VAR_1.error_log_fd = -1;
 FUNC_2(-1);

 return 0;
}
