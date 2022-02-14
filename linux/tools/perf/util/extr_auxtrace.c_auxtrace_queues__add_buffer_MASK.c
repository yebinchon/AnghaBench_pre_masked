
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {int data; scalar_t__ one_mmap_addr; scalar_t__ one_mmap_offset; scalar_t__ one_mmap; } ;
struct auxtrace_queues {int dummy; } ;
struct auxtrace_buffer {scalar_t__ size; int data_needs_freeing; scalar_t__ data; scalar_t__ data_offset; int cpu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct auxtrace_buffer*) ;
 scalar_t__ FUNC_1 (scalar_t__,struct perf_session*) ;
 int FUNC_2 (struct auxtrace_queues*,unsigned int,struct auxtrace_buffer*) ;
 int FUNC_3 (struct auxtrace_queues*,unsigned int,struct auxtrace_buffer*) ;
 scalar_t__ FUNC_4 (struct perf_session*,int ) ;
 struct auxtrace_buffer* FUNC_5 (struct auxtrace_buffer*,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct auxtrace_queues *VAR_3,
           struct perf_session *VAR_4,
           unsigned int VAR_5,
           struct auxtrace_buffer *VAR_6,
           struct auxtrace_buffer **VAR_7)
{
 int VAR_8 = -VAR_2;

 if (FUNC_4(VAR_4, VAR_6->cpu))
  return 0;

 VAR_6 = FUNC_5(VAR_6, sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_2;

 if (VAR_4->one_mmap) {
  VAR_6->data = VAR_6->data_offset - VAR_4->one_mmap_offset +
          VAR_4->one_mmap_addr;
 } else if (FUNC_6(VAR_4->data)) {
  VAR_6->data = FUNC_1(VAR_6->size, VAR_4);
  if (!VAR_6->data)
   goto out_free;
  VAR_6->data_needs_freeing = 1;
 } else if (VAR_0 == 32 &&
     VAR_6->size > VAR_1) {
  VAR_8 = FUNC_3(VAR_3, VAR_5, VAR_6);
  if (VAR_8)
   goto out_free;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_5, VAR_6);
 if (VAR_8)
  goto out_free;


 if (VAR_7)
  *VAR_7 = VAR_6;

 return 0;

out_free:
 FUNC_0(VAR_6);
 return VAR_8;
}
