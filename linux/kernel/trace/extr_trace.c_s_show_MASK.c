
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int leftover; int seq; TYPE_1__* trace; scalar_t__ snapshot; scalar_t__ tr; int * ent; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int (* print_header ) (struct seq_file*) ;int name; } ;


 int FUNC_0 (struct seq_file*,struct trace_iterator*) ;
 int FUNC_1 (struct trace_iterator*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct seq_file*) ;
 int FUNC_6 (struct seq_file*) ;
 scalar_t__ FUNC_7 (struct trace_iterator*) ;
 int FUNC_8 (struct seq_file*,int *) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_0, void *VAR_1)
{
 struct trace_iterator *VAR_2 = VAR_1;
 int VAR_3;

 if (VAR_2->ent == ((void*)0)) {
  if (VAR_2->tr) {
   FUNC_2(VAR_0, "# tracer: %s\n", VAR_2->trace->name);
   FUNC_3(VAR_0, "#\n");
   FUNC_5(VAR_0);
  }
  if (VAR_2->snapshot && FUNC_7(VAR_2))
   FUNC_0(VAR_0, VAR_2);
  else if (VAR_2->trace && VAR_2->trace->print_header)
   VAR_2->trace->print_header(VAR_0);
  else
   FUNC_6(VAR_0);

 } else if (VAR_2->leftover) {




  VAR_3 = FUNC_8(VAR_0, &VAR_2->seq);


  VAR_2->leftover = VAR_3;

 } else {
  FUNC_1(VAR_2);
  VAR_3 = FUNC_8(VAR_0, &VAR_2->seq);







  VAR_2->leftover = VAR_3;
 }

 return 0;
}
