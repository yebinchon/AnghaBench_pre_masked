
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
union perf_event {TYPE_1__ header; } ;
struct jit_buf_desc {int bytes_written; int output; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,union perf_event*,int ) ;

__attribute__((used)) static int
FUNC_1(struct jit_buf_desc *VAR_0, union perf_event *VAR_1)
{
 ssize_t VAR_2;

 VAR_2 = FUNC_0(VAR_0->output, VAR_1, VAR_1->header.size);
 if (VAR_2 < 0)
  return -1;

 VAR_0->bytes_written += VAR_2;
 return 0;
}
