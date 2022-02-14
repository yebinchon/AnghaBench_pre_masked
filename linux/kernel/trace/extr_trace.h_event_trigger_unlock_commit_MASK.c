
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int tr; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
typedef enum event_trigger_type { ____Placeholder_event_trigger_type } event_trigger_type ;


 int VAR_0 ;
 int FUNC_0 (struct trace_event_file*,struct ring_buffer*,struct ring_buffer_event*,void*,int*) ;
 int FUNC_1 (struct trace_event_file*,int) ;
 int FUNC_2 (int ,struct ring_buffer*,struct ring_buffer_event*,unsigned long,int) ;

__attribute__((used)) static inline void
FUNC_3(struct trace_event_file *VAR_1,
       struct ring_buffer *VAR_2,
       struct ring_buffer_event *VAR_3,
       void *VAR_4, unsigned long VAR_5, int VAR_6)
{
 enum event_trigger_type VAR_7 = VAR_0;

 if (!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7))
  FUNC_2(VAR_1->tr, VAR_2, VAR_3, VAR_5, VAR_6);

 if (VAR_7)
  FUNC_1(VAR_1, VAR_7);
}
