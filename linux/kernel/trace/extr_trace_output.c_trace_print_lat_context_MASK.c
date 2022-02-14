
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int ent_size; int cpu; int idx; int ts; struct trace_entry* ent; struct trace_seq seq; struct trace_array* tr; } ;
struct trace_entry {int preempt_count; int flags; int pid; } ;
struct trace_array {unsigned long trace_flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct trace_seq*,struct trace_entry*,int ) ;
 int FUNC_1 (struct trace_iterator*,int ) ;
 int FUNC_2 (int ,char*) ;
 struct trace_entry* FUNC_3 (struct trace_iterator*,int *,int *) ;
 int FUNC_4 (struct trace_seq*) ;
 int FUNC_5 (struct trace_seq*,char*,char*,int ,int ,int ,int ,int ) ;

int FUNC_6(struct trace_iterator *VAR_2)
{
 struct trace_array *VAR_3 = VAR_2->tr;

 int VAR_4 = VAR_2->ent_size;
 struct trace_seq *VAR_5 = &VAR_2->seq;
 u64 VAR_6;
 struct trace_entry *VAR_7 = VAR_2->ent,
      *VAR_8 = FUNC_3(VAR_2, ((void*)0),
              &VAR_6);
 unsigned long VAR_9 = (VAR_3->trace_flags & VAR_1);


 VAR_2->ent_size = VAR_4;

 if (!VAR_8)
  VAR_6 = VAR_2->ts;

 if (VAR_9) {
  char VAR_10[VAR_0];

  FUNC_2(VAR_7->pid, VAR_10);

  FUNC_5(
   VAR_5, "%16s %5d %3d %d %08x %08lx ",
   VAR_10, VAR_7->pid, VAR_2->cpu, VAR_7->flags,
   VAR_7->preempt_count, VAR_2->idx);
 } else {
  FUNC_0(VAR_5, VAR_7, VAR_2->cpu);
 }

 FUNC_1(VAR_2, VAR_6);

 return !FUNC_4(VAR_5);
}
