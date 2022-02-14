
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ring_buffer_iter {int read_stamp; } ;
struct ring_buffer_event {int type_len; int time_delta; } ;


 int FUNC_0 () ;




 int FUNC_1 (struct ring_buffer_event*) ;

__attribute__((used)) static void
FUNC_2(struct ring_buffer_iter *VAR_0,
     struct ring_buffer_event *VAR_1)
{
 u64 VAR_2;

 switch (VAR_1->type_len) {
 case 130:
  return;

 case 129:
  VAR_2 = FUNC_1(VAR_1);
  VAR_0->read_stamp += VAR_2;
  return;

 case 128:
  VAR_2 = FUNC_1(VAR_1);
  VAR_0->read_stamp = VAR_2;
  return;

 case 131:
  VAR_0->read_stamp += VAR_1->time_delta;
  return;

 default:
  FUNC_0();
 }
 return;
}
