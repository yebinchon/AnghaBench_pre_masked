
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int lock; struct buffer_data_page* free_page; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; } ;
struct page {int dummy; } ;
struct buffer_data_page {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct buffer_data_page*) ;

void FUNC_7(struct ring_buffer *VAR_0, int VAR_1, void *VAR_2)
{
 struct ring_buffer_per_cpu *VAR_3 = VAR_0->buffers[VAR_1];
 struct buffer_data_page *VAR_4 = VAR_2;
 struct page *VAR_5 = FUNC_6(VAR_4);
 unsigned long VAR_6;


 if (FUNC_5(VAR_5) > 1)
  goto out;

 FUNC_4(VAR_6);
 FUNC_0(&VAR_3->lock);

 if (!VAR_3->free_page) {
  VAR_3->free_page = VAR_4;
  VAR_4 = ((void*)0);
 }

 FUNC_1(&VAR_3->lock);
 FUNC_3(VAR_6);

 out:
 FUNC_2((unsigned long)VAR_4);
}
