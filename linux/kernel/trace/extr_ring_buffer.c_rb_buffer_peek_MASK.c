
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ring_buffer_per_cpu {int cpu; int buffer; scalar_t__ read_stamp; } ;
struct ring_buffer_event {int type_len; scalar_t__ time_delta; } ;
struct buffer_page {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct ring_buffer_per_cpu*,int) ;




 int FUNC_2 (struct ring_buffer_per_cpu*) ;
 struct buffer_page* FUNC_3 (struct ring_buffer_per_cpu*) ;
 unsigned long FUNC_4 (struct ring_buffer_per_cpu*) ;
 int FUNC_5 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_6 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_7 (struct ring_buffer_event*) ;
 int FUNC_8 (int ,int ,scalar_t__*) ;

__attribute__((used)) static struct ring_buffer_event *
FUNC_9(struct ring_buffer_per_cpu *VAR_0, u64 *VAR_1,
        unsigned long *VAR_2)
{
 struct ring_buffer_event *VAR_3;
 struct buffer_page *VAR_4;
 int VAR_5 = 0;

 if (VAR_1)
  *VAR_1 = 0;
 again:






 if (FUNC_1(VAR_0, ++VAR_5 > 2))
  return ((void*)0);

 VAR_4 = FUNC_3(VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_6(VAR_0);

 switch (VAR_3->type_len) {
 case 130:
  if (FUNC_5(VAR_3))
   FUNC_1(VAR_0, 1);
  return VAR_3;

 case 129:

  FUNC_2(VAR_0);
  goto again;

 case 128:
  if (VAR_1) {
   *VAR_1 = FUNC_7(VAR_3);
   FUNC_8(VAR_0->buffer,
        VAR_0->cpu, VAR_1);
  }

  FUNC_2(VAR_0);
  goto again;

 case 131:
  if (VAR_1 && !(*VAR_1)) {
   *VAR_1 = VAR_0->read_stamp + VAR_3->time_delta;
   FUNC_8(VAR_0->buffer,
        VAR_0->cpu, VAR_1);
  }
  if (VAR_2)
   *VAR_2 = FUNC_4(VAR_0);
  return VAR_3;

 default:
  FUNC_0();
 }

 return ((void*)0);
}
