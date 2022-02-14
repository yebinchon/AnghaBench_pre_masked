
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct trace_iterator *VAR_3, u32 VAR_4,
  unsigned long VAR_5, int VAR_6)
{
 int VAR_7 = VAR_3->cpu;
 int *VAR_8;
 struct fgraph_data *VAR_9 = VAR_3->private;






 if ((VAR_4 & VAR_0) ||
     (!VAR_9))
  return 0;

 VAR_8 = &(FUNC_0(VAR_9->cpu_data, VAR_7)->depth_irq);




 if (*VAR_8 >= 0)
  return 1;

 if ((VAR_5 < (unsigned long)VAR_2) ||
     (VAR_5 >= (unsigned long)VAR_1))
  return 0;




 *VAR_8 = VAR_6;
 return 1;
}
