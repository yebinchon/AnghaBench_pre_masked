
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
typedef int u64 ;
struct ordered_events {int dummy; } ;
struct ordered_event {int timestamp; } ;


 struct ordered_event* FUNC_0 (struct ordered_events*,union perf_event*) ;
 int FUNC_1 (struct ordered_events*,struct ordered_event*) ;

__attribute__((used)) static struct ordered_event *
FUNC_2(struct ordered_events *VAR_0, u64 VAR_1,
      union perf_event *VAR_2)
{
 struct ordered_event *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (VAR_3) {
  VAR_3->timestamp = VAR_1;
  FUNC_1(VAR_0, VAR_3);
 }

 return VAR_3;
}
