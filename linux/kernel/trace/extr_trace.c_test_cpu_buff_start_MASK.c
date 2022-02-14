
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct trace_iterator {int iter_flags; int idx; int cpu; int started; TYPE_1__* trace_buffer; struct trace_array* tr; struct trace_seq seq; } ;
struct trace_array {int trace_flags; } ;
struct TYPE_4__ {scalar_t__ skipped_entries; } ;
struct TYPE_3__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct trace_seq*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct trace_iterator *VAR_2)
{
 struct trace_seq *VAR_3 = &VAR_2->seq;
 struct trace_array *VAR_4 = VAR_2->tr;

 if (!(VAR_4->trace_flags & VAR_1))
  return;

 if (!(VAR_2->iter_flags & VAR_0))
  return;

 if (FUNC_0(VAR_2->started) &&
     FUNC_2(VAR_2->cpu, VAR_2->started))
  return;

 if (FUNC_3(VAR_2->trace_buffer->data, VAR_2->cpu)->skipped_entries)
  return;

 if (FUNC_0(VAR_2->started))
  FUNC_1(VAR_2->cpu, VAR_2->started);


 if (VAR_2->idx > 1)
  FUNC_4(VAR_3, "##### CPU %u buffer started ####\n",
    VAR_2->cpu);
}
