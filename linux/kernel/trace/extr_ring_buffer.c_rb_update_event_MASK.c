
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ring_buffer_per_cpu {int buffer; } ;
struct ring_buffer_event {unsigned int* array; scalar_t__ type_len; scalar_t__ time_delta; } ;
struct rb_event_info {unsigned int length; int add_timestamp; scalar_t__ delta; } ;


 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 struct ring_buffer_event* FUNC_1 (struct ring_buffer_event*,scalar_t__,int) ;
 int FUNC_2 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct ring_buffer_per_cpu *VAR_4,
  struct ring_buffer_event *VAR_5,
  struct rb_event_info *VAR_6)
{
 unsigned VAR_7 = VAR_6->length;
 u64 VAR_8 = VAR_6->delta;


 if (FUNC_4(!FUNC_2(VAR_4, VAR_5)))
  VAR_8 = 0;





 if (FUNC_4(VAR_6->add_timestamp)) {
  bool VAR_9 = FUNC_3(VAR_4->buffer);

  VAR_5 = FUNC_1(VAR_5, VAR_6->delta, VAR_9);
  VAR_7 -= VAR_2;
  VAR_8 = 0;
 }

 VAR_5->time_delta = VAR_8;
 VAR_7 -= VAR_1;
 if (VAR_7 > VAR_3) {
  VAR_5->type_len = 0;
  VAR_5->array[0] = VAR_7;
 } else
  VAR_5->type_len = FUNC_0(VAR_7, VAR_0);
}
