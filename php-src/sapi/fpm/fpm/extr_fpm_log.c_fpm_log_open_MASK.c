
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {int log_fd; TYPE_1__* config; struct fpm_worker_pool_s* next; } ;
struct TYPE_2__ {int access_log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (int ) ;
 struct fpm_worker_pool_s* VAR_12 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(int VAR_13)
{
 struct fpm_worker_pool_s *VAR_14;
 int VAR_15 = 1;

 int VAR_16;
 for (VAR_14 = VAR_12; VAR_14; VAR_14 = VAR_14->next) {
  if (!VAR_14->config->access_log) {
   continue;
  }
  VAR_15 = 0;

  VAR_16 = FUNC_4(VAR_14->config->access_log, VAR_5 | VAR_3 | VAR_4, VAR_7 | VAR_8);
  if (0 > VAR_16) {
   FUNC_5(VAR_10, "failed to open access log (%s)", VAR_14->config->access_log);
   return -1;
  } else {
   FUNC_5(VAR_9, "open access log (%s)", VAR_14->config->access_log);
  }

  if (VAR_13) {
   FUNC_1(VAR_16, VAR_14->log_fd);
   FUNC_0(VAR_16);
   VAR_16 = VAR_14->log_fd;
   FUNC_3(VAR_6);
  } else {
   VAR_14->log_fd = VAR_16;
  }

  if (0 > FUNC_2(VAR_16, VAR_2, FUNC_2(VAR_16, VAR_1) | VAR_0)) {
   FUNC_5(VAR_11, "failed to change attribute of access_log");
  }
 }

 return VAR_15;
}
