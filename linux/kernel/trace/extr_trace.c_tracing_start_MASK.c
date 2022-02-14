
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ring_buffer {int dummy; } ;
struct TYPE_5__ {struct ring_buffer* buffer; } ;
struct TYPE_4__ {struct ring_buffer* buffer; } ;
struct TYPE_6__ {scalar_t__ stop_count; int start_lock; int max_lock; TYPE_2__ max_buffer; TYPE_1__ trace_buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct ring_buffer*) ;
 scalar_t__ VAR_1 ;

void FUNC_6(void)
{
 struct ring_buffer *VAR_2;
 unsigned long VAR_3;

 if (VAR_1)
  return;

 FUNC_3(&VAR_0.start_lock, VAR_3);
 if (--VAR_0.stop_count) {
  if (VAR_0.stop_count < 0) {

   FUNC_0(1);
   VAR_0.stop_count = 0;
  }
  goto out;
 }


 FUNC_1(&VAR_0.max_lock);

 VAR_2 = VAR_0.trace_buffer.buffer;
 if (VAR_2)
  FUNC_5(VAR_2);







 FUNC_2(&VAR_0.max_lock);

 out:
 FUNC_4(&VAR_0.start_lock, VAR_3);
}
