
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct symbol {int dummy; } ;
struct map {int dummy; } ;
struct callchain_cursor_node {int branch; int nr_loop_iter; char const* srcline; struct callchain_cursor_node* next; void* branch_from; int branch_flags; void* iter_cycles; struct symbol* sym; int map; void* ip; } ;
struct callchain_cursor {struct callchain_cursor_node** last; int nr; } ;
struct branch_flags {int dummy; } ;


 int VAR_0 ;
 struct callchain_cursor_node* FUNC_0 (int,int) ;
 int FUNC_1 (struct map*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct branch_flags*,int) ;

int FUNC_4(struct callchain_cursor *VAR_1,
       u64 VAR_2, struct map *VAR_3, struct symbol *VAR_4,
       bool VAR_5, struct branch_flags *VAR_6,
       int VAR_7, u64 VAR_8, u64 VAR_9,
       const char *VAR_10)
{
 struct callchain_cursor_node *VAR_11 = *VAR_1->last;

 if (!VAR_11) {
  VAR_11 = FUNC_0(1, sizeof(*VAR_11));
  if (!VAR_11)
   return -VAR_0;

  *VAR_1->last = VAR_11;
 }

 VAR_11->ip = VAR_2;
 FUNC_2(VAR_11->map);
 VAR_11->map = FUNC_1(VAR_3);
 VAR_11->sym = VAR_4;
 VAR_11->branch = VAR_5;
 VAR_11->nr_loop_iter = VAR_7;
 VAR_11->iter_cycles = VAR_8;
 VAR_11->srcline = VAR_10;

 if (VAR_6)
  FUNC_3(&VAR_11->branch_flags, VAR_6,
   sizeof(struct branch_flags));

 VAR_11->branch_from = VAR_9;
 VAR_1->nr++;

 VAR_1->last = &VAR_11->next;

 return 0;
}
