
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int reader_lock; } ;
struct ring_buffer_iter {struct ring_buffer_per_cpu* cpu_buffer; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ring_buffer_iter*) ;

void FUNC_3(struct ring_buffer_iter *VAR_0)
{
 struct ring_buffer_per_cpu *VAR_1;
 unsigned long VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->cpu_buffer;

 FUNC_0(&VAR_1->reader_lock, VAR_2);
 FUNC_2(VAR_0);
 FUNC_1(&VAR_1->reader_lock, VAR_2);
}
