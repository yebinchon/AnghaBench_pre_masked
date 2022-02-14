
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_event_file {int flags; TYPE_2__* tr; } ;
struct ring_buffer_event {unsigned long* array; } ;
struct ring_buffer {int dummy; } ;
struct TYPE_3__ {struct ring_buffer* buffer; } ;
struct TYPE_4__ {TYPE_1__ trace_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ring_buffer_event* FUNC_0 (struct ring_buffer*,int,unsigned long,unsigned long,int) ;
 int FUNC_1 (struct ring_buffer*) ;
 struct ring_buffer* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ring_buffer_event* FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct ring_buffer_event*,int,unsigned long,int) ;

struct ring_buffer_event *
FUNC_6(struct ring_buffer **VAR_6,
     struct trace_event_file *VAR_7,
     int VAR_8, unsigned long VAR_9,
     unsigned long VAR_10, int VAR_11)
{
 struct ring_buffer_event *VAR_12;
 int VAR_13;

 *VAR_6 = VAR_7->tr->trace_buffer.buffer;

 if (!FUNC_1(*VAR_6) && (VAR_7->flags &
      (VAR_1 | VAR_0)) &&
     (VAR_12 = FUNC_4(VAR_4))) {

  VAR_13 = FUNC_3(VAR_5);
  if (VAR_13 == 1) {
   FUNC_5(VAR_12, VAR_8, VAR_10, VAR_11);
   VAR_12->array[0] = VAR_9;
   return VAR_12;
  }
  FUNC_2(VAR_5);
 }

 VAR_12 = FUNC_0(*VAR_6,
         VAR_8, VAR_9, VAR_10, VAR_11);






 if (!VAR_12 && VAR_7->flags & VAR_2) {
  *VAR_6 = VAR_3;
  VAR_12 = FUNC_0(*VAR_6,
          VAR_8, VAR_9, VAR_10, VAR_11);
 }
 return VAR_12;
}
