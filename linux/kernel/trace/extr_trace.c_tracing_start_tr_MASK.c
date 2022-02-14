
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ring_buffer* buffer; } ;
struct trace_array {int flags; scalar_t__ stop_count; int start_lock; TYPE_1__ trace_buffer; } ;
struct ring_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct ring_buffer*) ;
 scalar_t__ VAR_1 ;
 void FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct trace_array *VAR_2)
{
 struct ring_buffer *VAR_3;
 unsigned long VAR_4;

 if (VAR_1)
  return;


 if (VAR_2->flags & VAR_0)
  return FUNC_4();

 FUNC_1(&VAR_2->start_lock, VAR_4);

 if (--VAR_2->stop_count) {
  if (VAR_2->stop_count < 0) {

   FUNC_0(1);
   VAR_2->stop_count = 0;
  }
  goto out;
 }

 VAR_3 = VAR_2->trace_buffer.buffer;
 if (VAR_3)
  FUNC_3(VAR_3);

 out:
 FUNC_2(&VAR_2->start_lock, VAR_4);
}
