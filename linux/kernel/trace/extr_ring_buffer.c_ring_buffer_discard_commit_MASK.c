
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int committing; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; } ;


 int FUNC_0 (struct ring_buffer*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 int FUNC_4 (struct ring_buffer_per_cpu*) ;
 int FUNC_5 (struct ring_buffer_event*) ;
 scalar_t__ FUNC_6 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 int FUNC_7 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct ring_buffer_per_cpu*) ;

void FUNC_10(struct ring_buffer *VAR_0,
    struct ring_buffer_event *VAR_1)
{
 struct ring_buffer_per_cpu *VAR_2;
 int VAR_3;


 FUNC_5(VAR_1);

 VAR_3 = FUNC_8();
 VAR_2 = VAR_0->buffers[VAR_3];






 FUNC_0(VAR_0, !FUNC_1(&VAR_2->committing));

 FUNC_3(VAR_2, VAR_1);
 if (FUNC_6(VAR_2, VAR_1))
  goto out;





 FUNC_7(VAR_2, VAR_1);
 out:
 FUNC_4(VAR_2);

 FUNC_9(VAR_2);

 FUNC_2();

}
