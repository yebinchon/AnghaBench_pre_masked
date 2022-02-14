
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ring_buffer* buffer; } ;
struct trace_array {int flags; int start_lock; TYPE_1__ trace_buffer; int stop_count; } ;
struct ring_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ring_buffer*) ;
 void FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct trace_array *VAR_1)
{
 struct ring_buffer *VAR_2;
 unsigned long VAR_3;


 if (VAR_1->flags & VAR_0)
  return FUNC_3();

 FUNC_0(&VAR_1->start_lock, VAR_3);
 if (VAR_1->stop_count++)
  goto out;

 VAR_2 = VAR_1->trace_buffer.buffer;
 if (VAR_2)
  FUNC_2(VAR_2);

 out:
 FUNC_1(&VAR_1->start_lock, VAR_3);
}
