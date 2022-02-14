
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ring_buffer_per_cpu {int read_stamp; int read; TYPE_2__* reader_page; } ;
struct ring_buffer_iter {TYPE_2__* head_page; int read_stamp; int head; int cache_read; TYPE_2__* cache_reader_page; struct ring_buffer_per_cpu* cpu_buffer; } ;
struct TYPE_4__ {TYPE_1__* page; int read; } ;
struct TYPE_3__ {int time_stamp; } ;



__attribute__((used)) static void FUNC_0(struct ring_buffer_iter *VAR_0)
{
 struct ring_buffer_per_cpu *VAR_1 = VAR_0->cpu_buffer;


 VAR_0->head_page = VAR_1->reader_page;
 VAR_0->head = VAR_1->reader_page->read;

 VAR_0->cache_reader_page = VAR_0->head_page;
 VAR_0->cache_read = VAR_1->read;

 if (VAR_0->head)
  VAR_0->read_stamp = VAR_1->read_stamp;
 else
  VAR_0->read_stamp = VAR_0->head_page->page->time_stamp;
}
