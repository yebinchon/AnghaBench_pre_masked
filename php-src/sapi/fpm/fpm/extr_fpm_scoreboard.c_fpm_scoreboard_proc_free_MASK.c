
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_scoreboard_s {unsigned int nprocs; int free_proc; TYPE_1__** procs; } ;
struct fpm_scoreboard_proc_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ used; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(struct fpm_scoreboard_s *VAR_0, int VAR_1)
{
 if (!VAR_0) {
  return;
 }

 if (VAR_1 < 0 || (unsigned int)VAR_1 >= VAR_0->nprocs) {
  return;
 }

 if (VAR_0->procs[VAR_1] && VAR_0->procs[VAR_1]->used > 0) {
  FUNC_0(VAR_0->procs[VAR_1], 0, sizeof(struct fpm_scoreboard_proc_s));
 }


 VAR_0->free_proc = VAR_1;
}
