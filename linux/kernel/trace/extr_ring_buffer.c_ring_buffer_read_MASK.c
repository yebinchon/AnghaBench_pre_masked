
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ring_buffer_per_cpu {int reader_lock; } ;
struct ring_buffer_iter {struct ring_buffer_per_cpu* cpu_buffer; } ;
struct ring_buffer_event {scalar_t__ type_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ring_buffer_iter*) ;
 struct ring_buffer_event* FUNC_3 (struct ring_buffer_iter*,int *) ;

struct ring_buffer_event *
FUNC_4(struct ring_buffer_iter *VAR_1, u64 *VAR_2)
{
 struct ring_buffer_event *VAR_3;
 struct ring_buffer_per_cpu *VAR_4 = VAR_1->cpu_buffer;
 unsigned long VAR_5;

 FUNC_0(&VAR_4->reader_lock, VAR_5);
 again:
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_3)
  goto out;

 if (VAR_3->type_len == VAR_0)
  goto again;

 FUNC_2(VAR_1);
 out:
 FUNC_1(&VAR_4->reader_lock, VAR_5);

 return VAR_3;
}
