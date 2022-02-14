
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_cpu_buf {int dummy; } ;
struct perf_buffer {TYPE_2__* events; int cpu_cnt; int epoll_fd; } ;
struct TYPE_3__ {struct perf_cpu_buf* ptr; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 int FUNC_0 (int ,TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct perf_buffer*,struct perf_cpu_buf*) ;
 int FUNC_2 (char*,int) ;

int FUNC_3(struct perf_buffer *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1->epoll_fd, VAR_1->events, VAR_1->cpu_cnt, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  struct perf_cpu_buf *VAR_6 = VAR_1->events[VAR_3].data.ptr;

  VAR_5 = FUNC_1(VAR_1, VAR_6);
  if (VAR_5) {
   FUNC_2("error while processing records: %d\n", VAR_5);
   return VAR_5;
  }
 }
 return VAR_4 < 0 ? -VAR_0 : VAR_4;
}
