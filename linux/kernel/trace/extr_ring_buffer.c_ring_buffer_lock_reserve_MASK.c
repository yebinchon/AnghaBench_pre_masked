
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int record_disabled; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; int record_disabled; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct ring_buffer_event* FUNC_5 (struct ring_buffer*,struct ring_buffer_per_cpu*,unsigned long) ;
 int FUNC_6 (struct ring_buffer_per_cpu*) ;
 int FUNC_7 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_8 (int) ;

struct ring_buffer_event *
FUNC_9(struct ring_buffer *VAR_1, unsigned long VAR_2)
{
 struct ring_buffer_per_cpu *VAR_3;
 struct ring_buffer_event *VAR_4;
 int VAR_5;


 FUNC_2();

 if (FUNC_8(FUNC_0(&VAR_1->record_disabled)))
  goto out;

 VAR_5 = FUNC_4();

 if (FUNC_8(!FUNC_1(VAR_5, VAR_1->cpumask)))
  goto out;

 VAR_3 = VAR_1->buffers[VAR_5];

 if (FUNC_8(FUNC_0(&VAR_3->record_disabled)))
  goto out;

 if (FUNC_8(VAR_2 > VAR_0))
  goto out;

 if (FUNC_8(FUNC_6(VAR_3)))
  goto out;

 VAR_4 = FUNC_5(VAR_1, VAR_3, VAR_2);
 if (!VAR_4)
  goto out_unlock;

 return VAR_4;

 out_unlock:
 FUNC_7(VAR_3);
 out:
 FUNC_3();
 return ((void*)0);
}
