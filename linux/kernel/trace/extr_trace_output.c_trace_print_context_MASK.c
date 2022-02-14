
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {unsigned int cpu; int iter_flags; unsigned int ts; struct trace_entry* ent; struct trace_seq seq; struct trace_array* tr; } ;
struct trace_entry {int pid; } ;
struct trace_array {int trace_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (unsigned long long,int ) ;
 unsigned long long FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct trace_seq*,struct trace_entry*) ;
 int FUNC_5 (struct trace_seq*) ;
 int FUNC_6 (struct trace_seq*,char*,...) ;

int FUNC_7(struct trace_iterator *VAR_5)
{
 struct trace_array *VAR_6 = VAR_5->tr;
 struct trace_seq *VAR_7 = &VAR_5->seq;
 struct trace_entry *VAR_8 = VAR_5->ent;
 unsigned long long VAR_9;
 unsigned long VAR_10, VAR_11;
 char VAR_12[VAR_0];

 FUNC_2(VAR_8->pid, VAR_12);

 FUNC_6(VAR_7, "%16s-%-5d ", VAR_12, VAR_8->pid);

 if (VAR_6->trace_flags & VAR_3) {
  unsigned int VAR_13 = FUNC_3(VAR_8->pid);

  if (!VAR_13)
   FUNC_6(VAR_7, "(-----) ");
  else
   FUNC_6(VAR_7, "(%5d) ", VAR_13);
 }

 FUNC_6(VAR_7, "[%03d] ", VAR_5->cpu);

 if (VAR_6->trace_flags & VAR_2)
  FUNC_4(VAR_7, VAR_8);

 if (VAR_5->iter_flags & VAR_1) {
  VAR_9 = FUNC_1(VAR_5->ts);
  VAR_11 = FUNC_0(VAR_9, VAR_4);
  VAR_10 = (unsigned long)VAR_9;
  FUNC_6(VAR_7, " %5lu.%06lu: ", VAR_10, VAR_11);
 } else
  FUNC_6(VAR_7, " %12llu: ", VAR_5->ts);

 return !FUNC_5(VAR_7);
}
