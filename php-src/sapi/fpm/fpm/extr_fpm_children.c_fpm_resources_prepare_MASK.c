
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {int scoreboard; TYPE_1__* config; } ;
struct fpm_child_s {int fd_stdout; int fd_stderr; int scoreboard_i; struct fpm_worker_pool_s* wp; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 struct fpm_child_s* FUNC_0 () ;
 int FUNC_1 (struct fpm_child_s*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct fpm_child_s*) ;
 scalar_t__ FUNC_4 (struct fpm_child_s*) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static struct fpm_child_s *FUNC_6(struct fpm_worker_pool_s *VAR_1)
{
 struct fpm_child_s *VAR_2;

 VAR_2 = FUNC_0();

 if (!VAR_2) {
  FUNC_5(VAR_0, "[pool %s] unable to malloc new child", VAR_1->config->name);
  return 0;
 }

 VAR_2->wp = VAR_1;
 VAR_2->fd_stdout = -1; VAR_2->fd_stderr = -1;

 if (0 > FUNC_4(VAR_2)) {
  FUNC_1(VAR_2);
  return 0;
 }

 if (0 > FUNC_2(VAR_1->scoreboard, &VAR_2->scoreboard_i)) {
  FUNC_3(VAR_2);
  FUNC_1(VAR_2);
  return 0;
 }

 return VAR_2;
}
