
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {int log_fd; struct fpm_worker_pool_s* next; TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ access_format; scalar_t__* access_log; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fpm_worker_pool_s* VAR_2 ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct fpm_worker_pool_s *VAR_3)
{
 if (!VAR_3 || !VAR_3->config) {
  return -1;
 }

 if (VAR_3->config->access_log && *VAR_3->config->access_log) {
  if (VAR_3->config->access_format) {
   VAR_1 = FUNC_1(VAR_3->config->access_format);
  }
 }

 if (VAR_0 == -1) {
  VAR_0 = VAR_3->log_fd;
 }


 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->log_fd > -1 && VAR_3->log_fd != VAR_0) {
   FUNC_0(VAR_3->log_fd);
   VAR_3->log_fd = -1;
  }
 }

 return 0;
}
