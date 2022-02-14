
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
union perf_event {TYPE_1__ header; } ;
typedef scalar_t__ u64 ;
struct perf_top {int delay_secs; } ;
struct ordered_event {scalar_t__ timestamp; union perf_event* event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ordered_event *VAR_3, struct perf_top *VAR_4)
{
 union perf_event *VAR_5 = VAR_3->event;
 u64 VAR_6;

 if (VAR_5->header.type != VAR_1)
  return 0;

 VAR_6 = VAR_3->timestamp + VAR_4->delay_secs * VAR_0;
 return VAR_6 < VAR_2;
}
