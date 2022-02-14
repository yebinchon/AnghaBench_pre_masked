
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_buf {int buf_size; int buf; int base; } ;
struct perf_buffer {int page_size; int mmap_size; } ;
typedef enum bpf_perf_event_ret { ____Placeholder_bpf_perf_event_ret } bpf_perf_event_ret ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int *,int ,struct perf_cpu_buf*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct perf_buffer *VAR_2,
     struct perf_cpu_buf *VAR_3)
{
 enum bpf_perf_event_ret VAR_4;

 VAR_4 = FUNC_0(VAR_3->base, VAR_2->mmap_size,
      VAR_2->page_size, &VAR_3->buf,
      &VAR_3->buf_size,
      VAR_1, VAR_3);
 if (VAR_4 != VAR_0)
  return VAR_4;
 return 0;
}
