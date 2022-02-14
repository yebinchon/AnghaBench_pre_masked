
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct ordered_events {scalar_t__ copy_on_queue; } ;


 union perf_event* FUNC_0 (struct ordered_events*,union perf_event*) ;

__attribute__((used)) static union perf_event *FUNC_1(struct ordered_events *VAR_0,
       union perf_event *VAR_1)
{
 return VAR_0->copy_on_queue ? FUNC_0(VAR_0, VAR_1) : VAR_1;
}
