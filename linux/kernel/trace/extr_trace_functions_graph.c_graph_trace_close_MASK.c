
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {struct fgraph_data* private; } ;
struct fgraph_data {int cpu_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fgraph_data*) ;

void FUNC_2(struct trace_iterator *VAR_0)
{
 struct fgraph_data *VAR_1 = VAR_0->private;

 if (VAR_1) {
  FUNC_0(VAR_1->cpu_data);
  FUNC_1(VAR_1);
 }
}
