
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct callchain_node {int val; scalar_t__ val_nr; } ;
struct TYPE_5__ {int branch_to; } ;
struct TYPE_4__ {int map; int sym; } ;
struct callchain_list {int branch_count; int predicted_count; int abort_count; int list; int iter_cycles; int iter_count; int cycles_count; TYPE_2__ brtype_stat; int srcline; TYPE_1__ ms; int ip; } ;
struct TYPE_6__ {int cycles; scalar_t__ abort; scalar_t__ predicted; } ;
struct callchain_cursor_node {int iter_cycles; int nr_loop_iter; TYPE_3__ branch_flags; int ip; int branch_from; scalar_t__ branch; int srcline; int map; int sym; } ;
struct callchain_cursor {scalar_t__ pos; scalar_t__ nr; } ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*,int ,int ) ;
 int FUNC_1 (struct callchain_cursor*) ;
 struct callchain_cursor_node* FUNC_2 (struct callchain_cursor*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 struct callchain_list* FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct callchain_node *VAR_0, struct callchain_cursor *VAR_1)
{
 struct callchain_cursor_node *VAR_2;

 VAR_0->val_nr = VAR_1->nr - VAR_1->pos;
 if (!VAR_0->val_nr)
  FUNC_6("Warning: empty node in callchain tree\n");

 VAR_2 = FUNC_2(VAR_1);

 while (VAR_2) {
  struct callchain_list *VAR_3;

  VAR_3 = FUNC_7(sizeof(*VAR_3));
  if (!VAR_3) {
   FUNC_5("not enough memory for the code path tree");
   return -1;
  }
  VAR_3->ip = VAR_2->ip;
  VAR_3->ms.sym = VAR_2->sym;
  VAR_3->ms.map = FUNC_4(VAR_2->map);
  VAR_3->srcline = VAR_2->srcline;

  if (VAR_2->branch) {
   VAR_3->branch_count = 1;

   if (VAR_2->branch_from) {




    VAR_3->brtype_stat.branch_to = 1;

    if (VAR_2->branch_flags.predicted)
     VAR_3->predicted_count = 1;

    if (VAR_2->branch_flags.abort)
     VAR_3->abort_count = 1;

    FUNC_0(&VAR_3->brtype_stat,
        &VAR_2->branch_flags,
        VAR_2->branch_from,
        VAR_2->ip);
   } else {



    VAR_3->brtype_stat.branch_to = 0;
    VAR_3->cycles_count =
     VAR_2->branch_flags.cycles;
    VAR_3->iter_count = VAR_2->nr_loop_iter;
    VAR_3->iter_cycles = VAR_2->iter_cycles;
   }
  }

  FUNC_3(&VAR_3->list, &VAR_0->val);

  FUNC_1(VAR_1);
  VAR_2 = FUNC_2(VAR_1);
 }
 return 0;
}
