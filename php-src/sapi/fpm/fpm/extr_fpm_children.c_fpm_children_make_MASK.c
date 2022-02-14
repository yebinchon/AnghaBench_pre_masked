
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fpm_worker_pool_s {int running_children; TYPE_1__* config; } ;
struct fpm_child_s {int pid; int started; } ;
typedef int pid_t ;
struct TYPE_6__ {int process_max; } ;
struct TYPE_5__ {int running_children; int is_child; } ;
struct TYPE_4__ {scalar_t__ pm; int pm_start_servers; int pm_max_children; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct fpm_worker_pool_s*) ;
 int FUNC_2 (struct fpm_child_s*) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_4 (struct fpm_child_s*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct fpm_child_s*) ;
 struct fpm_child_s* FUNC_7 (struct fpm_worker_pool_s*) ;
 int FUNC_8 (int ,char*,...) ;

int FUNC_9(struct fpm_worker_pool_s *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 pid_t VAR_12;
 struct fpm_child_s *VAR_13;
 int VAR_14;
 static int VAR_15 = 0;

 if (VAR_8->config->pm == VAR_0) {
  if (!VAR_9) {
   VAR_14 = VAR_8->config->pm_start_servers;
  } else {
   VAR_14 = VAR_8->running_children + VAR_10;
  }
 } else if (VAR_8->config->pm == VAR_1) {
  if (!VAR_9) {
   VAR_14 = 0;
  } else {
   VAR_14 = VAR_8->running_children + VAR_10;
  }
 } else {
  VAR_14 = VAR_8->config->pm_max_children;
 }
 while (FUNC_5() && VAR_8->running_children < VAR_14 && (VAR_6.process_max < 1 || VAR_7.running_children < VAR_6.process_max)) {

  VAR_15 = 0;
  VAR_13 = FUNC_7(VAR_8);

  if (!VAR_13) {
   return 2;
  }

  VAR_12 = FUNC_0();

  switch (VAR_12) {

   case 0 :
    FUNC_2(VAR_13);
    VAR_7.is_child = 1;
    FUNC_1(VAR_8);
    return 0;

   case -1 :
    FUNC_8(VAR_4, "fork() failed");

    FUNC_6(VAR_13);
    return 2;

   default :
    VAR_13->pid = VAR_12;
    FUNC_3(&VAR_13->started);
    FUNC_4(VAR_13);

    FUNC_8(VAR_11 ? VAR_2 : VAR_3, "[pool %s] child %d started", VAR_8->config->name, (int) VAR_12);
  }

 }

 if (!VAR_15 && VAR_6.process_max > 0 && VAR_7.running_children >= VAR_6.process_max) {
               if (VAR_8->running_children < VAR_14) {
                       VAR_15 = 1;
                       FUNC_8(VAR_5, "The maximum number of processes has been reached. Please review your configuration and consider raising 'process.max'");
               }
 }

 return 1;
}
