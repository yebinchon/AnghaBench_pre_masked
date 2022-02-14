
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {unsigned long flags; int filter; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
typedef enum event_trigger_type { ____Placeholder_event_trigger_type } event_trigger_type ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct ring_buffer*,struct ring_buffer_event*) ;
 int FUNC_1 (struct trace_event_file*,void*,struct ring_buffer_event*) ;
 int FUNC_2 (int ,void*) ;
 scalar_t__ FUNC_3 (int ,unsigned long*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline bool
FUNC_5(struct trace_event_file *VAR_3,
        struct ring_buffer *VAR_4,
        struct ring_buffer_event *VAR_5,
        void *VAR_6,
        enum event_trigger_type *VAR_7)
{
 unsigned long VAR_8 = VAR_3->flags;

 if (VAR_8 & VAR_2)
  *VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_5);

 if (FUNC_3(VAR_1, &VAR_3->flags) ||
     (FUNC_4(VAR_3->flags & VAR_0) &&
      !FUNC_2(VAR_3->filter, VAR_6))) {
  FUNC_0(VAR_4, VAR_5);
  return 1;
 }

 return 0;
}
