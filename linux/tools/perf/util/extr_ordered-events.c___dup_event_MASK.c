
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
union perf_event {TYPE_1__ header; } ;
struct ordered_events {scalar_t__ cur_alloc_size; scalar_t__ max_alloc_size; } ;


 union perf_event* FUNC_0 (union perf_event*,scalar_t__) ;

__attribute__((used)) static union perf_event *FUNC_1(struct ordered_events *VAR_0,
         union perf_event *VAR_1)
{
 union perf_event *VAR_2 = ((void*)0);

 if (VAR_0->cur_alloc_size < VAR_0->max_alloc_size) {
  VAR_2 = FUNC_0(VAR_1, VAR_1->header.size);
  if (VAR_2)
   VAR_0->cur_alloc_size += VAR_1->header.size;
 }

 return VAR_2;
}
