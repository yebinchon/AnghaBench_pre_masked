
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int iter_flags; struct trace_array* tr; } ;
struct trace_array {int trace_flags; } ;
struct seq_file {struct trace_iterator* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*) ;
 int FUNC_1 (struct seq_file*,struct trace_iterator*) ;
 scalar_t__ FUNC_2 (struct trace_iterator*) ;

void FUNC_3(struct seq_file *VAR_2)
{
 struct trace_iterator *VAR_3 = VAR_2->private;
 struct trace_array *VAR_4 = VAR_3->tr;


 if (FUNC_2(VAR_3))
  return;

 if (VAR_3->iter_flags & VAR_0)
  FUNC_1(VAR_2, VAR_3);

 if (!(VAR_4->trace_flags & VAR_1))
  FUNC_0(VAR_2);
}
