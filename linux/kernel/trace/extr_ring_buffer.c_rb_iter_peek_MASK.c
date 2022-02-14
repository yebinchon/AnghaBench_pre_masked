
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ring_buffer_per_cpu {scalar_t__ read; scalar_t__ reader_page; int cpu; struct ring_buffer* buffer; } ;
struct ring_buffer_iter {scalar_t__ cache_read; scalar_t__ cache_reader_page; scalar_t__ head; scalar_t__ read_stamp; int head_page; struct ring_buffer_per_cpu* cpu_buffer; } ;
struct ring_buffer_event {int type_len; scalar_t__ time_delta; } ;
struct ring_buffer {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct ring_buffer_per_cpu*,int) ;




 int FUNC_2 (struct ring_buffer_iter*) ;
 int FUNC_3 (struct ring_buffer_iter*) ;
 struct ring_buffer_event* FUNC_4 (struct ring_buffer_iter*) ;
 int FUNC_5 (struct ring_buffer_iter*) ;
 int FUNC_6 (struct ring_buffer_event*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_9 (struct ring_buffer_event*) ;
 scalar_t__ FUNC_10 (struct ring_buffer_iter*) ;
 int FUNC_11 (struct ring_buffer*,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static struct ring_buffer_event *
FUNC_13(struct ring_buffer_iter *VAR_0, u64 *VAR_1)
{
 struct ring_buffer *VAR_2;
 struct ring_buffer_per_cpu *VAR_3;
 struct ring_buffer_event *VAR_4;
 int VAR_5 = 0;

 if (VAR_1)
  *VAR_1 = 0;

 VAR_3 = VAR_0->cpu_buffer;
 VAR_2 = VAR_3->buffer;






 if (FUNC_12(VAR_0->cache_read != VAR_3->read ||
       VAR_0->cache_reader_page != VAR_3->reader_page))
  FUNC_5(VAR_0);

 again:
 if (FUNC_10(VAR_0))
  return ((void*)0);
 if (FUNC_1(VAR_3, ++VAR_5 > 3))
  return ((void*)0);

 if (FUNC_8(VAR_3))
  return ((void*)0);

 if (VAR_0->head >= FUNC_7(VAR_0->head_page)) {
  FUNC_3(VAR_0);
  goto again;
 }

 VAR_4 = FUNC_4(VAR_0);

 switch (VAR_4->type_len) {
 case 130:
  if (FUNC_6(VAR_4)) {
   FUNC_3(VAR_0);
   goto again;
  }
  FUNC_2(VAR_0);
  return VAR_4;

 case 129:

  FUNC_2(VAR_0);
  goto again;

 case 128:
  if (VAR_1) {
   *VAR_1 = FUNC_9(VAR_4);
   FUNC_11(VAR_3->buffer,
        VAR_3->cpu, VAR_1);
  }

  FUNC_2(VAR_0);
  goto again;

 case 131:
  if (VAR_1 && !(*VAR_1)) {
   *VAR_1 = VAR_0->read_stamp + VAR_4->time_delta;
   FUNC_11(VAR_2,
        VAR_3->cpu, VAR_1);
  }
  return VAR_4;

 default:
  FUNC_0();
 }

 return ((void*)0);
}
