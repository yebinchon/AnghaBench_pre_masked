
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ring_buffer_per_cpu {int reader_lock; struct buffer_page* reader_page; struct buffer_page* tail_page; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; } ;
struct buffer_page {TYPE_1__* page; } ;
struct TYPE_2__ {int time_stamp; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct buffer_page* FUNC_3 (struct ring_buffer_per_cpu*) ;

u64 FUNC_4(struct ring_buffer *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 struct ring_buffer_per_cpu *VAR_3;
 struct buffer_page *VAR_4;
 u64 VAR_5 = 0;

 if (!FUNC_0(VAR_1, VAR_0->cpumask))
  return 0;

 VAR_3 = VAR_0->buffers[VAR_1];
 FUNC_1(&VAR_3->reader_lock, VAR_2);




 if (VAR_3->tail_page == VAR_3->reader_page)
  VAR_4 = VAR_3->reader_page;
 else
  VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  VAR_5 = VAR_4->page->time_stamp;
 FUNC_2(&VAR_3->reader_lock, VAR_2);

 return VAR_5;
}
