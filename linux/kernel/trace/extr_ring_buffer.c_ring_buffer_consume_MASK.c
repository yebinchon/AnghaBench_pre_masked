
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ring_buffer_per_cpu {scalar_t__ lost_events; } ;
struct ring_buffer_event {scalar_t__ type_len; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct ring_buffer_per_cpu*) ;
 struct ring_buffer_event* FUNC_6 (struct ring_buffer_per_cpu*,int *,unsigned long*) ;
 int FUNC_7 (struct ring_buffer_per_cpu*) ;
 int FUNC_8 (struct ring_buffer_per_cpu*,int) ;

struct ring_buffer_event *
FUNC_9(struct ring_buffer *VAR_1, int VAR_2, u64 *VAR_3,
      unsigned long *VAR_4)
{
 struct ring_buffer_per_cpu *VAR_5;
 struct ring_buffer_event *VAR_6 = ((void*)0);
 unsigned long VAR_7;
 bool VAR_8;

 again:

 FUNC_3();

 if (!FUNC_0(VAR_2, VAR_1->cpumask))
  goto out;

 VAR_5 = VAR_1->buffers[VAR_2];
 FUNC_2(VAR_7);
 VAR_8 = FUNC_7(VAR_5);

 VAR_6 = FUNC_6(VAR_5, VAR_3, VAR_4);
 if (VAR_6) {
  VAR_5->lost_events = 0;
  FUNC_5(VAR_5);
 }

 FUNC_8(VAR_5, VAR_8);
 FUNC_1(VAR_7);

 out:
 FUNC_4();

 if (VAR_6 && VAR_6->type_len == VAR_0)
  goto again;

 return VAR_6;
}
