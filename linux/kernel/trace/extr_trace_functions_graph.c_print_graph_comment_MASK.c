
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int len; } ;
struct trace_seq {char* buffer; TYPE_3__ seq; } ;
struct trace_iterator {TYPE_1__* ent; int cpu; struct fgraph_data* private; struct trace_array* tr; } ;
struct trace_event {TYPE_2__* funcs; } ;
struct trace_entry {int type; } ;
struct trace_array {unsigned long trace_flags; } ;
struct fgraph_data {int cpu_data; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_8__ {int depth; } ;
struct TYPE_6__ {int (* trace ) (struct trace_iterator*,unsigned long,struct trace_event*) ;} ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;


 int VAR_1 ;
 unsigned long VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 struct trace_event* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct trace_array*,int ,struct trace_seq*,int) ;
 int FUNC_3 (struct trace_iterator*,struct trace_seq*,int ,int ,int) ;
 int FUNC_4 (struct trace_iterator*,unsigned long,struct trace_event*) ;
 int FUNC_5 (struct trace_seq*) ;
 int FUNC_6 (struct trace_iterator*) ;
 int FUNC_7 (struct trace_iterator*) ;
 int FUNC_8 (struct trace_iterator*) ;
 scalar_t__ FUNC_9 (struct trace_seq*) ;
 int FUNC_10 (struct trace_seq*,char) ;
 int FUNC_11 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t
FUNC_12(struct trace_seq *VAR_5, struct trace_entry *VAR_6,
      struct trace_iterator *VAR_7, u32 VAR_8)
{
 struct trace_array *VAR_9 = VAR_7->tr;
 unsigned long VAR_10 = (VAR_9->trace_flags & VAR_2);
 struct fgraph_data *VAR_11 = VAR_7->private;
 struct trace_event *VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15;

 if (VAR_11)
  VAR_13 = FUNC_1(VAR_11->cpu_data, VAR_7->cpu)->depth;

 FUNC_3(VAR_7, VAR_5, 0, 0, VAR_8);


 FUNC_2(VAR_9, 0, VAR_5, VAR_8 | VAR_0);


 if (VAR_13 > 0)
  for (VAR_15 = 0; VAR_15 < (VAR_13 + 1) * VAR_1; VAR_15++)
   FUNC_10(VAR_5, ' ');


 FUNC_11(VAR_5, "/* ");

 switch (VAR_7->ent->type) {
 case 129:
  VAR_14 = FUNC_7(VAR_7);
  if (VAR_14 != VAR_3)
   return VAR_14;
  break;
 case 130:
  VAR_14 = FUNC_6(VAR_7);
  if (VAR_14 != VAR_3)
   return VAR_14;
  break;
 case 128:
  VAR_14 = FUNC_8(VAR_7);
  if (VAR_14 != VAR_3)
   return VAR_14;
  break;
 default:
  VAR_12 = FUNC_0(VAR_6->type);
  if (!VAR_12)
   return VAR_4;

  VAR_14 = VAR_12->funcs->trace(VAR_7, VAR_10, VAR_12);
  if (VAR_14 != VAR_3)
   return VAR_14;
 }

 if (FUNC_9(VAR_5))
  goto out;


 if (VAR_5->buffer[VAR_5->seq.len - 1] == '\n') {
  VAR_5->buffer[VAR_5->seq.len - 1] = '\0';
  VAR_5->seq.len--;
 }

 FUNC_11(VAR_5, " */\n");
 out:
 return FUNC_5(VAR_5);
}
