
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trace_iterator {int cpu; struct fgraph_data* private; } ;
struct fgraph_data {int cpu_data; } ;
struct TYPE_2__ {int depth_irq; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct trace_iterator *VAR_1, u32 VAR_2, int VAR_3)
{
 int VAR_4 = VAR_1->cpu;
 int *VAR_5;
 struct fgraph_data *VAR_6 = VAR_1->private;






 if ((VAR_2 & VAR_0) ||
     (!VAR_6))
  return 0;

 VAR_5 = &(FUNC_0(VAR_6->cpu_data, VAR_4)->depth_irq);




 if (*VAR_5 == -1)
  return 0;
 if (*VAR_5 >= VAR_3) {
  *VAR_5 = -1;
  return 1;
 }




 return 1;
}
