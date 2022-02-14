
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_scoreboard_s {size_t free_proc; unsigned int nprocs; TYPE_1__** procs; int pool; } ;
struct TYPE_2__ {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;

int FUNC_1(struct fpm_scoreboard_s *VAR_2, int *VAR_3)
{
 int VAR_4 = -1;

 if (!VAR_2 || !VAR_3) {
  return -1;
 }


 if (VAR_2->free_proc >= 0 && (unsigned int)VAR_2->free_proc < VAR_2->nprocs) {
  if (VAR_2->procs[VAR_2->free_proc] && !VAR_2->procs[VAR_2->free_proc]->used) {
   VAR_4 = VAR_2->free_proc;
  }
 }

 if (VAR_4 < 0) {
  FUNC_0(VAR_0, "[pool %s] the proc->free_slot was not free. Let's search", VAR_2->pool);
  for (VAR_4 = 0; VAR_4 < (int)VAR_2->nprocs; VAR_4++) {
   if (VAR_2->procs[VAR_4] && !VAR_2->procs[VAR_4]->used) {
    break;
   }
  }
 }


 if (VAR_4 < 0 || VAR_4 >= (int)VAR_2->nprocs) {
  FUNC_0(VAR_1, "[pool %s] no free scoreboard slot", VAR_2->pool);
  return -1;
 }

 VAR_2->procs[VAR_4]->used = 1;
 *VAR_3 = VAR_4;


 if (VAR_4 + 1 >= (int)VAR_2->nprocs) {
  VAR_2->free_proc = 0;
 } else {
  VAR_2->free_proc = VAR_4 + 1;
 }

 return 0;
}
