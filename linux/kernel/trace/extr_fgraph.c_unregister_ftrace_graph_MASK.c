
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ trace_func_graph_ret_t ;
struct fgraph_ops {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct fgraph_ops *VAR_11)
{
 FUNC_1(&VAR_7);

 if (FUNC_3(!VAR_2))
  goto out;

 VAR_2--;
 VAR_6 = (trace_func_graph_ret_t)VAR_8;
 VAR_3 = VAR_4;
 VAR_1 = VAR_4;
 FUNC_0(&VAR_10, VAR_0);
 FUNC_4(&VAR_9);
 FUNC_5(VAR_5, ((void*)0));

 out:
 FUNC_2(&VAR_7);
}
