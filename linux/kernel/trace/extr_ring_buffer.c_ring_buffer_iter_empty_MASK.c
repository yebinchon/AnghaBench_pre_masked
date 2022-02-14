
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {struct buffer_page* reader_page; struct buffer_page* commit_page; struct buffer_page* head_page; } ;
struct ring_buffer_iter {unsigned int head; struct buffer_page* head_page; struct ring_buffer_per_cpu* cpu_buffer; } ;
struct buffer_page {unsigned int read; } ;


 unsigned int FUNC_0 (struct buffer_page*) ;

int FUNC_1(struct ring_buffer_iter *VAR_0)
{
 struct ring_buffer_per_cpu *VAR_1;
 struct buffer_page *VAR_2;
 struct buffer_page *VAR_3;
 struct buffer_page *VAR_4;
 unsigned VAR_5;

 VAR_1 = VAR_0->cpu_buffer;


 VAR_2 = VAR_1->reader_page;
 VAR_3 = VAR_1->head_page;
 VAR_4 = VAR_1->commit_page;
 VAR_5 = FUNC_0(VAR_4);

 return ((VAR_0->head_page == VAR_4 && VAR_0->head == VAR_5) ||
  (VAR_0->head_page == VAR_2 && VAR_4 == VAR_3 &&
   VAR_3->read == VAR_5 &&
   VAR_0->head == FUNC_0(VAR_1->reader_page)));
}
