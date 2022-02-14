
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_cursor_node {int srcline; int branch_from; int iter_cycles; int nr_loop_iter; int branch_flags; int branch; int sym; int map; int ip; } ;
struct callchain_cursor {int dummy; } ;


 int FUNC_0 (struct callchain_cursor*) ;
 int FUNC_1 (struct callchain_cursor*,int ,int ,int ,int ,int *,int ,int ,int ,int ) ;
 int FUNC_2 (struct callchain_cursor*) ;
 struct callchain_cursor_node* FUNC_3 (struct callchain_cursor*) ;
 int FUNC_4 (struct callchain_cursor*) ;

int FUNC_5(struct callchain_cursor *VAR_0,
      struct callchain_cursor *VAR_1)
{
 int VAR_2 = 0;

 FUNC_4(VAR_0);
 FUNC_2(VAR_1);

 while (1) {
  struct callchain_cursor_node *VAR_3;

  VAR_3 = FUNC_3(VAR_1);
  if (VAR_3 == ((void*)0))
   break;

  VAR_2 = FUNC_1(VAR_0, VAR_3->ip, VAR_3->map, VAR_3->sym,
          VAR_3->branch, &VAR_3->branch_flags,
          VAR_3->nr_loop_iter,
          VAR_3->iter_cycles,
          VAR_3->branch_from, VAR_3->srcline);
  if (VAR_2)
   break;

  FUNC_0(VAR_1);
 }

 return VAR_2;
}
