
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; scalar_t__ curr; } ;
struct dl_rq {scalar_t__ this_bw; scalar_t__ running_bw; int dl_bw; void* pushable_dl_tasks_root; scalar_t__ overloaded; scalar_t__ dl_nr_migratory; TYPE_1__ earliest_dl; void* root; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dl_rq*) ;

void FUNC_2(struct dl_rq *VAR_1)
{
 VAR_1->root = VAR_0;
 FUNC_0(&VAR_1->dl_bw);


 VAR_1->running_bw = 0;
 VAR_1->this_bw = 0;
 FUNC_1(VAR_1);
}
