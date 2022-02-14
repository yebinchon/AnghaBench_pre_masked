
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_irq_work {int waiters_pending; int waiters; } ;
struct ring_buffer_per_cpu {struct rb_irq_work irq_work; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; struct rb_irq_work irq_work; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (struct ring_buffer*) ;
 int FUNC_3 (struct ring_buffer*,int) ;
 int FUNC_4 () ;

__poll_t FUNC_5(struct ring_buffer *VAR_4, int VAR_5,
     struct file *VAR_6, poll_table *VAR_7)
{
 struct ring_buffer_per_cpu *VAR_8;
 struct rb_irq_work *VAR_9;

 if (VAR_5 == VAR_3)
  VAR_9 = &VAR_4->irq_work;
 else {
  if (!FUNC_0(VAR_5, VAR_4->cpumask))
   return -VAR_0;

  VAR_8 = VAR_4->buffers[VAR_5];
  VAR_9 = &VAR_8->irq_work;
 }

 FUNC_1(VAR_6, &VAR_9->waiters, VAR_7);
 VAR_9->waiters_pending = 1;
 FUNC_4();

 if ((VAR_5 == VAR_3 && !FUNC_2(VAR_4)) ||
     (VAR_5 != VAR_3 && !FUNC_3(VAR_4, VAR_5)))
  return VAR_1 | VAR_2;
 return 0;
}
