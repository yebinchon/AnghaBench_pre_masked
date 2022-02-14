
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_export {int (* write ) (struct trace_export*,struct trace_entry*,unsigned int) ;} ;
struct trace_entry {int dummy; } ;
struct ring_buffer_event {int dummy; } ;


 struct trace_entry* FUNC_0 (struct ring_buffer_event*) ;
 unsigned int FUNC_1 (struct ring_buffer_event*) ;
 int FUNC_2 (struct trace_export*,struct trace_entry*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct trace_export *VAR_0,
        struct ring_buffer_event *VAR_1)
{
 struct trace_entry *VAR_2;
 unsigned int VAR_3 = 0;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_1);
 VAR_0->write(VAR_0, VAR_2, VAR_3);
}
