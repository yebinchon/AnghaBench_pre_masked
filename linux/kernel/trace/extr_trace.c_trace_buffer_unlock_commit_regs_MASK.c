
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ring_buffer*,struct ring_buffer_event*) ;
 int FUNC_1 (struct trace_array*,struct ring_buffer*,unsigned long,int ,int,struct pt_regs*) ;
 int FUNC_2 (struct ring_buffer*,unsigned long,int) ;

void FUNC_3(struct trace_array *VAR_1,
         struct ring_buffer *VAR_2,
         struct ring_buffer_event *VAR_3,
         unsigned long VAR_4, int VAR_5,
         struct pt_regs *VAR_6)
{
 FUNC_0(VAR_2, VAR_3);







 FUNC_1(VAR_1, VAR_2, VAR_4, VAR_6 ? 0 : VAR_0, VAR_5, VAR_6);
 FUNC_2(VAR_2, VAR_4, VAR_5);
}
