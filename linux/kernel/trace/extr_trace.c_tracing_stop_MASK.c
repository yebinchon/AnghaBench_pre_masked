
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
struct TYPE_6__ {int start_lock; int max_lock; TYPE_2__ max_buffer; TYPE_1__ trace_buffer; int stop_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct ring_buffer*) ;

void FUNC_5(void)
{
 struct ring_buffer *VAR_1;
 unsigned long VAR_2;

 FUNC_2(&VAR_0.start_lock, VAR_2);
 if (VAR_0.stop_count++)
  goto out;


 FUNC_0(&VAR_0.max_lock);

 VAR_1 = VAR_0.trace_buffer.buffer;
 if (VAR_1)
  FUNC_4(VAR_1);







 FUNC_1(&VAR_0.max_lock);

 out:
 FUNC_3(&VAR_0.start_lock, VAR_2);
}
