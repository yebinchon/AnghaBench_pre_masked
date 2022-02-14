
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tracer_opt {int bit; scalar_t__ name; } ;
struct trace_array {int trace_flags; TYPE_2__* current_trace; } ;
struct seq_file {struct trace_array* private; } ;
struct TYPE_4__ {TYPE_1__* flags; } ;
struct TYPE_3__ {int val; struct tracer_opt* opts; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,char*,scalar_t__) ;
 scalar_t__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct tracer_opt *VAR_4;
 struct trace_array *VAR_5 = VAR_2->private;
 u32 VAR_6;
 int VAR_7;

 FUNC_0(&VAR_1);
 VAR_6 = VAR_5->current_trace->flags->val;
 VAR_4 = VAR_5->current_trace->flags->opts;

 for (VAR_7 = 0; VAR_0[VAR_7]; VAR_7++) {
  if (VAR_5->trace_flags & (1 << VAR_7))
   FUNC_2(VAR_2, "%s\n", VAR_0[VAR_7]);
  else
   FUNC_2(VAR_2, "no%s\n", VAR_0[VAR_7]);
 }

 for (VAR_7 = 0; VAR_4[VAR_7].name; VAR_7++) {
  if (VAR_6 & VAR_4[VAR_7].bit)
   FUNC_2(VAR_2, "%s\n", VAR_4[VAR_7].name);
  else
   FUNC_2(VAR_2, "no%s\n", VAR_4[VAR_7].name);
 }
 FUNC_1(&VAR_1);

 return 0;
}
