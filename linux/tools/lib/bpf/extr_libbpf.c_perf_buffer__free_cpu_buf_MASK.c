
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_buf {scalar_t__ fd; struct perf_cpu_buf* buf; int cpu; scalar_t__ base; } ;
struct perf_buffer {scalar_t__ page_size; scalar_t__ mmap_size; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct perf_cpu_buf*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct perf_buffer *VAR_1,
          struct perf_cpu_buf *VAR_2)
{
 if (!VAR_2)
  return;
 if (VAR_2->base &&
     FUNC_3(VAR_2->base, VAR_1->mmap_size + VAR_1->page_size))
  FUNC_4("failed to munmap cpu_buf #%d\n", VAR_2->cpu);
 if (VAR_2->fd >= 0) {
  FUNC_2(VAR_2->fd, VAR_0, 0);
  FUNC_0(VAR_2->fd);
 }
 FUNC_1(VAR_2->buf);
 FUNC_1(VAR_2);
}
