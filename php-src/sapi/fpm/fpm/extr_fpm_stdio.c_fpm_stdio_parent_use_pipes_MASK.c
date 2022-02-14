
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpm_child_s {int ev_stderr; void* fd_stderr; int ev_stdout; void* fd_stdout; TYPE_1__* wp; } ;
struct TYPE_4__ {scalar_t__ catch_workers_output; } ;
struct TYPE_3__ {TYPE_2__* config; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void** VAR_1 ;
 void** VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,void*,int ,int ,struct fpm_child_s*) ;
 int VAR_3 ;

int FUNC_3(struct fpm_child_s *VAR_4)
{
 if (0 == VAR_4->wp->config->catch_workers_output) {
  return 0;
 }

 FUNC_0(VAR_2[1]);
 FUNC_0(VAR_1[1]);

 VAR_4->fd_stdout = VAR_2[0];
 VAR_4->fd_stderr = VAR_1[0];

 FUNC_2(&VAR_4->ev_stdout, VAR_4->fd_stdout, VAR_0, VAR_3, VAR_4);
 FUNC_1(&VAR_4->ev_stdout, 0);

 FUNC_2(&VAR_4->ev_stderr, VAR_4->fd_stderr, VAR_0, VAR_3, VAR_4);
 FUNC_1(&VAR_4->ev_stderr, 0);
 return 0;
}
