
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_per_cpu {TYPE_1__* buffer; int record_disabled; int reader_lock; } ;
struct ring_buffer_iter {struct ring_buffer_per_cpu* cpu_buffer; } ;
struct TYPE_2__ {int resize_disabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ring_buffer_iter*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct ring_buffer_per_cpu*) ;

void
FUNC_5(struct ring_buffer_iter *VAR_0)
{
 struct ring_buffer_per_cpu *VAR_1 = VAR_0->cpu_buffer;
 unsigned long VAR_2;







 FUNC_2(&VAR_1->reader_lock, VAR_2);
 FUNC_4(VAR_1);
 FUNC_3(&VAR_1->reader_lock, VAR_2);

 FUNC_0(&VAR_1->record_disabled);
 FUNC_0(&VAR_1->buffer->resize_disabled);
 FUNC_1(VAR_0);
}
