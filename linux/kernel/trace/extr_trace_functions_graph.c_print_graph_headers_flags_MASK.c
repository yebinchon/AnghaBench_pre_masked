
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_iterator {struct trace_array* tr; } ;
struct trace_array {int trace_flags; } ;
struct seq_file {struct trace_iterator* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_array*,struct seq_file*,int ) ;
 int FUNC_1 (struct seq_file*,struct trace_iterator*) ;
 scalar_t__ FUNC_2 (struct trace_iterator*) ;

void FUNC_3(struct seq_file *VAR_2, u32 VAR_3)
{
 struct trace_iterator *VAR_4 = VAR_2->private;
 struct trace_array *VAR_5 = VAR_4->tr;

 if (!(VAR_5->trace_flags & VAR_0))
  return;

 if (VAR_5->trace_flags & VAR_1) {

  if (FUNC_2(VAR_4))
   return;

  FUNC_1(VAR_2, VAR_4);
 }

 FUNC_0(VAR_5, VAR_2, VAR_3);
}
