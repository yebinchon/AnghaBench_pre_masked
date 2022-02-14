
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_iterator {TYPE_2__* ent; TYPE_1__* trace; int seq; scalar_t__ lost_events; int cpu; struct trace_array* tr; } ;
struct trace_array {unsigned long trace_flags; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int (* print_line ) (struct trace_iterator*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct trace_iterator*) ;
 int FUNC_1 (struct trace_iterator*) ;
 int FUNC_2 (struct trace_iterator*) ;
 int FUNC_3 (struct trace_iterator*) ;
 int FUNC_4 (struct trace_iterator*) ;
 int FUNC_5 (struct trace_iterator*) ;
 int FUNC_6 (struct trace_iterator*) ;
 int FUNC_7 (struct trace_iterator*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int ,scalar_t__) ;

enum print_line_t FUNC_10(struct trace_iterator *VAR_10)
{
 struct trace_array *VAR_11 = VAR_10->tr;
 unsigned long VAR_12 = VAR_11->trace_flags;
 enum print_line_t VAR_13;

 if (VAR_10->lost_events) {
  FUNC_9(&VAR_10->seq, "CPU:%d [LOST %lu EVENTS]\n",
     VAR_10->cpu, VAR_10->lost_events);
  if (FUNC_8(&VAR_10->seq))
   return VAR_8;
 }

 if (VAR_10->trace && VAR_10->trace->print_line) {
  VAR_13 = VAR_10->trace->print_line(VAR_10);
  if (VAR_13 != VAR_9)
   return VAR_13;
 }

 if (VAR_10->ent->type == VAR_1 &&
   VAR_12 & VAR_4 &&
   VAR_12 & VAR_5)
  return FUNC_6(VAR_10);

 if (VAR_10->ent->type == VAR_0 &&
   VAR_12 & VAR_4 &&
   VAR_12 & VAR_5)
  return FUNC_5(VAR_10);

 if (VAR_10->ent->type == VAR_7 &&
   VAR_12 & VAR_4 &&
   VAR_12 & VAR_5)
  return FUNC_7(VAR_10);

 if (VAR_12 & VAR_2)
  return FUNC_0(VAR_10);

 if (VAR_12 & VAR_3)
  return FUNC_1(VAR_10);

 if (VAR_12 & VAR_6)
  return FUNC_2(VAR_10);

 return FUNC_3(VAR_10);
}
