
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int record_disabled; int reader_lock; int lock; int committing; } ;
struct ring_buffer {int resize_disabled; int cpumask; struct ring_buffer_per_cpu** buffers; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct ring_buffer_per_cpu*) ;
 int FUNC_10 () ;

void FUNC_11(struct ring_buffer *VAR_0, int VAR_1)
{
 struct ring_buffer_per_cpu *VAR_2 = VAR_0->buffers[VAR_1];
 unsigned long VAR_3;

 if (!FUNC_5(VAR_1, VAR_0->cpumask))
  return;

 FUNC_4(&VAR_0->resize_disabled);
 FUNC_4(&VAR_2->record_disabled);


 FUNC_10();

 FUNC_7(&VAR_2->reader_lock, VAR_3);

 if (FUNC_0(VAR_2, FUNC_6(&VAR_2->committing)))
  goto out;

 FUNC_1(&VAR_2->lock);

 FUNC_9(VAR_2);

 FUNC_2(&VAR_2->lock);

 out:
 FUNC_8(&VAR_2->reader_lock, VAR_3);

 FUNC_3(&VAR_2->record_disabled);
 FUNC_3(&VAR_0->resize_disabled);
}
