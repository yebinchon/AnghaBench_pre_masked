
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int iter_flags; int trace_buffer; struct trace_array* tr; } ;
struct trace_array {unsigned long trace_flags; } ;
struct seq_file {struct trace_iterator* private; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,struct seq_file*,unsigned long) ;
 int FUNC_1 (int ,struct seq_file*,unsigned long) ;
 int FUNC_2 (struct seq_file*) ;
 int FUNC_3 (struct seq_file*,struct trace_iterator*) ;
 scalar_t__ FUNC_4 (struct trace_iterator*) ;

void FUNC_5(struct seq_file *VAR_4)
{
 struct trace_iterator *VAR_5 = VAR_4->private;
 struct trace_array *VAR_6 = VAR_5->tr;
 unsigned long VAR_7 = VAR_6->trace_flags;

 if (!(VAR_7 & VAR_1))
  return;

 if (VAR_5->iter_flags & VAR_0) {

  if (FUNC_4(VAR_5))
   return;
  FUNC_3(VAR_4, VAR_5);
  if (!(VAR_7 & VAR_3))
   FUNC_2(VAR_4);
 } else {
  if (!(VAR_7 & VAR_3)) {
   if (VAR_7 & VAR_2)
    FUNC_1(VAR_5->trace_buffer,
          VAR_4, VAR_7);
   else
    FUNC_0(VAR_5->trace_buffer, VAR_4,
             VAR_7);
  }
 }
}
