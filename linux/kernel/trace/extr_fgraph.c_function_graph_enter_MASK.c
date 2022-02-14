
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ftrace_graph_ent {unsigned long func; scalar_t__ depth; } ;
struct TYPE_2__ {scalar_t__ curr_ret_depth; int curr_ret_stack; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct ftrace_graph_ent*) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long*) ;

int FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
    unsigned long VAR_4, unsigned long *VAR_5)
{
 struct ftrace_graph_ent VAR_6;

 VAR_6.func = VAR_3;
 VAR_6.depth = ++VAR_1->curr_ret_depth;

 if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5))
  goto out;


 if (!FUNC_0(&VAR_6))
  goto out_ret;

 return 0;
 out_ret:
 VAR_1->curr_ret_stack--;
 out:
 VAR_1->curr_ret_depth--;
 return -VAR_0;
}
