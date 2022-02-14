
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int lock; int * free_page; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; } ;
struct page {int dummy; } ;
typedef void buffer_data_page ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 void* FUNC_8 (struct page*) ;
 int FUNC_9 (void*) ;

void *FUNC_10(struct ring_buffer *VAR_4, int VAR_5)
{
 struct ring_buffer_per_cpu *VAR_6;
 struct buffer_data_page *VAR_7 = ((void*)0);
 unsigned long VAR_8;
 struct page *VAR_9;

 if (!FUNC_5(VAR_5, VAR_4->cpumask))
  return FUNC_0(-VAR_0);

 VAR_6 = VAR_4->buffers[VAR_5];
 FUNC_7(VAR_8);
 FUNC_2(&VAR_6->lock);

 if (VAR_6->free_page) {
  VAR_7 = VAR_6->free_page;
  VAR_6->free_page = ((void*)0);
 }

 FUNC_3(&VAR_6->lock);
 FUNC_6(VAR_8);

 if (VAR_7)
  goto out;

 VAR_9 = FUNC_1(FUNC_4(VAR_5),
    VAR_2 | VAR_3, 0);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_8(VAR_9);

 out:
 FUNC_9(VAR_7);

 return VAR_7;
}
