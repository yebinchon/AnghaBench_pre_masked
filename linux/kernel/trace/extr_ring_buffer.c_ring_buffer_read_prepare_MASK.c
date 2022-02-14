
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int record_disabled; } ;
struct ring_buffer_iter {struct ring_buffer_per_cpu* cpu_buffer; } ;
struct ring_buffer {int resize_disabled; struct ring_buffer_per_cpu** buffers; int cpumask; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 struct ring_buffer_iter* FUNC_2 (int,int ) ;

struct ring_buffer_iter *
FUNC_3(struct ring_buffer *VAR_0, int VAR_1, gfp_t VAR_2)
{
 struct ring_buffer_per_cpu *VAR_3;
 struct ring_buffer_iter *VAR_4;

 if (!FUNC_1(VAR_1, VAR_0->cpumask))
  return ((void*)0);

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = VAR_0->buffers[VAR_1];

 VAR_4->cpu_buffer = VAR_3;

 FUNC_0(&VAR_0->resize_disabled);
 FUNC_0(&VAR_3->record_disabled);

 return VAR_4;
}
