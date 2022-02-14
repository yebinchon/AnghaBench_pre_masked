
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* stream_id; void* id; void* time; } ;
union perf_event {TYPE_1__ throttle; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (union perf_event*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(union perf_event *VAR_0,
          bool VAR_1)
{
 VAR_0->throttle.time = FUNC_0(VAR_0->throttle.time);
 VAR_0->throttle.id = FUNC_0(VAR_0->throttle.id);
 VAR_0->throttle.stream_id = FUNC_0(VAR_0->throttle.stream_id);

 if (VAR_1)
  FUNC_1(VAR_0, &VAR_0->throttle + 1);
}
