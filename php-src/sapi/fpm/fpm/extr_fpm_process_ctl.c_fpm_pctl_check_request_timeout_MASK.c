
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct fpm_worker_pool_s {struct fpm_child_s* children; TYPE_1__* config; struct fpm_worker_pool_s* next; } ;
struct fpm_child_s {struct fpm_child_s* next; } ;
struct TYPE_2__ {int request_terminate_timeout_track_finished; int request_terminate_timeout; int request_slowlog_timeout; } ;


 int FUNC_0 (struct fpm_child_s*,struct timeval*,int,int,int) ;
 struct fpm_worker_pool_s* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct timeval *VAR_1)
{
 struct fpm_worker_pool_s *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  int VAR_3 = VAR_2->config->request_terminate_timeout_track_finished;
  int VAR_4 = VAR_2->config->request_terminate_timeout;
  int VAR_5 = VAR_2->config->request_slowlog_timeout;
  struct fpm_child_s *VAR_6;

  if (VAR_4 || VAR_5) {
   for (VAR_6 = VAR_2->children; VAR_6; VAR_6 = VAR_6->next) {
    FUNC_0(VAR_6, VAR_1, VAR_4, VAR_5, VAR_3);
   }
  }
 }
}
