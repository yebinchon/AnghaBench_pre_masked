
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int entries_bytes; } ;
struct ring_buffer_event {int time_delta; int type_len; scalar_t__* array; } ;
struct rb_event_info {unsigned long length; struct buffer_page* tail_page; } ;
struct buffer_page {unsigned long real_end; int write; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct ring_buffer_event* FUNC_0 (struct buffer_page*,unsigned long) ;
 int FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (unsigned long,int *) ;
 int FUNC_3 (struct ring_buffer_event*) ;

__attribute__((used)) static inline void
FUNC_4(struct ring_buffer_per_cpu *VAR_4,
       unsigned long VAR_5, struct rb_event_info *VAR_6)
{
 struct buffer_page *VAR_7 = VAR_6->tail_page;
 struct ring_buffer_event *VAR_8;
 unsigned long VAR_9 = VAR_6->length;





 if (VAR_5 >= VAR_0) {





  if (VAR_5 == VAR_0)
   VAR_7->real_end = 0;

  FUNC_2(VAR_9, &VAR_7->write);
  return;
 }

 VAR_8 = FUNC_0(VAR_7, VAR_5);


 FUNC_1(VAR_0 - VAR_5, &VAR_4->entries_bytes);






 VAR_7->real_end = VAR_5;
 if (VAR_5 > (VAR_0 - VAR_2)) {



  FUNC_3(VAR_8);


  FUNC_2(VAR_9, &VAR_7->write);
  return;
 }


 VAR_8->array[0] = (VAR_0 - VAR_5) - VAR_1;
 VAR_8->type_len = VAR_3;

 VAR_8->time_delta = 1;


 VAR_9 = (VAR_5 + VAR_9) - VAR_0;
 FUNC_2(VAR_9, &VAR_7->write);
}
