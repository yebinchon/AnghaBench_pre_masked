
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userstack_entry {unsigned long* caller; int tgid; } ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; struct trace_array* tr; } ;
struct trace_event {int dummy; } ;
struct trace_array {int trace_flags; } ;
struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct task_struct* FUNC_0 (int ) ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct trace_seq*,struct mm_struct*,unsigned long,int) ;
 int FUNC_6 (struct userstack_entry*,int ) ;
 int FUNC_7 (struct trace_seq*) ;
 scalar_t__ FUNC_8 (struct trace_seq*) ;
 int FUNC_9 (struct trace_seq*,char) ;
 int FUNC_10 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t FUNC_11(struct trace_iterator *VAR_2,
      int VAR_3, struct trace_event *VAR_4)
{
 struct trace_array *VAR_5 = VAR_2->tr;
 struct userstack_entry *VAR_6;
 struct trace_seq *VAR_7 = &VAR_2->seq;
 struct mm_struct *VAR_8 = ((void*)0);
 unsigned int VAR_9;

 FUNC_6(VAR_6, VAR_2->ent);

 FUNC_10(VAR_7, "<user stack trace>\n");

 if (VAR_5->trace_flags & VAR_1) {
  struct task_struct *VAR_10;




  FUNC_3();
  VAR_10 = FUNC_0(VAR_6->tgid);
  if (VAR_10)
   VAR_8 = FUNC_1(VAR_10);
  FUNC_4();
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  unsigned long VAR_11 = VAR_6->caller[VAR_9];

  if (!VAR_11 || FUNC_8(VAR_7))
   break;

  FUNC_10(VAR_7, " => ");
  FUNC_5(VAR_7, VAR_8, VAR_11, VAR_3);
  FUNC_9(VAR_7, '\n');
 }

 if (VAR_8)
  FUNC_2(VAR_8);

 return FUNC_7(VAR_7);
}
