
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct trace_iterator {unsigned long long ts; TYPE_1__* trace_buffer; } ;
struct TYPE_2__ {unsigned long long time_start; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long long,int ) ;
 int FUNC_1 (struct trace_seq*,char*,unsigned long long) ;

__attribute__((used)) static void
FUNC_2(struct trace_iterator *VAR_1, struct trace_seq *VAR_2)
{
 unsigned long long VAR_3;

 VAR_3 = VAR_1->ts - VAR_1->trace_buffer->time_start;
 FUNC_0(VAR_3, VAR_0);

 FUNC_1(VAR_2, "%9llu us |  ", VAR_3);
}
