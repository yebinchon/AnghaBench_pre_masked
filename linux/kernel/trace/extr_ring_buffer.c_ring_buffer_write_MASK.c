
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int record_disabled; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; int record_disabled; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (void*,void*,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 void* FUNC_7 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_8 (struct ring_buffer*,struct ring_buffer_per_cpu*,unsigned long) ;
 int FUNC_9 (struct ring_buffer*,struct ring_buffer_per_cpu*) ;
 int FUNC_10 (struct ring_buffer_per_cpu*) ;
 int FUNC_11 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_12 (int ) ;

int FUNC_13(struct ring_buffer *VAR_2,
        unsigned long VAR_3,
        void *VAR_4)
{
 struct ring_buffer_per_cpu *VAR_5;
 struct ring_buffer_event *VAR_6;
 void *VAR_7;
 int VAR_8 = -VAR_1;
 int VAR_9;

 FUNC_3();

 if (FUNC_0(&VAR_2->record_disabled))
  goto out;

 VAR_9 = FUNC_5();

 if (!FUNC_1(VAR_9, VAR_2->cpumask))
  goto out;

 VAR_5 = VAR_2->buffers[VAR_9];

 if (FUNC_0(&VAR_5->record_disabled))
  goto out;

 if (VAR_3 > VAR_0)
  goto out;

 if (FUNC_12(FUNC_10(VAR_5)))
  goto out;

 VAR_6 = FUNC_8(VAR_2, VAR_5, VAR_3);
 if (!VAR_6)
  goto out_unlock;

 VAR_7 = FUNC_7(VAR_6);

 FUNC_2(VAR_7, VAR_4, VAR_3);

 FUNC_6(VAR_5, VAR_6);

 FUNC_9(VAR_2, VAR_5);

 VAR_8 = 0;

 out_unlock:
 FUNC_11(VAR_5);

 out:
 FUNC_4();

 return VAR_8;
}
