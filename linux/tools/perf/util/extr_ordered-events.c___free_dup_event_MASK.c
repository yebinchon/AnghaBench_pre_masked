
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
union perf_event {TYPE_1__ header; } ;
struct ordered_events {int cur_alloc_size; } ;


 int FUNC_0 (union perf_event*) ;

__attribute__((used)) static void FUNC_1(struct ordered_events *VAR_0, union perf_event *VAR_1)
{
 if (VAR_1) {
  VAR_0->cur_alloc_size -= VAR_1->header.size;
  FUNC_0(VAR_1);
 }
}
