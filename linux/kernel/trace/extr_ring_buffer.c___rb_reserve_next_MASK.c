
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_per_cpu {int entries_bytes; int buffer; int tail_page; } ;
struct ring_buffer_event {int dummy; } ;
struct rb_event_info {int add_timestamp; unsigned long length; int ts; scalar_t__ delta; struct buffer_page* tail_page; } ;
struct buffer_page {TYPE_1__* page; int entries; int write; } ;
struct TYPE_2__ {int time_stamp; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 struct buffer_page* FUNC_0 (int ) ;
 struct ring_buffer_event* FUNC_1 (struct buffer_page*,unsigned long) ;
 int FUNC_2 (unsigned long,int *) ;
 unsigned long FUNC_3 (unsigned long,int *) ;
 int FUNC_4 (int *) ;
 struct ring_buffer_event* FUNC_5 (struct ring_buffer_per_cpu*,unsigned long,struct rb_event_info*) ;
 int FUNC_6 (struct ring_buffer_per_cpu*,struct ring_buffer_event*,struct rb_event_info*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct ring_buffer_event *
FUNC_9(struct ring_buffer_per_cpu *VAR_3,
    struct rb_event_info *VAR_4)
{
 struct ring_buffer_event *VAR_5;
 struct buffer_page *VAR_6;
 unsigned long VAR_7, VAR_8;






 if (FUNC_8(VAR_4->add_timestamp))
  VAR_4->length += VAR_1;


 VAR_6 = VAR_4->tail_page = FUNC_0(VAR_3->tail_page);
 VAR_8 = FUNC_3(VAR_4->length, &VAR_6->write);


 VAR_8 &= VAR_2;
 VAR_7 = VAR_8 - VAR_4->length;





 if (!VAR_7 && !FUNC_7(VAR_3->buffer))
  VAR_4->delta = 0;


 if (FUNC_8(VAR_8 > VAR_0))
  return FUNC_5(VAR_3, VAR_7, VAR_4);



 VAR_5 = FUNC_1(VAR_6, VAR_7);
 FUNC_6(VAR_3, VAR_5, VAR_4);

 FUNC_4(&VAR_6->entries);





 if (!VAR_7)
  VAR_6->page->time_stamp = VAR_4->ts;


 FUNC_2(VAR_4->length, &VAR_3->entries_bytes);

 return VAR_5;
}
