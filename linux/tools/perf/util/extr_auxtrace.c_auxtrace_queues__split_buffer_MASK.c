
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct auxtrace_queues {int dummy; } ;
struct auxtrace_buffer {scalar_t__ size; int consecutive; int data_offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct auxtrace_buffer*) ;
 int FUNC_1 (struct auxtrace_queues*,unsigned int,struct auxtrace_buffer*) ;
 struct auxtrace_buffer* FUNC_2 (struct auxtrace_buffer*,int) ;

__attribute__((used)) static int FUNC_3(struct auxtrace_queues *VAR_2,
      unsigned int VAR_3,
      struct auxtrace_buffer *VAR_4)
{
 u64 VAR_5 = VAR_4->size;
 bool VAR_6 = 0;
 struct auxtrace_buffer *VAR_7;
 int VAR_8;

 while (VAR_5 > VAR_0) {
  VAR_7 = FUNC_2(VAR_4, sizeof(struct auxtrace_buffer));
  if (!VAR_7)
   return -VAR_1;
  VAR_7->size = VAR_0;
  VAR_7->consecutive = VAR_6;
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_7);
  if (VAR_8) {
   FUNC_0(VAR_7);
   return VAR_8;
  }
  VAR_4->data_offset += VAR_0;
  VAR_5 -= VAR_0;
  VAR_6 = 1;
 }

 VAR_4->size = VAR_5;
 VAR_4->consecutive = VAR_6;

 return 0;
}
