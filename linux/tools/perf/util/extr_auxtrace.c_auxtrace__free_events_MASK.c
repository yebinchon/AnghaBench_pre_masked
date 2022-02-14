
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_session {TYPE_1__* auxtrace; } ;
struct TYPE_2__ {void (* free_events ) (struct perf_session*) ;} ;


 void FUNC_0 (struct perf_session*) ;

void FUNC_1(struct perf_session *VAR_0)
{
 if (!VAR_0->auxtrace)
  return;

 return VAR_0->auxtrace->free_events(VAR_0);
}
