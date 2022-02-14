
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int cpu_file; scalar_t__ snapshot; TYPE_1__* trace; } ;
struct seq_file {struct trace_iterator* private; } ;
struct TYPE_2__ {scalar_t__ use_max_tr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_1, void *VAR_2)
{
 struct trace_iterator *VAR_3 = VAR_1->private;






 if (!VAR_3->snapshot)
  FUNC_0(&VAR_0);

 FUNC_1(VAR_3->cpu_file);
 FUNC_2();
}
